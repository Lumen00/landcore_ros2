#include <cstdio>
#include <iostream>
#include "rclcpp/rclcpp.hpp"
#include "dc_encoder_service/srv/motor_pi.hpp"
#include <lgpio.h>
#include <string>
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

void motor_PI_control(const std::shared_ptr<dc_encoder_service::srv::MotorPI::Request> request,
std::shared_ptr<dc_encoder_service::srv::MotorPI::Response> response){
  /*
  Required variables:
  - PWM applied to all four motors. (4 values)
  - Encoder values from all four motors (8 values)
  - 
  */

  request->pwm_in;

  // Read the GPIO pins.
  std::vector<int> left_front_e = {lgGpioRead(pin_handles.at(0), pins.at(0)), lgGpioRead(pin_handles.at(1), pins.at(1))};
  std::vector<int> right_front_e = {lgGpioRead(pin_handles.at(2), pins.at(2)), lgGpioRead(pin_handles.at(3), pins.at(3))};
  std::vector<int> left_back_e = {lgGpioRead(pin_handles.at(4), pins.at(4)), lgGpioRead(pin_handles.at(5), pins.at(5))};
  std::vector<int> right_back_e = {lgGpioRead(pin_handles.at(6), pins.at(6)), lgGpioRead(pin_handles.at(7), pins.at(7))};

  std::vector<std::vector<int>> all_encoders = {left_front_e, right_front_e, left_back_e, right_back_e};

  // Build the log string for all_encoders
  std::string encoder_log = "";
  std::vector<std::string> encoder_names = {"left_front", "right_front", "left_back", "right_back"};
  for (size_t i = 0; i < all_encoders.size(); ++i) {
      encoder_log += encoder_names[i] + ": [";
      for (size_t j = 0; j < all_encoders[i].size(); ++j) {
          encoder_log += std::to_string(all_encoders[i][j]);
          if (j + 1 < all_encoders[i].size()) encoder_log += ", ";
      }
      encoder_log += "]";
      if (i + 1 < all_encoders.size()) encoder_log += " | ";
  }

  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Current encoder values: %s", encoder_log.c_str());

  // For each wheel, apply PI control with encoder feedback and pwm command. 

  // Calculate the response in pwm_out.
  response->pwm_out = 0; 
}

int openInputGPIO(int pin_no){
  // Open the GPIO
  int h = lgGpiochipOpen(4);
  if (h < 0){
    printf("ERROR: %s (%d)\n", lguErrorText(h), h);
  }

  // Set to input mode 
  int e = lgGpioClaimInput(h, 0, pin_no);
  if (e < 0){
    printf("ERROR: %s (%d)\n", lguErrorText(e), e);
    lgGpiochipClose(h);
  }
  return h;
}

int main(int argc, char ** argv)
{
  // Declare output for gpio encoder pings.
  for(auto it = begin(pins); it != end(pins); it++){
    pin_handles.push_back(openInputGPIO(*it));
  }
  
  rclcpp::init(argc, argv);

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("motor_PI_control_server");

  rclcpp::Service<dc_encoder_service::srv::MotorPI>::SharedPtr service =
   node->create_service<dc_encoder_service::srv::MotorPI>("dc_encoder_server", &motor_PI_control);

  rclcpp::spin(node);
  rclcpp::shutdown();

}
