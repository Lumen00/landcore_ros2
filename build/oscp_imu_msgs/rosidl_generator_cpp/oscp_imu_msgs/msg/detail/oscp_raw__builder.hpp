// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from oscp_imu_msgs:msg/OscpRaw.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "oscp_imu_msgs/msg/oscp_raw.hpp"


#ifndef OSCP_IMU_MSGS__MSG__DETAIL__OSCP_RAW__BUILDER_HPP_
#define OSCP_IMU_MSGS__MSG__DETAIL__OSCP_RAW__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "oscp_imu_msgs/msg/detail/oscp_raw__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace oscp_imu_msgs
{

namespace msg
{

namespace builder
{

class Init_OscpRaw_crc
{
public:
  explicit Init_OscpRaw_crc(::oscp_imu_msgs::msg::OscpRaw & msg)
  : msg_(msg)
  {}
  ::oscp_imu_msgs::msg::OscpRaw crc(::oscp_imu_msgs::msg::OscpRaw::_crc_type arg)
  {
    msg_.crc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpRaw msg_;
};

class Init_OscpRaw_status
{
public:
  explicit Init_OscpRaw_status(::oscp_imu_msgs::msg::OscpRaw & msg)
  : msg_(msg)
  {}
  Init_OscpRaw_crc status(::oscp_imu_msgs::msg::OscpRaw::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_OscpRaw_crc(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpRaw msg_;
};

class Init_OscpRaw_temp
{
public:
  explicit Init_OscpRaw_temp(::oscp_imu_msgs::msg::OscpRaw & msg)
  : msg_(msg)
  {}
  Init_OscpRaw_status temp(::oscp_imu_msgs::msg::OscpRaw::_temp_type arg)
  {
    msg_.temp = std::move(arg);
    return Init_OscpRaw_status(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpRaw msg_;
};

class Init_OscpRaw_mag_z
{
public:
  explicit Init_OscpRaw_mag_z(::oscp_imu_msgs::msg::OscpRaw & msg)
  : msg_(msg)
  {}
  Init_OscpRaw_temp mag_z(::oscp_imu_msgs::msg::OscpRaw::_mag_z_type arg)
  {
    msg_.mag_z = std::move(arg);
    return Init_OscpRaw_temp(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpRaw msg_;
};

class Init_OscpRaw_mag_y
{
public:
  explicit Init_OscpRaw_mag_y(::oscp_imu_msgs::msg::OscpRaw & msg)
  : msg_(msg)
  {}
  Init_OscpRaw_mag_z mag_y(::oscp_imu_msgs::msg::OscpRaw::_mag_y_type arg)
  {
    msg_.mag_y = std::move(arg);
    return Init_OscpRaw_mag_z(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpRaw msg_;
};

class Init_OscpRaw_mag_x
{
public:
  explicit Init_OscpRaw_mag_x(::oscp_imu_msgs::msg::OscpRaw & msg)
  : msg_(msg)
  {}
  Init_OscpRaw_mag_y mag_x(::oscp_imu_msgs::msg::OscpRaw::_mag_x_type arg)
  {
    msg_.mag_x = std::move(arg);
    return Init_OscpRaw_mag_y(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpRaw msg_;
};

class Init_OscpRaw_incl_y
{
public:
  explicit Init_OscpRaw_incl_y(::oscp_imu_msgs::msg::OscpRaw & msg)
  : msg_(msg)
  {}
  Init_OscpRaw_mag_x incl_y(::oscp_imu_msgs::msg::OscpRaw::_incl_y_type arg)
  {
    msg_.incl_y = std::move(arg);
    return Init_OscpRaw_mag_x(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpRaw msg_;
};

class Init_OscpRaw_incl_x
{
public:
  explicit Init_OscpRaw_incl_x(::oscp_imu_msgs::msg::OscpRaw & msg)
  : msg_(msg)
  {}
  Init_OscpRaw_incl_y incl_x(::oscp_imu_msgs::msg::OscpRaw::_incl_x_type arg)
  {
    msg_.incl_x = std::move(arg);
    return Init_OscpRaw_incl_y(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpRaw msg_;
};

class Init_OscpRaw_accel_z
{
public:
  explicit Init_OscpRaw_accel_z(::oscp_imu_msgs::msg::OscpRaw & msg)
  : msg_(msg)
  {}
  Init_OscpRaw_incl_x accel_z(::oscp_imu_msgs::msg::OscpRaw::_accel_z_type arg)
  {
    msg_.accel_z = std::move(arg);
    return Init_OscpRaw_incl_x(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpRaw msg_;
};

class Init_OscpRaw_accel_y
{
public:
  explicit Init_OscpRaw_accel_y(::oscp_imu_msgs::msg::OscpRaw & msg)
  : msg_(msg)
  {}
  Init_OscpRaw_accel_z accel_y(::oscp_imu_msgs::msg::OscpRaw::_accel_y_type arg)
  {
    msg_.accel_y = std::move(arg);
    return Init_OscpRaw_accel_z(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpRaw msg_;
};

class Init_OscpRaw_accel_x
{
public:
  explicit Init_OscpRaw_accel_x(::oscp_imu_msgs::msg::OscpRaw & msg)
  : msg_(msg)
  {}
  Init_OscpRaw_accel_y accel_x(::oscp_imu_msgs::msg::OscpRaw::_accel_x_type arg)
  {
    msg_.accel_x = std::move(arg);
    return Init_OscpRaw_accel_y(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpRaw msg_;
};

class Init_OscpRaw_gyro_z
{
public:
  explicit Init_OscpRaw_gyro_z(::oscp_imu_msgs::msg::OscpRaw & msg)
  : msg_(msg)
  {}
  Init_OscpRaw_accel_x gyro_z(::oscp_imu_msgs::msg::OscpRaw::_gyro_z_type arg)
  {
    msg_.gyro_z = std::move(arg);
    return Init_OscpRaw_accel_x(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpRaw msg_;
};

class Init_OscpRaw_gyro_y
{
public:
  explicit Init_OscpRaw_gyro_y(::oscp_imu_msgs::msg::OscpRaw & msg)
  : msg_(msg)
  {}
  Init_OscpRaw_gyro_z gyro_y(::oscp_imu_msgs::msg::OscpRaw::_gyro_y_type arg)
  {
    msg_.gyro_y = std::move(arg);
    return Init_OscpRaw_gyro_z(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpRaw msg_;
};

class Init_OscpRaw_gyro_x
{
public:
  explicit Init_OscpRaw_gyro_x(::oscp_imu_msgs::msg::OscpRaw & msg)
  : msg_(msg)
  {}
  Init_OscpRaw_gyro_y gyro_x(::oscp_imu_msgs::msg::OscpRaw::_gyro_x_type arg)
  {
    msg_.gyro_x = std::move(arg);
    return Init_OscpRaw_gyro_y(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpRaw msg_;
};

class Init_OscpRaw_timestamp_ms
{
public:
  explicit Init_OscpRaw_timestamp_ms(::oscp_imu_msgs::msg::OscpRaw & msg)
  : msg_(msg)
  {}
  Init_OscpRaw_gyro_x timestamp_ms(::oscp_imu_msgs::msg::OscpRaw::_timestamp_ms_type arg)
  {
    msg_.timestamp_ms = std::move(arg);
    return Init_OscpRaw_gyro_x(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpRaw msg_;
};

class Init_OscpRaw_counter
{
public:
  explicit Init_OscpRaw_counter(::oscp_imu_msgs::msg::OscpRaw & msg)
  : msg_(msg)
  {}
  Init_OscpRaw_timestamp_ms counter(::oscp_imu_msgs::msg::OscpRaw::_counter_type arg)
  {
    msg_.counter = std::move(arg);
    return Init_OscpRaw_timestamp_ms(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpRaw msg_;
};

class Init_OscpRaw_header_byte
{
public:
  explicit Init_OscpRaw_header_byte(::oscp_imu_msgs::msg::OscpRaw & msg)
  : msg_(msg)
  {}
  Init_OscpRaw_counter header_byte(::oscp_imu_msgs::msg::OscpRaw::_header_byte_type arg)
  {
    msg_.header_byte = std::move(arg);
    return Init_OscpRaw_counter(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpRaw msg_;
};

class Init_OscpRaw_header
{
public:
  Init_OscpRaw_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OscpRaw_header_byte header(::oscp_imu_msgs::msg::OscpRaw::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OscpRaw_header_byte(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpRaw msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::oscp_imu_msgs::msg::OscpRaw>()
{
  return oscp_imu_msgs::msg::builder::Init_OscpRaw_header();
}

}  // namespace oscp_imu_msgs

#endif  // OSCP_IMU_MSGS__MSG__DETAIL__OSCP_RAW__BUILDER_HPP_
