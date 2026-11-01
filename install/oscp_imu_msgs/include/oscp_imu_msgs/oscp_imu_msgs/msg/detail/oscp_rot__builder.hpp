// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from oscp_imu_msgs:msg/OscpRot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "oscp_imu_msgs/msg/oscp_rot.hpp"


#ifndef OSCP_IMU_MSGS__MSG__DETAIL__OSCP_ROT__BUILDER_HPP_
#define OSCP_IMU_MSGS__MSG__DETAIL__OSCP_ROT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "oscp_imu_msgs/msg/detail/oscp_rot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace oscp_imu_msgs
{

namespace msg
{

namespace builder
{

class Init_OscpRot_crc
{
public:
  explicit Init_OscpRot_crc(::oscp_imu_msgs::msg::OscpRot & msg)
  : msg_(msg)
  {}
  ::oscp_imu_msgs::msg::OscpRot crc(::oscp_imu_msgs::msg::OscpRot::_crc_type arg)
  {
    msg_.crc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpRot msg_;
};

class Init_OscpRot_status
{
public:
  explicit Init_OscpRot_status(::oscp_imu_msgs::msg::OscpRot & msg)
  : msg_(msg)
  {}
  Init_OscpRot_crc status(::oscp_imu_msgs::msg::OscpRot::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_OscpRot_crc(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpRot msg_;
};

class Init_OscpRot_rotation_matrix
{
public:
  explicit Init_OscpRot_rotation_matrix(::oscp_imu_msgs::msg::OscpRot & msg)
  : msg_(msg)
  {}
  Init_OscpRot_status rotation_matrix(::oscp_imu_msgs::msg::OscpRot::_rotation_matrix_type arg)
  {
    msg_.rotation_matrix = std::move(arg);
    return Init_OscpRot_status(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpRot msg_;
};

class Init_OscpRot_timestamp_ms
{
public:
  explicit Init_OscpRot_timestamp_ms(::oscp_imu_msgs::msg::OscpRot & msg)
  : msg_(msg)
  {}
  Init_OscpRot_rotation_matrix timestamp_ms(::oscp_imu_msgs::msg::OscpRot::_timestamp_ms_type arg)
  {
    msg_.timestamp_ms = std::move(arg);
    return Init_OscpRot_rotation_matrix(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpRot msg_;
};

class Init_OscpRot_counter
{
public:
  explicit Init_OscpRot_counter(::oscp_imu_msgs::msg::OscpRot & msg)
  : msg_(msg)
  {}
  Init_OscpRot_timestamp_ms counter(::oscp_imu_msgs::msg::OscpRot::_counter_type arg)
  {
    msg_.counter = std::move(arg);
    return Init_OscpRot_timestamp_ms(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpRot msg_;
};

class Init_OscpRot_header_byte
{
public:
  explicit Init_OscpRot_header_byte(::oscp_imu_msgs::msg::OscpRot & msg)
  : msg_(msg)
  {}
  Init_OscpRot_counter header_byte(::oscp_imu_msgs::msg::OscpRot::_header_byte_type arg)
  {
    msg_.header_byte = std::move(arg);
    return Init_OscpRot_counter(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpRot msg_;
};

class Init_OscpRot_header
{
public:
  Init_OscpRot_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OscpRot_header_byte header(::oscp_imu_msgs::msg::OscpRot::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OscpRot_header_byte(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpRot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::oscp_imu_msgs::msg::OscpRot>()
{
  return oscp_imu_msgs::msg::builder::Init_OscpRot_header();
}

}  // namespace oscp_imu_msgs

#endif  // OSCP_IMU_MSGS__MSG__DETAIL__OSCP_ROT__BUILDER_HPP_
