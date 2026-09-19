// mecanum_system_hardware.cpp
#include "mecanum_system_hardware.hpp"

#include <cmath>
#include <algorithm>
#include "rclcpp/rclcpp.hpp"

namespace land_description
{

// ---- per-wheel hardware wiring, indexed to match joint order in URDF ----
// (front_left, front_right, back_left, back_right)
namespace
{
struct WheelWiring
{
  int encoder_alert_pin;// Pin for A channel
  int encoder_pair_pin; // Pin for B channel
  uint8_t in1_channel;  // Pin for input 1
  uint8_t in2_channel;  // Pin for input 2
  int enc_sign;         // Whether to mirror the motor's movement or not. 
};

const std::vector<WheelWiring> kWiring = {
  {13, 19, 3, 2, +1},  // front_left
  {6,  5,  0, 1, +1},  // front_right
  {20, 21, 5, 4, +1},  // back_left
  {26, 16, 6, 7, +1},  // back_right
};
}  // namespace

constexpr double kCountsPerRev = 341.2; // number of counts for a revolution.
constexpr double kAlpha = 0.3;          // velocity low-pass?

// Lookup table. 16-entry table using the 2-bit AB encoder values and returns a -1, 0 or +1
// that indicates if the motor has moved one step forward (+1), one step back (-1), or no movement (0)
constexpr int8_t kLut[16] = {
  0, -1, +1, 0,
  +1, 0, 0, -1,
  -1, 0, 0, +1,
  0, +1, -1, 0
};

hardware_interface::CallbackReturn MecanumSystemHardware::on_init(
  const hardware_interface::HardwareComponentInterfaceParams & params)
{
  const auto & info = params.hardware_info;
  if (
    hardware_interface::SystemInterface::on_init(params) !=
    hardware_interface::CallbackReturn::SUCCESS)
  {
    return hardware_interface::CallbackReturn::ERROR;
  }

  size_t n = info.joints.size();
  if (n != kWiring.size())
  {
    RCLCPP_ERROR(
      rclcpp::get_logger("MecanumSystemHardware"),
      "Expected %zu joints, URDF declared %zu", kWiring.size(), n);
    return hardware_interface::CallbackReturn::ERROR;
  }

  joint_names_.resize(n);
  hw_commands_velocities_.assign(n, 0.0);
  hw_states_velocities_.assign(n, 0.0);
  hw_states_positions_.assign(n, 0.0);

  encoder_alert_pins_.resize(n);
  encoder_pair_pins_.resize(n);
  pin_handles_.assign(n, -1);

  encoder_timers_.resize(n);
  encoder_times_.assign(n, 0.0L);
  encoder_tick_count_.assign(n, 0);

  // Init PID vectors.
  DT_.resize(n);
  motor_errors_.resize(n);
  accumulated_errors_.resize(n);
  last_errors_.resize(n);

  encoder_count_.assign(n, 0);
  last_count_.assign(n, 0);
  enc_a_.assign(n, 0);
  enc_b_.assign(n, 0);
  enc_prev_.assign(n, 0);
  for (size_t i = 0; i < n; i++){
    pin_map_[kWiring[i].encoder_alert_pin] = {i, true};
    pin_map_[kWiring[i].encoder_pair_pin] = {i, false};
  }

  for (size_t i = 0; i < n; i++)
  {
    joint_names_[i] = info.joints[i].name;
    encoder_alert_pins_[i] = kWiring[i].encoder_alert_pin;
    encoder_pair_pins_[i] = kWiring[i].encoder_pair_pin;
  }

  return hardware_interface::CallbackReturn::SUCCESS;
}

hardware_interface::CallbackReturn MecanumSystemHardware::on_configure(
  const rclcpp_lifecycle::State & /*previous_state*/)
{
  // --- Open GPIO for encoders (ported from dc_encoder_service openInputGPIO) ---
  for (size_t i = 0; i < joint_names_.size(); i++)
  {
    int h = lgGpiochipOpen(0);
    if (h < 0)
    {
      RCLCPP_ERROR(
        rclcpp::get_logger("MecanumSystemHardware"),
        "Failed to open gpiochip for %s: %s (%d)",
        joint_names_[i].c_str(), lguErrorText(h), h);
      return hardware_interface::CallbackReturn::ERROR;
    }
    pin_handles_[i] = h;

    // Claim channels A and B as alerts on high and low edges.
    // No need to claim as inputs as this is done when claiming as alerts.
    for (int pin: {encoder_alert_pins_[i], encoder_pair_pins_[i]}){
      if (lgGpioClaimAlert(h, 0, LG_BOTH_EDGES, pin, -1) < 0){
        RCLCPP_ERROR(this->get_logger(), "Failed to claim alert on pin %d for %s",
          pin, joint_names_[i].c_str());
      return hardware_interface::CallbackReturn::ERROR;
      }
      // Register the callback after claiming the pin for alerts.
      if (lgGpioSetAlertsFunc(h, pin, &MecanumSystemHardware::encoder_callback, this))
        RCLCPP_ERROR(this->get_logger(), "Failed to set alert callback on pin %d for %s",
          pin, joint_names_[i].c_str());
          return hardware_interface::CallbackReturn::ERROR;
      }
    
    
      std::lock_guard<std::mutex> lock(encoder_mutex_);
      enc_a_[i] = lgGpioRead(h, encoder_alert_pins_[i]) ? 1 : 0;
      enc_b_[i] = lgGpioRead(h, encoder_pair_pins_[i]) ? 1 : 0;
      enc_prev_[i] = (enc_a_[i] << 1) | enc_b_[i];
      encoder_count_[i] = 0;
      last_count_[i] = 0;
    }

  // --- Open PCA9685 for motor PWM ---
  if (!motor_driver_.open("/dev/i2c-1", 0x60, 50.0))
  {
    RCLCPP_ERROR(rclcpp::get_logger("MecanumSystemHardware"), "Failed to open PCA9685 driver");
    return hardware_interface::CallbackReturn::ERROR;
  }

  return hardware_interface::CallbackReturn::SUCCESS;
}

hardware_interface::CallbackReturn MecanumSystemHardware::on_activate()
{
  // Zero commands so we don't suddenly drive off with stale/garbage values
  std::fill(hw_commands_velocities_.begin(), hw_commands_velocities_.end(), 0.0);
  std::fill(hw_states_velocities_.begin(), hw_states_velocities_.end(), 0.0);

  for (auto & t : encoder_timers_)
  {
    t.start();
  }

  for (auto & t : DT_) // Start the PID timers.
  {
    t.start();
  }

  RCLCPP_INFO(rclcpp::get_logger("MecanumSystemHardware"), "Activated.");
  return hardware_interface::CallbackReturn::SUCCESS;
}

hardware_interface::CallbackReturn MecanumSystemHardware::on_deactivate()
{
  // Safety-critical: stop every motor before giving up control
  for (size_t i = 0; i < joint_names_.size(); i++)
  {
    motor_driver_.setPin(kWiring[i].in1_channel, false);
    motor_driver_.setPin(kWiring[i].in2_channel, false);
  }
  std::fill(hw_commands_velocities_.begin(), hw_commands_velocities_.end(), 0.0);

  RCLCPP_INFO(rclcpp::get_logger("MecanumSystemHardware"), "Deactivated, motors stopped.");
  return hardware_interface::CallbackReturn::SUCCESS;
}

std::vector<hardware_interface::StateInterface> MecanumSystemHardware::export_state_interfaces()
{
  std::vector<hardware_interface::StateInterface> state_interfaces;
  for (size_t i = 0; i < joint_names_.size(); i++)
  {
    state_interfaces.emplace_back(joint_names_[i], "velocity", &hw_states_velocities_[i]);
    state_interfaces.emplace_back(joint_names_[i], "position", &hw_states_positions_[i]);
  }
  return state_interfaces;
}

std::vector<hardware_interface::CommandInterface> MecanumSystemHardware::export_command_interfaces()
{
  std::vector<hardware_interface::CommandInterface> command_interfaces;
  for (size_t i = 0; i < joint_names_.size(); i++)
  {
    command_interfaces.emplace_back(joint_names_[i], "velocity", &hw_commands_velocities_[i]);
  }
  return command_interfaces;
}

hardware_interface::return_type MecanumSystemHardware::read(
  const rclcpp::Time &, const rclcpp::Duration & period)
{
  const double dt = period.seconds();
  if (dt <= 0.0) return hardware_interface::return_type::OK;

  for (size_t i = 0; i < joint_names_.size(); i++)
  {
    int32_t c;
    { std::lock_guard<std::mutex> lock(encoder_mutex_); c = encoder_count_[i]; }

    const int32_t delta = c - last_count_[i];
    last_count_[i] = c;

    const double raw = 2.0 * M_PI * delta / (kCountsPerRev * dt);   // rad/s, signed
    hw_states_velocities_[i] += kAlpha * (raw - hw_states_velocities_[i]);
    hw_states_positions_[i] = 2.0 * M_PI * c / kCountsPerRev;       // no integration drift
  }
  return hardware_interface::return_type::OK;
}

constexpr double kCmdDeadband   = 0.05;   // rad/s, below this the motor is off
constexpr double kPwmMax        = 1600.0; // your existing clamp (full scale is 4095)
constexpr double kReversalPwmCap = 800.0; // PWM ceiling while the wheel still spins the wrong way
constexpr double kReversingVel  = 1.0;    // rad/s of opposing velocity that counts as "reversing"
double I_MAX_ = 300.0;   // integral state limit, see tuning notes

uint16_t MecanumSystemHardware::pid_controller(double current_velocity, double command_velocity, size_t motor_num){
  // If told to stop or in the deadband, clear all errors.
  if (std::abs(command_velocity) <= 0.05) { 
    accumulated_errors_[motor_num] = 0.0;
    last_errors_[motor_num] = 0.0; 
    return 0; 
  }
  
  // Get time elapsed since last call. 
  double dt = DT_[motor_num].elapsedSeconds();
  DT_[motor_num].start();

  // Update the previous error for this motor number
  last_errors_[motor_num] = motor_errors_[motor_num];

  // Calculate and save the new error.
  motor_errors_[motor_num] = std::abs(command_velocity) - std::copysign(1.0, command_velocity) * current_velocity;

  // Update accumulated error / integral error.
  accumulated_errors_[motor_num] += motor_errors_[motor_num];
  accumulated_errors_[motor_num] = std::clamp(accumulated_errors_[motor_num], -I_MAX_, I_MAX_);

  // Calculate PID output.
  double pid_pwm_val = KP_ * motor_errors_[motor_num] + KI_ * accumulated_errors_[motor_num] * dt + KD_ * (motor_errors_[motor_num] - last_errors_[motor_num]) / dt;

  // Convert the calculated double value to uint16_t

  // Clamp the PWM value to prevent future problems.
  if (pid_pwm_val > 1600){pid_pwm_val = 1600;}
  if (pid_pwm_val < 0){pid_pwm_val = 0;}

  return static_cast<uint16_t>(pid_pwm_val);
}

hardware_interface::return_type MecanumSystemHardware::write(
  const rclcpp::Time & /*time*/, const rclcpp::Duration & /*period*/)
{
  // Tune this to your motor's actual max rad/s at full PWM
  // const double max_wheel_vel = 17.8; // Max efficiency point, 17/3 * M_PI // 7.0*M_PI;

  for (size_t i = 0; i < joint_names_.size(); i++)
  {
    double cmd = hw_commands_velocities_[i];
    // double normalized = std::clamp(cmd / max_wheel_vel, -1.0, 1.0);
    // uint16_t pwm_val = static_cast<uint16_t>(std::abs(normalized) * 4095);

    // Use PID controller:
    uint16_t pwm_val = pid_controller(hw_states_velocities_[i], cmd, i);

    uint8_t in1 = kWiring[i].in1_channel;
    uint8_t in2 = kWiring[i].in2_channel;

    if (cmd > 0.05)
    {
      // If not moving, set to a speed to give it a quick kick. 
      // if (abs(hw_states_velocities_[i]) <= 10e-3){
      //   pwm_val = 675;
      // }

      motor_driver_.setPin(in2, false);
      motor_driver_.setPWM(in1, 0, pwm_val);
    }
    else if (cmd < -0.05)
    {
      // if (abs(hw_states_velocities_[i]) <= 10e-3){
      //   pwm_val = 675;
      // }
      motor_driver_.setPin(in1, false);
      motor_driver_.setPWM(in2, 0, pwm_val);
    }
    else
    {
      motor_driver_.setPin(in1, false);
      motor_driver_.setPin(in2, false);
    }
  }

  return hardware_interface::return_type::OK;
}

void MecanumSystemHardware::encoder_callback(int num_alerts, lgGpioAlert_p alerts, void * data)
{
  auto * self = static_cast<MecanumSystemHardware *>(data);
  // int trigger_pin = evt->report.gpio;

  std::lock_guard<std::mutex> lock(self->encoder_mutex_);

  for (int k = 0; k < num_alerts; k++){ // Handle all the alerts.
    const auto & r = alerts[k].report;
    if (r.level > 1) continue;                  // not a real edge

    auto it = self->pin_map_.find(r.gpio);
    if (it == self->pin_map_.end()) continue;

    const size_t i = it->second.motor;
    // use the level reported with the edge, not a fresh pin read
    if (it->second.is_a) self->enc_a_[i] = r.level; else self->enc_b_[i] = r.level;

    const uint8_t curr = (self->enc_a_[i] << 1) | self->enc_b_[i];
    self->encoder_count_[i] += kWiring[i].enc_sign * kLut[(self->enc_prev_[i] << 2) | curr];
    self->enc_prev_[i] = curr;
  }
  // RCLCPP_WARN(
  //   rclcpp::get_logger("MecanumSystemHardware"), "Unmatched encoder pin: %d", trigger_pin);
}

}  // namespace land_description

#include "pluginlib/class_list_macros.hpp"
PLUGINLIB_EXPORT_CLASS(
  land_description::MecanumSystemHardware, hardware_interface::SystemInterface)