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

    if (lgGpioClaimInput(h, 0, encoder_alert_pins_[i]) < 0 ||
        lgGpioClaimInput(h, 0, encoder_pair_pins_[i]) < 0)
    {
      RCLCPP_ERROR(
        rclcpp::get_logger("MecanumSystemHardware"),
        "Failed to claim encoder pins for %s", joint_names_[i].c_str());
      return hardware_interface::CallbackReturn::ERROR;
    }

    lgGpioSetAlertsFunc(h, encoder_alert_pins_[i], &MecanumSystemHardware::encoder_callback, this);
    if (lgGpioClaimAlert(h, 0, LG_RISING_EDGE, encoder_alert_pins_[i], -1) < 0)
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
  const rclcpp::Time & /*time*/, const rclcpp::Duration & period)
{
  std::lock_guard<std::mutex> lock(encoder_mutex_);

  double timeout = 0.5;
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

hardware_interface::return_type MecanumSystemHardware::write(
  const rclcpp::Time & /*time*/, const rclcpp::Duration & /*period*/)
{
  // Tune this to your motor's actual max rad/s at full PWM
  const double max_wheel_vel = 7.0*M_PI;

  for (size_t i = 0; i < joint_names_.size(); i++)
  {
    double cmd = hw_commands_velocities_[i];
    double normalized = std::clamp(cmd / max_wheel_vel, -1.0, 1.0);
    uint16_t pwm_val = static_cast<uint16_t>(std::abs(normalized) * 4095);

    uint8_t in1 = kWiring[i].in1_channel;
    uint8_t in2 = kWiring[i].in2_channel;

    if (normalized > 0.0)
    {
      motor_driver_.setPin(in2, false);
      motor_driver_.setPWM(in1, 0, pwm_val);
    }
    else if (normalized < 0.0)
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

void MecanumSystemHardware::encoder_callback(int /*e*/, lgGpioAlert_p evt, void * data)
{
  auto * self = static_cast<MecanumSystemHardware *>(data);
  int trigger_pin = evt->report.gpio;

  std::lock_guard<std::mutex> lock(self->encoder_mutex_);

  for (size_t i = 0; i < self->encoder_alert_pins_.size(); i++)
  {
    if (self->encoder_alert_pins_[i] != trigger_pin)
    {
      continue;
    }

    if (self->encoder_tick_count_[i] < self->encoder_tick_threshold_)
    {
      self->encoder_tick_count_[i] += 1;
      return;
    }

    self->encoder_tick_count_[i] = 0;
    long double dt = self->encoder_timers_[i].elapsedSeconds();
    self->encoder_timers_[i].start();

    if (dt > 0.0L)
    {
      self->hw_states_velocities_[i] =
        (self->encoder_tick_threshold_ / 341.2) * ((2.0 * M_PI) / static_cast<double>(dt));
    }
    return;
  }

  RCLCPP_WARN(
    rclcpp::get_logger("MecanumSystemHardware"), "Unmatched encoder pin: %d", trigger_pin);
}

}  // namespace land_description

#include "pluginlib/class_list_macros.hpp"
PLUGINLIB_EXPORT_CLASS(
  land_description::MecanumSystemHardware, hardware_interface::SystemInterface)