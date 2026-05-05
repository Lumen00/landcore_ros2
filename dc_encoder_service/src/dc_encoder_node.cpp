#include <cstdio>
#include <iostream>
#include "rclcpp/rclcpp.hpp"
#include "dc_encoder_service/srv/motor_pi.hpp"
#include <lgpio.h>
#include <string>
#include "dc_encoder_service/timer.hpp"
#include <iterator>
/* 

Create a service which responds to clients with
values read from the encoders.

Encoder details:
  - Encoder 1 -> GPIO5, GPIO6   -> Wheel...
  - Encoder 2 -> GPIO13, GPIO19 -> ...
  - Encoder 3 -> GPIO20, GPIO21 -> ...
  - Encoder 4 -> GPIO16, GPIO26 -> ...
*/
enum class Direction {CLOCKWISE = 1, STOPPED = 0, COUNTER_CLOCKWISE = -1};

std::vector<int> pins = {5, 6, 13, 19, 20, 21, 16, 26};
std::vector<int> pin_handles = {};
std::vector<Timer> encoder_timers = {};
std::vector<double> encoder_elapsed_times = {0,0,0,0};
std::vector<int> read_pins = {6, 13, 20, 26};
// std::vector<Direction> clockwise = {Direction::STOPPED, Direction::STOPPED, Direction::STOPPED, Direction::STOPPED};

void motor_PI_control(const std::shared_ptr<dc_encoder_service::srv::MotorPI::Request> request,
std::shared_ptr<dc_encoder_service::srv::MotorPI::Response> response){
  /*
  Required variables:
  - PWM applied to all four motors. (4 values)
  - Encoder values from all four motors (8 values)
  - 
  */

  request->speed_in_front_left; 
  request->speed_in_front_right; 
  request->speed_in_back_left; 
  request->speed_in_back_right; 


  // Read the GPIO pins.
  // std::vector<int> right_front_e = {lgGpioRead(pin_handles.at(0), pins.at(0)), lgGpioRead(pin_handles.at(1), pins.at(1))};
  // std::vector<int> left_front_e = {lgGpioRead(pin_handles.at(2), pins.at(2)), lgGpioRead(pin_handles.at(3), pins.at(3))};
  // std::vector<int> left_back_e = {lgGpioRead(pin_handles.at(4), pins.at(4)), lgGpioRead(pin_handles.at(5), pins.at(5))};
  // std::vector<int> right_back_e = {lgGpioRead(pin_handles.at(6), pins.at(6)), lgGpioRead(pin_handles.at(7), pins.at(7))};

  // std::vector<std::vector<int>> all_encoders = {left_front_e, right_front_e, left_back_e, right_back_e};

  // Empty array to carry the speed calculations for each motor. 
  std::vector<double> all_encoders = {};
  float timeout = 0.1;

  // Read the current elapsed time and calculate the current speeds for all motors.
  int iter = 0;
  for (auto it = begin(encoder_timers); it != end(encoder_timers); it++){
    // If elapsed time is greater than x seconds (e.g. 0.1 seconds), then assume that speed is 0. 
    if (it->elapsedSeconds() >= timeout){
      all_encoders.push_back(0); // Speed of 0 assumed.
      // clockwise.at(iter) = Direction::STOPPED;
    }
    else { // Otherwise, use the formula RPM = (1/341.2) * (60/dT). Multiply by 2pi/60 for rad/s
      all_encoders.push_back((1/341.2) * ((2*M_PI) / (60 * it->elapsedSeconds())));
    }
    iter += 1;
    // RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"it: %f", it->elapsedSeconds());
  }


  // Build the log string for all_encoders
  std::string encoder_log = "";
  std::vector<std::string> encoder_names = {"right_front", "left_front", "left_back", "right_back"};
  for (size_t i = 0; i < all_encoders.size(); ++i) {
      encoder_log += encoder_names[i] + ": [";
      encoder_log += std::to_string(all_encoders[i]); // Swap with commented section to check individual GPIO status with speeds. 
      // for (size_t j = 0; j < all_encoders[i].size(); ++j) {
          // encoder_log += std::to_string(all_encoders[i][j]);
          // if (j + 1 < all_encoders[i].size()) encoder_log += ", ";
      // }

      // Debug elapsed time.
      encoder_log += " ";
      encoder_log += std::to_string(encoder_timers[i].elapsedSeconds());

      // Direction String.
      // switch (clockwise[i])
      // {
      // case Direction::CLOCKWISE:
      //   encoder_log += " CW";
      //   break;
      // case Direction::COUNTER_CLOCKWISE:
      //   encoder_log += " CCW";
      //   break;
      // default:
      //   encoder_log += " STOP";
      //   break;
      // }

      encoder_log += "]";
      if (i + 1 < all_encoders.size()) encoder_log += " | ";
  }

  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Current encoder values: %s", encoder_log.c_str());

  // For each wheel, apply PI control with encoder feedback and pwm command. 

  // Calculate the response in pwm_out.
  response->pwm_out_front_left = 0; 
  response->pwm_out_front_right = 0; 
  response->pwm_out_back_left = 0; 
  response->pwm_out_back_right = 0; 
}

int openInputGPIO(int pin_no){
  // Open the GPIO
  int h = lgGpiochipOpen(0);
  if (h < 0){
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"ERROR: %s (%d)\n", lguErrorText(h), h);
  }

  // Set to input mode 
  int e = lgGpioClaimInput(h, 0, pin_no);
  if (e < 0){
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"ERROR: %s (%d)\n", lguErrorText(e), e);
    lgGpiochipClose(h);
  }
  return h;
}

void encoder_callback(int e, lgGpioAlert_p evt, void *data){
  // Using the pin number saved to *data, record the time interval for that encoder and restart the timer. 
  int trigger_pin = evt->report.gpio;
  // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Interrupt triggered with motordata: %i", trigger_pin);
  switch (trigger_pin)
  {
  case 6: // Right Front
    // Read GPIO pins for direction.
    // clockwise.at(0) = (lgGpioRead(pin_handles.at(0), pins.at(0)) == 0) ? Direction::CLOCKWISE : Direction::COUNTER_CLOCKWISE;
    // Record time and reset timer.
    // encoder_elapsed_times.at(0) = encoder_timers.at(0).elapsedSeconds();
    encoder_timers.at(0).start();
    // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Interrupt on 5");
    break;
  case 13: // Left Front
    // clockwise.at(1) = (lgGpioRead(pin_handles.at(3), pins.at(3)) == 0) ? Direction::CLOCKWISE : Direction::COUNTER_CLOCKWISE;
    // encoder_elapsed_times.at(1) = encoder_timers.at(1).elapsedSeconds();
    encoder_timers.at(1).start();
    // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Interrupt on 13");
    break;  
  case 20: // Left Back
    // clockwise.at(2) = (lgGpioRead(pin_handles.at(5), pins.at(5)) == 0) ? Direction::CLOCKWISE : Direction::COUNTER_CLOCKWISE;
    // encoder_elapsed_times.at(2) = encoder_timers.at(2).elapsedSeconds();
    encoder_timers.at(2).start();
    // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Interrupt on 20");
    break;  
  case 26: // Right Back
    // clockwise.at(3) = (lgGpioRead(pin_handles.at(6), pins.at(6)) == 0) ? Direction::CLOCKWISE : Direction::COUNTER_CLOCKWISE;
    // encoder_elapsed_times.at(3) = encoder_timers.at(3).elapsedSeconds();
    encoder_timers.at(3).start();
    // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Interrupt on 16");
    break;
  default:
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"Encoder data not found, %i ", trigger_pin);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"e: %i", e);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"evt->report.gpio: %i", evt->report.gpio);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"data %p", data);
    break;
  }
}

void init_encoder_interrupts(int pin_no, int handle){
  // All A pins are to be set to interrupt/alert pins.
  // These pins are even indexes and index 0.
  lgGpioSetAlertsFunc(handle, pin_no, encoder_callback, &pin_no);
  int e = lgGpioClaimAlert(handle, 0, LG_RISING_EDGE, pin_no, -1);

  if (e < 0){
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"ERROR: %s (%d)\n", lguErrorText(e), e);
  }
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Interrupt set on pin number: %i", pin_no);

}

int main(int argc, char ** argv)
{
  // Declare input for gpio encoder pins.
  for(auto it = begin(pins); it != end(pins); it++){
    pin_handles.push_back(openInputGPIO(*it));
    // If an A pin (rising edge if clockwise), run init_encoder_interrupts().
    if (std::any_of(begin(read_pins), end(read_pins), [&it](const int& i){return i == *it;})){
      init_encoder_interrupts(*it, pin_handles.back());
    }
  }

  // Create timers for each encoder pair and start the timers.
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"Creating encoder timers...");
  for (int i=0; i <= 3; i++){
    encoder_timers.push_back(Timer());
    encoder_timers.back().start();
  }

  RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"Starting ROS2 DC Motor Encoder Server...");
  rclcpp::init(argc, argv);

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("motor_PI_control_server");

  rclcpp::Service<dc_encoder_service::srv::MotorPI>::SharedPtr service =
   node->create_service<dc_encoder_service::srv::MotorPI>("dc_encoder_server", &motor_PI_control);

  RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"ROS2 Encoder Server Up.");
  rclcpp::spin(node);
  rclcpp::shutdown();

  for (auto &&i : pin_handles)
  {
    lgGpiochipClose(i);
  }
  

}
