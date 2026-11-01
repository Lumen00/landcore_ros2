// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from oscp_imu_msgs:msg/OscpEuler.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "oscp_imu_msgs/msg/oscp_euler.hpp"


#ifndef OSCP_IMU_MSGS__MSG__DETAIL__OSCP_EULER__BUILDER_HPP_
#define OSCP_IMU_MSGS__MSG__DETAIL__OSCP_EULER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "oscp_imu_msgs/msg/detail/oscp_euler__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace oscp_imu_msgs
{

namespace msg
{

namespace builder
{

class Init_OscpEuler_crc
{
public:
  explicit Init_OscpEuler_crc(::oscp_imu_msgs::msg::OscpEuler & msg)
  : msg_(msg)
  {}
  ::oscp_imu_msgs::msg::OscpEuler crc(::oscp_imu_msgs::msg::OscpEuler::_crc_type arg)
  {
    msg_.crc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpEuler msg_;
};

class Init_OscpEuler_status
{
public:
  explicit Init_OscpEuler_status(::oscp_imu_msgs::msg::OscpEuler & msg)
  : msg_(msg)
  {}
  Init_OscpEuler_crc status(::oscp_imu_msgs::msg::OscpEuler::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_OscpEuler_crc(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpEuler msg_;
};

class Init_OscpEuler_yaw
{
public:
  explicit Init_OscpEuler_yaw(::oscp_imu_msgs::msg::OscpEuler & msg)
  : msg_(msg)
  {}
  Init_OscpEuler_status yaw(::oscp_imu_msgs::msg::OscpEuler::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_OscpEuler_status(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpEuler msg_;
};

class Init_OscpEuler_pitch
{
public:
  explicit Init_OscpEuler_pitch(::oscp_imu_msgs::msg::OscpEuler & msg)
  : msg_(msg)
  {}
  Init_OscpEuler_yaw pitch(::oscp_imu_msgs::msg::OscpEuler::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_OscpEuler_yaw(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpEuler msg_;
};

class Init_OscpEuler_roll
{
public:
  explicit Init_OscpEuler_roll(::oscp_imu_msgs::msg::OscpEuler & msg)
  : msg_(msg)
  {}
  Init_OscpEuler_pitch roll(::oscp_imu_msgs::msg::OscpEuler::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_OscpEuler_pitch(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpEuler msg_;
};

class Init_OscpEuler_timestamp_ms
{
public:
  explicit Init_OscpEuler_timestamp_ms(::oscp_imu_msgs::msg::OscpEuler & msg)
  : msg_(msg)
  {}
  Init_OscpEuler_roll timestamp_ms(::oscp_imu_msgs::msg::OscpEuler::_timestamp_ms_type arg)
  {
    msg_.timestamp_ms = std::move(arg);
    return Init_OscpEuler_roll(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpEuler msg_;
};

class Init_OscpEuler_counter
{
public:
  explicit Init_OscpEuler_counter(::oscp_imu_msgs::msg::OscpEuler & msg)
  : msg_(msg)
  {}
  Init_OscpEuler_timestamp_ms counter(::oscp_imu_msgs::msg::OscpEuler::_counter_type arg)
  {
    msg_.counter = std::move(arg);
    return Init_OscpEuler_timestamp_ms(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpEuler msg_;
};

class Init_OscpEuler_header_byte
{
public:
  explicit Init_OscpEuler_header_byte(::oscp_imu_msgs::msg::OscpEuler & msg)
  : msg_(msg)
  {}
  Init_OscpEuler_counter header_byte(::oscp_imu_msgs::msg::OscpEuler::_header_byte_type arg)
  {
    msg_.header_byte = std::move(arg);
    return Init_OscpEuler_counter(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpEuler msg_;
};

class Init_OscpEuler_header
{
public:
  Init_OscpEuler_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OscpEuler_header_byte header(::oscp_imu_msgs::msg::OscpEuler::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OscpEuler_header_byte(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpEuler msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::oscp_imu_msgs::msg::OscpEuler>()
{
  return oscp_imu_msgs::msg::builder::Init_OscpEuler_header();
}

}  // namespace oscp_imu_msgs

#endif  // OSCP_IMU_MSGS__MSG__DETAIL__OSCP_EULER__BUILDER_HPP_
