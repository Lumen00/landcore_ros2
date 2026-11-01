// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from oscp_imu_driver:srv/GetIMUConfig.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "oscp_imu_driver/srv/get_imu_config.hpp"


#ifndef OSCP_IMU_DRIVER__SRV__DETAIL__GET_IMU_CONFIG__BUILDER_HPP_
#define OSCP_IMU_DRIVER__SRV__DETAIL__GET_IMU_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "oscp_imu_driver/srv/detail/get_imu_config__struct.hpp"
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
auto build<::oscp_imu_driver::srv::GetIMUConfig_Request>()
{
  return ::oscp_imu_driver::srv::GetIMUConfig_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace oscp_imu_driver


namespace oscp_imu_driver
{

namespace srv
{

namespace builder
{

class Init_GetIMUConfig_Response_config_summary
{
public:
  Init_GetIMUConfig_Response_config_summary()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::oscp_imu_driver::srv::GetIMUConfig_Response config_summary(::oscp_imu_driver::srv::GetIMUConfig_Response::_config_summary_type arg)
  {
    msg_.config_summary = std::move(arg);
    return std::move(msg_);
  }

private:
  ::oscp_imu_driver::srv::GetIMUConfig_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::oscp_imu_driver::srv::GetIMUConfig_Response>()
{
  return oscp_imu_driver::srv::builder::Init_GetIMUConfig_Response_config_summary();
}

}  // namespace oscp_imu_driver


namespace oscp_imu_driver
{

namespace srv
{

namespace builder
{

class Init_GetIMUConfig_Event_response
{
public:
  explicit Init_GetIMUConfig_Event_response(::oscp_imu_driver::srv::GetIMUConfig_Event & msg)
  : msg_(msg)
  {}
  ::oscp_imu_driver::srv::GetIMUConfig_Event response(::oscp_imu_driver::srv::GetIMUConfig_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::oscp_imu_driver::srv::GetIMUConfig_Event msg_;
};

class Init_GetIMUConfig_Event_request
{
public:
  explicit Init_GetIMUConfig_Event_request(::oscp_imu_driver::srv::GetIMUConfig_Event & msg)
  : msg_(msg)
  {}
  Init_GetIMUConfig_Event_response request(::oscp_imu_driver::srv::GetIMUConfig_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetIMUConfig_Event_response(msg_);
  }

private:
  ::oscp_imu_driver::srv::GetIMUConfig_Event msg_;
};

class Init_GetIMUConfig_Event_info
{
public:
  Init_GetIMUConfig_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetIMUConfig_Event_request info(::oscp_imu_driver::srv::GetIMUConfig_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetIMUConfig_Event_request(msg_);
  }

private:
  ::oscp_imu_driver::srv::GetIMUConfig_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::oscp_imu_driver::srv::GetIMUConfig_Event>()
{
  return oscp_imu_driver::srv::builder::Init_GetIMUConfig_Event_info();
}

}  // namespace oscp_imu_driver

#endif  // OSCP_IMU_DRIVER__SRV__DETAIL__GET_IMU_CONFIG__BUILDER_HPP_
