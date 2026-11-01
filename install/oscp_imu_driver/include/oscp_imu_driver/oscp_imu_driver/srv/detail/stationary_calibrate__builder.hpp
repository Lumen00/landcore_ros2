// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from oscp_imu_driver:srv/StationaryCalibrate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "oscp_imu_driver/srv/stationary_calibrate.hpp"


#ifndef OSCP_IMU_DRIVER__SRV__DETAIL__STATIONARY_CALIBRATE__BUILDER_HPP_
#define OSCP_IMU_DRIVER__SRV__DETAIL__STATIONARY_CALIBRATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "oscp_imu_driver/srv/detail/stationary_calibrate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace oscp_imu_driver
{

namespace srv
{

namespace builder
{

class Init_StationaryCalibrate_Request_duration
{
public:
  Init_StationaryCalibrate_Request_duration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::oscp_imu_driver::srv::StationaryCalibrate_Request duration(::oscp_imu_driver::srv::StationaryCalibrate_Request::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::oscp_imu_driver::srv::StationaryCalibrate_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::oscp_imu_driver::srv::StationaryCalibrate_Request>()
{
  return oscp_imu_driver::srv::builder::Init_StationaryCalibrate_Request_duration();
}

}  // namespace oscp_imu_driver


namespace oscp_imu_driver
{

namespace srv
{

namespace builder
{

class Init_StationaryCalibrate_Response_message
{
public:
  explicit Init_StationaryCalibrate_Response_message(::oscp_imu_driver::srv::StationaryCalibrate_Response & msg)
  : msg_(msg)
  {}
  ::oscp_imu_driver::srv::StationaryCalibrate_Response message(::oscp_imu_driver::srv::StationaryCalibrate_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::oscp_imu_driver::srv::StationaryCalibrate_Response msg_;
};

class Init_StationaryCalibrate_Response_success
{
public:
  Init_StationaryCalibrate_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StationaryCalibrate_Response_message success(::oscp_imu_driver::srv::StationaryCalibrate_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_StationaryCalibrate_Response_message(msg_);
  }

private:
  ::oscp_imu_driver::srv::StationaryCalibrate_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::oscp_imu_driver::srv::StationaryCalibrate_Response>()
{
  return oscp_imu_driver::srv::builder::Init_StationaryCalibrate_Response_success();
}

}  // namespace oscp_imu_driver


namespace oscp_imu_driver
{

namespace srv
{

namespace builder
{

class Init_StationaryCalibrate_Event_response
{
public:
  explicit Init_StationaryCalibrate_Event_response(::oscp_imu_driver::srv::StationaryCalibrate_Event & msg)
  : msg_(msg)
  {}
  ::oscp_imu_driver::srv::StationaryCalibrate_Event response(::oscp_imu_driver::srv::StationaryCalibrate_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::oscp_imu_driver::srv::StationaryCalibrate_Event msg_;
};

class Init_StationaryCalibrate_Event_request
{
public:
  explicit Init_StationaryCalibrate_Event_request(::oscp_imu_driver::srv::StationaryCalibrate_Event & msg)
  : msg_(msg)
  {}
  Init_StationaryCalibrate_Event_response request(::oscp_imu_driver::srv::StationaryCalibrate_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_StationaryCalibrate_Event_response(msg_);
  }

private:
  ::oscp_imu_driver::srv::StationaryCalibrate_Event msg_;
};

class Init_StationaryCalibrate_Event_info
{
public:
  Init_StationaryCalibrate_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StationaryCalibrate_Event_request info(::oscp_imu_driver::srv::StationaryCalibrate_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_StationaryCalibrate_Event_request(msg_);
  }

private:
  ::oscp_imu_driver::srv::StationaryCalibrate_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::oscp_imu_driver::srv::StationaryCalibrate_Event>()
{
  return oscp_imu_driver::srv::builder::Init_StationaryCalibrate_Event_info();
}

}  // namespace oscp_imu_driver

#endif  // OSCP_IMU_DRIVER__SRV__DETAIL__STATIONARY_CALIBRATE__BUILDER_HPP_
