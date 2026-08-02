#ifndef LAND_DESCRIPTION__MECANUM_SYSTEM_HARDWARE_HPP_
#define LAND_DESCRIPTION__MECANUM_SYSTEM_HARDWARE_HPP_

#include <vector>
#include <string>
#include <lgpio.h>
#include "motorhat_driver.hpp"
#include "hardware_interface/system_interface.hpp"
#include "hardware_interface/handle.hpp"
#include "rclcpp/rclcpp.hpp"
#include "timer.hpp"

namespace land_description
{
    // The plugin inherits from hardware_interface::SystemInterface class.
    class MecanumSystemHardware : public hardware_interface::SystemInterface
{
    public:
        // The hardware plugin must implement four public methods: on_init, on_configure, read, write.
        hardware_interface::CallbackReturn on_init(const hardware_interface::HardwareComponentInterfaceParams & params) override;
        hardware_interface::CallbackReturn on_configure(const rclcpp_lifecycle::State & info) override;
        hardware_interface::return_type read(const rclcpp::Time & time, const rclcpp::Duration & period) override;
        hardware_interface::return_type write(const rclcpp::Time & time, const rclcpp::Duration & period) override;

        // Functions for when stopping and starting.
        hardware_interface::CallbackReturn on_activate();    // Use to zero out commands (e.g. velocities), start callbacks, etc.
        hardware_interface::CallbackReturn on_deactivate();  // Zero PWM output, disable motors, stop callbacks, etc.

        // Connects C++ variables to the interfaces in the controller manager to give values when requested.
        std::vector<hardware_interface::StateInterface> export_state_interfaces() override;
        std::vector<hardware_interface::CommandInterface> export_command_interfaces() override;

    private:
        std::vector<std::string> joint_names_;
        std::vector<double> hw_commands_velocities_; // what the controller sends (velocity command)
        std::vector<double> hw_states_velocities_;   // what read() reports back (encoder velocities)
        std::vector<double> hw_states_positions_;    // integrated position        

        // Encoder alert pins
        std::vector<int> encoder_alert_pins_;
        std::vector<int> encoder_pair_pins_;
        std::vector<int> pin_handles_;

        std::vector<Timer> encoder_timers_;
        std::vector<long double> encoder_times_;
        std::vector<int> encoder_tick_count_;
        int encoder_tick_threshold_ = 60;

        std::mutex encoder_mutex_;  // guards the vectors above, since alert callbacks fire async

        Pca9685Driver motor_driver_;

        static void encoder_callback(int e, lgGpioAlert_p evt, void * data);
};};

#endif