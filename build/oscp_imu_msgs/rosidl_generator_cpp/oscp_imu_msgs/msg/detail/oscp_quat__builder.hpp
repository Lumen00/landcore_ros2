// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from oscp_imu_msgs:msg/OscpQuat.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "oscp_imu_msgs/msg/oscp_quat.hpp"


#ifndef OSCP_IMU_MSGS__MSG__DETAIL__OSCP_QUAT__BUILDER_HPP_
#define OSCP_IMU_MSGS__MSG__DETAIL__OSCP_QUAT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "oscp_imu_msgs/msg/detail/oscp_quat__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace oscp_imu_msgs
{

namespace msg
{

namespace builder
{

class Init_OscpQuat_crc
{
public:
  explicit Init_OscpQuat_crc(::oscp_imu_msgs::msg::OscpQuat & msg)
  : msg_(msg)
  {}
  ::oscp_imu_msgs::msg::OscpQuat crc(::oscp_imu_msgs::msg::OscpQuat::_crc_type arg)
  {
    msg_.crc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpQuat msg_;
};

class Init_OscpQuat_status
{
public:
  explicit Init_OscpQuat_status(::oscp_imu_msgs::msg::OscpQuat & msg)
  : msg_(msg)
  {}
  Init_OscpQuat_crc status(::oscp_imu_msgs::msg::OscpQuat::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_OscpQuat_crc(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpQuat msg_;
};

class Init_OscpQuat_quat_z
{
public:
  explicit Init_OscpQuat_quat_z(::oscp_imu_msgs::msg::OscpQuat & msg)
  : msg_(msg)
  {}
  Init_OscpQuat_status quat_z(::oscp_imu_msgs::msg::OscpQuat::_quat_z_type arg)
  {
    msg_.quat_z = std::move(arg);
    return Init_OscpQuat_status(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpQuat msg_;
};

class Init_OscpQuat_quat_y
{
public:
  explicit Init_OscpQuat_quat_y(::oscp_imu_msgs::msg::OscpQuat & msg)
  : msg_(msg)
  {}
  Init_OscpQuat_quat_z quat_y(::oscp_imu_msgs::msg::OscpQuat::_quat_y_type arg)
  {
    msg_.quat_y = std::move(arg);
    return Init_OscpQuat_quat_z(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpQuat msg_;
};

class Init_OscpQuat_quat_x
{
public:
  explicit Init_OscpQuat_quat_x(::oscp_imu_msgs::msg::OscpQuat & msg)
  : msg_(msg)
  {}
  Init_OscpQuat_quat_y quat_x(::oscp_imu_msgs::msg::OscpQuat::_quat_x_type arg)
  {
    msg_.quat_x = std::move(arg);
    return Init_OscpQuat_quat_y(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpQuat msg_;
};

class Init_OscpQuat_quat_w
{
public:
  explicit Init_OscpQuat_quat_w(::oscp_imu_msgs::msg::OscpQuat & msg)
  : msg_(msg)
  {}
  Init_OscpQuat_quat_x quat_w(::oscp_imu_msgs::msg::OscpQuat::_quat_w_type arg)
  {
    msg_.quat_w = std::move(arg);
    return Init_OscpQuat_quat_x(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpQuat msg_;
};

class Init_OscpQuat_timestamp_ms
{
public:
  explicit Init_OscpQuat_timestamp_ms(::oscp_imu_msgs::msg::OscpQuat & msg)
  : msg_(msg)
  {}
  Init_OscpQuat_quat_w timestamp_ms(::oscp_imu_msgs::msg::OscpQuat::_timestamp_ms_type arg)
  {
    msg_.timestamp_ms = std::move(arg);
    return Init_OscpQuat_quat_w(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpQuat msg_;
};

class Init_OscpQuat_counter
{
public:
  explicit Init_OscpQuat_counter(::oscp_imu_msgs::msg::OscpQuat & msg)
  : msg_(msg)
  {}
  Init_OscpQuat_timestamp_ms counter(::oscp_imu_msgs::msg::OscpQuat::_counter_type arg)
  {
    msg_.counter = std::move(arg);
    return Init_OscpQuat_timestamp_ms(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpQuat msg_;
};

class Init_OscpQuat_header_byte
{
public:
  explicit Init_OscpQuat_header_byte(::oscp_imu_msgs::msg::OscpQuat & msg)
  : msg_(msg)
  {}
  Init_OscpQuat_counter header_byte(::oscp_imu_msgs::msg::OscpQuat::_header_byte_type arg)
  {
    msg_.header_byte = std::move(arg);
    return Init_OscpQuat_counter(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpQuat msg_;
};

class Init_OscpQuat_header
{
public:
  Init_OscpQuat_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OscpQuat_header_byte header(::oscp_imu_msgs::msg::OscpQuat::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OscpQuat_header_byte(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpQuat msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::oscp_imu_msgs::msg::OscpQuat>()
{
  return oscp_imu_msgs::msg::builder::Init_OscpQuat_header();
}

}  // namespace oscp_imu_msgs

#endif  // OSCP_IMU_MSGS__MSG__DETAIL__OSCP_QUAT__BUILDER_HPP_
