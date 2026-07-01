#include <cstdio>
#include <iostream>
#include "rclcpp/rclcpp.hpp"
#include "dc_encoder_service/srv/motor_pi.hpp"
#include <lgpio.h>
#include <string>
#include "dc_encoder_service/timer.hpp"
#include <iterator>
#include <iomanip>
#include <mutex>
/* 

Create a service which responds to clients with
values read from the encoders.

Encoder details:
  - Encoder 1 -> GPIO5, GPIO6   -> Wheel...
  - Encoder 2 -> GPIO13, GPIO19 -> ...
  - Encoder 3 -> GPIO20, GPIO21 -> ...
  - Encoder 4 -> GPIO16, GPIO26 -> ...
*/

std::vector<int> pins = {5, 6, 13, 19, 20, 21, 16, 26};
std::vector<int> pin_handles = {};
std::vector<Timer> encoder_timers = {};
std::vector<long double> encoder_times = {0,0,0,0};
std::vector<int> encoder_tick_count = {0,0,0,0};
int encoder_tick_threshold = 60;
std::vector<int> read_pins = {6, 13, 20, 26};
double epsilon = std::exp(-9);
std::mutex encoder_mutex;
std::vector<double> all_encoders = {0,0,0,0};

auto to_str = [](double val, int precision = 3) {
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(precision) << val;
    return oss.str();
};

void motor_PI_control(const std::shared_ptr<dc_encoder_service::srv::MotorPI::Request> request,
std::shared_ptr<dc_encoder_service::srv::MotorPI::Response> response){
  request->speed_cmd_front_left;
  request->speed_cmd_front_right;
  request->speed_cmd_back_left;
  request->speed_cmd_back_right;

  // Empty array to carry the speed calculations for each motor. 
  float timeout = 0.5;

  // Read the current elapsed time and calculate the current speeds for all motors.
  int iter = 0;
  for (auto it = begin(encoder_timers); it != end(encoder_timers); it++){
    // If elapsed time is greater than x seconds (e.g. 0.1 seconds), then assume that speed is 0. 
    if (it->elapsedSeconds() >= timeout){
      all_encoders.at(iter) = 0; // Speed of 0 assumed.
      encoder_tick_count.at(iter) = 0;
      iter++;
    }
  }

  // Send back the speed of current wheels.
  response->speed_front_left = all_encoders.at(1); 
  response->speed_front_right = all_encoders.at(0); 
  response->speed_back_left = all_encoders.at(2); 
  response->speed_back_right = all_encoders.at(3); 
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
  // std::lock_guard<std::mutex> lock(encoder_mutex);
  int trigger_pin = evt->report.gpio;
  switch (trigger_pin)
  {
  case 6: // Right Front
    if (encoder_tick_count.at(0) < encoder_tick_threshold){
      encoder_tick_count.at(0) += 1;
      break;
    }
    encoder_tick_count.at(0) = 0;
    encoder_times.at(0) = encoder_timers.at(0).elapsedSeconds();
    encoder_timers.at(0).start();
    all_encoders.at(1) = ((encoder_tick_threshold/341.2) * ((2.0*M_PI) / encoder_times.at(1)));
    break;
  case 13: // Left Front
    if (encoder_tick_count.at(1) < encoder_tick_threshold){
        encoder_tick_count.at(1) += 1;
        break;
    }
    encoder_tick_count.at(1) = 0;
    encoder_times.at(1) = encoder_timers.at(1).elapsedSeconds();
    encoder_timers.at(1).start();
    all_encoders.at(0) = ((encoder_tick_threshold/341.2) * ((2.0*M_PI) / encoder_times.at(0)));
    break;  
  case 20: // Left Back
    if (encoder_tick_count.at(2) < encoder_tick_threshold){
      encoder_tick_count.at(2) += 1;
      break;
    }
    encoder_tick_count.at(2) = 0;
    encoder_times.at(2) = encoder_timers.at(2).elapsedSeconds();
    encoder_timers.at(2).start();
    all_encoders.at(2) = ((encoder_tick_threshold/341.2) * ((2.0*M_PI) / encoder_times.at(2)));
    break;  
  case 26: // Right Back
    if (encoder_tick_count.at(3) < encoder_tick_threshold){
      encoder_tick_count.at(3) += 1;
      break;
    }
    encoder_tick_count.at(3) = 0;
    encoder_times.at(3) = encoder_timers.at(3).elapsedSeconds();
    encoder_timers.at(3).start();
    all_encoders.at(3) = ((encoder_tick_threshold/341.2) * ((2.0*M_PI) / encoder_times.at(3)));
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
