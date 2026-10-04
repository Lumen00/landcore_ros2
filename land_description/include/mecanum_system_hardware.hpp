#ifndef LAND_DESCRIPTION__MECANUM_SYSTEM_HARDWARE_HPP_
#define LAND_DESCRIPTION__MECANUM_SYSTEM_HARDWARE_HPP_

#include <vector>
#include <algorithm>
#include <string>
#include <lgpio.h>
#include "motorhat_driver.hpp"
#include "hardware_interface/system_interface.hpp"
#include "hardware_interface/handle.hpp"
#include "rclcpp/rclcpp.hpp"
#include "timer.hpp"
#include <chrono>
#include <thread>

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

        uint16_t pid_controller(double current_velocity, double command_velocity, size_t motor_num);


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
        std::vector<int> encoder_tick_prev_;
        int encoder_tick_threshold_ = 60;        

        std::mutex encoder_mutex_;  // guards the vectors above, since alert callbacks fire async

        Pca9685Driver motor_driver_;

        // Holds the current errors for pid control.
        std::vector<double> motor_errors_; // P Error
        std::vector<double> accumulated_errors_; // I Error
        std::vector<double> last_errors_; // Old P Error

        // KP, KI, KD.
        const double KP_ = 850;
        const double KI_ = 150;
        const double KD_ = 0;

        //  DT - the time since PID control was last called for this motor.
        std::vector<Timer> DT_;
        
        int h_ = -1;

        // rclcpp::Node::SharedPtr timer_node_;
        // rclcpp::TimerBase::SharedPtr speed_timer_;
        // rclcpp::executors::SingleThreadedExecutor::SharedPtr timer_executor_;
        // std::thread timer_spin_thread_;

        static void encoder_callback(int e, lgGpioAlert_p evt, void * data);
        static void speed_calc(void * data, double interval);

        // Static in a class member -> all objects using this class share the same value for this variable.
        // Constexpr -> like using const for read-only, but optimised for compile-time
        static constexpr std::array<int, 16> lookup_ = {
            0,-1,1,2,
            1,0,2,-1,
            -1,2,0,1,
            2,1,-1,0
        };

        // Only need to save the old state of the motor encoders.
        std::vector<uint8_t> old_encoders_ = {
            0b00,
            0b00,
            0b00,
            0b00
        };
};};

#endif