// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from oscp_imu_driver:srv/ZeroOrientation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "oscp_imu_driver/srv/zero_orientation.hpp"


#ifndef OSCP_IMU_DRIVER__SRV__DETAIL__ZERO_ORIENTATION__BUILDER_HPP_
#define OSCP_IMU_DRIVER__SRV__DETAIL__ZERO_ORIENTATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "oscp_imu_driver/srv/detail/zero_orientation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace oscp_imu_driver
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::oscp_imu_driver::srv::ZeroOrientation_Request>()
{
  return ::oscp_imu_driver::srv::ZeroOrientation_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace oscp_imu_driver


namespace oscp_imu_driver
{

namespace srv
{

namespace builder
{

class Init_ZeroOrientation_Response_message
{
public:
  explicit Init_ZeroOrientation_Response_message(::oscp_imu_driver::srv::ZeroOrientation_Response & msg)
  : msg_(msg)
  {}
  ::oscp_imu_driver::srv::ZeroOrientation_Response message(::oscp_imu_driver::srv::ZeroOrientation_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::oscp_imu_driver::srv::ZeroOrientation_Response msg_;
};

class Init_ZeroOrientation_Response_success
{
public:
  Init_ZeroOrientation_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ZeroOrientation_Response_message success(::oscp_imu_driver::srv::ZeroOrientation_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ZeroOrientation_Response_message(msg_);
  }

private:
  ::oscp_imu_driver::srv::ZeroOrientation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::oscp_imu_driver::srv::ZeroOrientation_Response>()
{
  return oscp_imu_driver::srv::builder::Init_ZeroOrientation_Response_success();
}

}  // namespace oscp_imu_driver


namespace oscp_imu_driver
{

namespace srv
{

namespace builder
{

class Init_ZeroOrientation_Event_response
{
public:
  explicit Init_ZeroOrientation_Event_response(::oscp_imu_driver::srv::ZeroOrientation_Event & msg)
  : msg_(msg)
  {}
  ::oscp_imu_driver::srv::ZeroOrientation_Event response(::oscp_imu_driver::srv::ZeroOrientation_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::oscp_imu_driver::srv::ZeroOrientation_Event msg_;
};

class Init_ZeroOrientation_Event_request
{
public:
  explicit Init_ZeroOrientation_Event_request(::oscp_imu_driver::srv::ZeroOrientation_Event & msg)
  : msg_(msg)
  {}
  Init_ZeroOrientation_Event_response request(::oscp_imu_driver::srv::ZeroOrientation_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ZeroOrientation_Event_response(msg_);
  }

private:
  ::oscp_imu_driver::srv::ZeroOrientation_Event msg_;
};

class Init_ZeroOrientation_Event_info
{
public:
  Init_ZeroOrientation_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ZeroOrientation_Event_request info(::oscp_imu_driver::srv::ZeroOrientation_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ZeroOrientation_Event_request(msg_);
  }

private:
  ::oscp_imu_driver::srv::ZeroOrientation_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::oscp_imu_driver::srv::ZeroOrientation_Event>()
{
  return oscp_imu_driver::srv::builder::Init_ZeroOrientation_Event_info();
}

}  // namespace oscp_imu_driver

#endif  // OSCP_IMU_DRIVER__SRV__DETAIL__ZERO_ORIENTATION__BUILDER_HPP_
