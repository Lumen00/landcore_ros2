// mecanum_system_hardware.cpp
#include "mecanum_system_hardware.hpp"

#include <cmath>
#include <algorithm>
#include "rclcpp/rclcpp.hpp"
#include <vector>
#include <algorithm>

namespace land_description
{

// ---- per-wheel hardware wiring, indexed to match joint order in URDF ----
// (front_left, front_right, back_left, back_right)
namespace
{
struct WheelWiring
{
  int encoder_alert_pin;
  int encoder_pair_pin;
  uint8_t in1_channel;
  uint8_t in2_channel;
};

const std::vector<WheelWiring> kWiring = {
  {13, 19, 3, 2},  // front_left
  {6,  5,  0, 1},  // front_right
  {20, 21, 5, 4},  // back_left
  {26, 16, 6, 7},  // back_right
};
}  // namespace

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
  encoder_tick_prev_.assign(n, 0);

  // Init PID vectors.
  DT_.resize(n);
  motor_errors_.resize(n);
  accumulated_errors_.resize(n);
  last_errors_.resize(n);

  for (size_t i = 0; i < n; i++)
  {
    joint_names_[i] = info.joints[i].name;
    encoder_alert_pins_[i] = kWiring[i].encoder_alert_pin;
    encoder_pair_pins_[i] = kWiring[i].encoder_pair_pin;
  }

  timer_node_ = std::make_shared<rclcpp::Node>(params.hardware_info.name + "_timer_node");
  speed_timer_ = timer_node_->create_wall_timer(
    std::chrono::milliseconds(200),
    [this](){
      MecanumSystemHardware::speed_calc(this, 200);
    }
  );

  timer_executor_ = std::make_shared<rclcpp::executors::SingleThreadedExecutor>();
  timer_executor_->add_node(timer_node_);
  timer_spin_thread_ = std::thread([this]() { timer_executor_->spin(); });

  return hardware_interface::CallbackReturn::SUCCESS;
}

hardware_interface::CallbackReturn MecanumSystemHardware::on_configure(
  const rclcpp_lifecycle::State & /*previous_state*/)
{

  h_ = lgGpiochipOpen(0);
    // if (h < 0)
    // {
    //   RCLCPP_ERROR(
    //     rclcpp::get_logger("MecanumSystemHardware"),
    //     "Failed to open gpiochip for %s: %s (%d)",
    //     joint_names_[i].c_str(), lguErrorText(h), h);
    //   return hardware_interface::CallbackReturn::ERROR;
    // }

  // --- Open GPIO for encoders (ported from dc_encoder_service openInputGPIO) ---
  for (size_t i = 0; i < joint_names_.size(); i++)
  {
    // pin_handles_[i] = h;

    if (//lgGpioClaimInput(h_, 0, encoder_alert_pins_[i]) < 0 ||
        lgGpioClaimInput(h_, 0, encoder_pair_pins_[i]) < 0)
    {
      RCLCPP_ERROR(
        rclcpp::get_logger("MecanumSystemHardware"),
        "Failed to claim encoder pins for %s", joint_names_[i].c_str());
      return hardware_interface::CallbackReturn::ERROR;
    }

    // Get alerts whenever the alert pins on the encoder go high. 
    lgGpioSetAlertsFunc(h_, encoder_alert_pins_[i], &MecanumSystemHardware::encoder_callback, this);
    if (lgGpioClaimAlert(h_, 0, LG_RISING_EDGE, encoder_alert_pins_[i], -1) < 0)
    {
      RCLCPP_ERROR(
        rclcpp::get_logger("MecanumSystemHardware"),
        "Failed to claim alert on pin %d for %s",
        encoder_alert_pins_[i], joint_names_[i].c_str());
      return hardware_interface::CallbackReturn::ERROR;
    }
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

  if (speed_timer_) {
    speed_timer_->cancel();
  }
  if (timer_executor_) {
    timer_executor_->cancel();
  }
  if (timer_spin_thread_.joinable()) {
    timer_spin_thread_.join();
  }
  if (timer_executor_ && timer_node_) {
    timer_executor_->remove_node(timer_node_);
  }
  timer_executor_.reset();

  RCLCPP_INFO(rclcpp::get_logger("MecanumSystemHardware"), "Speed calc stopped.");

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
  const rclcpp::Time & /*time*/, const rclcpp::Duration & period)
{
  std::lock_guard<std::mutex> lock(encoder_mutex_);

  double timeout = 0.1;
  for (size_t i = 0; i < joint_names_.size(); i++)
  {
    if (encoder_timers_[i].elapsedSeconds() >= timeout)
    {
      hw_states_velocities_[i] = 0.0;
      encoder_tick_count_[i] = 0;
    }
    // integrate position from whatever velocity was last computed
    hw_states_positions_[i] += hw_states_velocities_[i] * period.seconds();
  }

  return hardware_interface::return_type::OK;
}

uint16_t MecanumSystemHardware::pid_controller(double current_velocity, double command_velocity, size_t motor_num){
  // Get time elapsed since last call. 
  double dt = DT_[motor_num].elapsedSeconds();
  DT_[motor_num].start();

  // Update the previous error for this motor number
  last_errors_[motor_num] = motor_errors_[motor_num];

  // Calculate and save the new error.
  motor_errors_[motor_num] = std::abs(command_velocity) - current_velocity;

  // Update accumulated error / integral error.
  accumulated_errors_[motor_num] += motor_errors_[motor_num];

  // Calculate PID output.
  double pid_pwm_val = KP_ * motor_errors_[motor_num] + KI_ * accumulated_errors_[motor_num] * dt + KD_ * (motor_errors_[motor_num] - last_errors_[motor_num]) / dt;

  // Convert the calculated double value to uint16_t

  // Clamp the PWM value to prevent future problems.
  if (pid_pwm_val > 500){pid_pwm_val = 500;}
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
      motor_driver_.setPin(in2, false);
      motor_driver_.setPWM(in1, 0, pwm_val);
    }
    else if (cmd < -0.05)
    {
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

void MecanumSystemHardware::speed_calc(void * data, double interval){
  auto * self = static_cast<MecanumSystemHardware *>(data);
  // At set intervals, calculate the speed of each wheel by observing
  // the change in encoder ticks between intervals. 

  std::lock_guard<std::mutex> lock(self->encoder_mutex_);

  // Get the difference between last interval and current time.
  std::vector<int> tick_diff(self->encoder_tick_count_.size()); // Reserve mem space.
  std::transform(
    self->encoder_tick_count_.begin(), self->encoder_tick_count_.end(),
    self->encoder_tick_prev_.begin(), tick_diff.begin(),
    std::minus<int>()
  );

  // Using the tick differences and set interval time, calculate speeds.
  // May require a manual timer to be set if there is overrun. 
    //       (self->encoder_tick_threshold_ / 341.2) * ((2.0 * M_PI) / static_cast<double>(dt));
  std::vector<double> wheel_speeds(tick_diff.size());
  for (int i = 0; i <= int(tick_diff.size()); i++){
    wheel_speeds.push_back((tick_diff[i] / 341.2) * (2.0 / M_PI) / (interval / 1000));
  }
  self->hw_states_velocities_ = wheel_speeds;
  self->encoder_tick_prev_ = self->encoder_tick_count_;

  // Write speed to info log for debugging.
  std::ostringstream ss;
  ss << std::fixed << std::setprecision(3);
  for (size_t i = 0; i < self->hw_states_velocities_.size(); ++i) {
    ss << (i ? ", " : "") << self->hw_states_velocities_[i];
  }
  RCLCPP_INFO(rclcpp::get_logger("MecanumSystemHardware"), "Wheel Speeds: [%s]", ss.str().c_str());
}

void MecanumSystemHardware::encoder_callback(int e, lgGpioAlert_p evt, void * data)
{
  auto * self = static_cast<MecanumSystemHardware *>(data);
  int trigger_pin = evt->report.gpio;


  switch (trigger_pin)
  {
  case 13: // Left Front
    // Read the pair pin level.
    // If the pair is low, we are going forwards. If it is high, we are going backwards.
    // RCLCPP_INFO(rclcpp::get_logger("MecanumSystemHardware"), "Trigger: %i | Pair: %i", trigger_pin, kWiring[0].encoder_pair_pin);
    // RCLCPP_INFO(rclcpp::get_logger("MecanumSystemHardware"), "Pair Val: %i", lgGpioRead(self->h_, kWiring[0].encoder_pair_pin));
    if (lgGpioRead(self->h_, kWiring[0].encoder_pair_pin)){ // High
      self->encoder_tick_count_[0]--;
    }
    else { // Low
      self->encoder_tick_count_[0]++;
    }
    break;
  case 6: // Right Front
    // RCLCPP_INFO(rclcpp::get_logger("MecanumSystemHardware"), "Trigger: %i | Pair: %i", trigger_pin, kWiring[1].encoder_pair_pin);
    // RCLCPP_INFO(rclcpp::get_logger("MecanumSystemHardware"), "Pair Val: %i", lgGpioRead(self->h_, kWiring[1].encoder_pair_pin));
    if (lgGpioRead(self->h_, kWiring[1].encoder_pair_pin)){ // High
      self->encoder_tick_count_[1]--;
    }
    else { // Low
      self->encoder_tick_count_[1]++;
    }
    break;
  case 20: // Left Back
    // RCLCPP_INFO(rclcpp::get_logger("MecanumSystemHardware"), "Trigger: %i | Pair: %i", trigger_pin, kWiring[2].encoder_pair_pin);
    // RCLCPP_INFO(rclcpp::get_logger("MecanumSystemHardware"), "Pair Val: %i", lgGpioRead(self->h_, kWiring[2].encoder_pair_pin));
    if (lgGpioRead(self->h_, kWiring[2].encoder_pair_pin)){ // High
      self->encoder_tick_count_[2]--;
    }
    else { // Low
      self->encoder_tick_count_[2]++;
    }
    break;
  case 26: // Right Back
    // RCLCPP_INFO(rclcpp::get_logger("MecanumSystemHardware"), "Trigger: %i | Pair: %i", trigger_pin, kWiring[3].encoder_pair_pin);
    // RCLCPP_INFO(rclcpp::get_logger("MecanumSystemHardware"), "Pair Val: %i", lgGpioRead(self->h_, kWiring[3].encoder_pair_pin));
    if (lgGpioRead(self->h_, kWiring[3].encoder_pair_pin)){ // High
      self->encoder_tick_count_[3]--;
    }
    else { // Low
      self->encoder_tick_count_[3]++;
    }
    break;

  default:
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"Encoder data not found, %i ", trigger_pin);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"e: %i", e);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"evt->report.gpio: %i", evt->report.gpio);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"data %p", data);
    break;
  }

  // If any of the encoder tick counts meet threshold for revolution, print the tick count/speed.
  // if (std::any_of(self->encoder_tick_count_.begin(), self->encoder_tick_count_.end(), [](int n) {return n % 341 == 0;})){
  //   RCLCPP_INFO(rclcpp::get_logger("MecanumSystemHardware"), "FL: %i  FR: %i BL: %i BR: %i", 
  //     self->encoder_tick_count_[0],
  //     self->encoder_tick_count_[1],
  //     self->encoder_tick_count_[2],
  //     self->encoder_tick_count_[3]);
  // }



  //   if (dt > 0.0L)
  //   {
  //     self->hw_states_velocities_[i] =
  //       (self->encoder_tick_threshold_ / 341.2) * ((2.0 * M_PI) / static_cast<double>(dt));
  //   }
    // return;
  // }

  // RCLCPP_WARN(
    // rclcpp::get_logger("MecanumSystemHardware"), "Unmatched encoder pin: %d", trigger_pin);
}

}  // namespace land_description

#include "pluginlib/class_list_macros.hpp"
PLUGINLIB_EXPORT_CLASS(
  land_description::MecanumSystemHardware, hardware_interface::SystemInterface)