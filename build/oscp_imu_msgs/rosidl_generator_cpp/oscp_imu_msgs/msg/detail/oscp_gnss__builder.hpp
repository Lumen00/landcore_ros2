// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from oscp_imu_msgs:msg/OscpGnss.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "oscp_imu_msgs/msg/oscp_gnss.hpp"


#ifndef OSCP_IMU_MSGS__MSG__DETAIL__OSCP_GNSS__BUILDER_HPP_
#define OSCP_IMU_MSGS__MSG__DETAIL__OSCP_GNSS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "oscp_imu_msgs/msg/detail/oscp_gnss__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace oscp_imu_msgs
{

namespace msg
{

namespace builder
{

class Init_OscpGnss_crc
{
public:
  explicit Init_OscpGnss_crc(::oscp_imu_msgs::msg::OscpGnss & msg)
  : msg_(msg)
  {}
  ::oscp_imu_msgs::msg::OscpGnss crc(::oscp_imu_msgs::msg::OscpGnss::_crc_type arg)
  {
    msg_.crc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpGnss msg_;
};

class Init_OscpGnss_status
{
public:
  explicit Init_OscpGnss_status(::oscp_imu_msgs::msg::OscpGnss & msg)
  : msg_(msg)
  {}
  Init_OscpGnss_crc status(::oscp_imu_msgs::msg::OscpGnss::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_OscpGnss_crc(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpGnss msg_;
};

class Init_OscpGnss_gnss_status
{
public:
  explicit Init_OscpGnss_gnss_status(::oscp_imu_msgs::msg::OscpGnss & msg)
  : msg_(msg)
  {}
  Init_OscpGnss_status gnss_status(::oscp_imu_msgs::msg::OscpGnss::_gnss_status_type arg)
  {
    msg_.gnss_status = std::move(arg);
    return Init_OscpGnss_status(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpGnss msg_;
};

class Init_OscpGnss_last_correction_age
{
public:
  explicit Init_OscpGnss_last_correction_age(::oscp_imu_msgs::msg::OscpGnss & msg)
  : msg_(msg)
  {}
  Init_OscpGnss_gnss_status last_correction_age(::oscp_imu_msgs::msg::OscpGnss::_last_correction_age_type arg)
  {
    msg_.last_correction_age = std::move(arg);
    return Init_OscpGnss_gnss_status(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpGnss msg_;
};

class Init_OscpGnss_position_dop
{
public:
  explicit Init_OscpGnss_position_dop(::oscp_imu_msgs::msg::OscpGnss & msg)
  : msg_(msg)
  {}
  Init_OscpGnss_last_correction_age position_dop(::oscp_imu_msgs::msg::OscpGnss::_position_dop_type arg)
  {
    msg_.position_dop = std::move(arg);
    return Init_OscpGnss_last_correction_age(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpGnss msg_;
};

class Init_OscpGnss_heading_accuracy
{
public:
  explicit Init_OscpGnss_heading_accuracy(::oscp_imu_msgs::msg::OscpGnss & msg)
  : msg_(msg)
  {}
  Init_OscpGnss_position_dop heading_accuracy(::oscp_imu_msgs::msg::OscpGnss::_heading_accuracy_type arg)
  {
    msg_.heading_accuracy = std::move(arg);
    return Init_OscpGnss_position_dop(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpGnss msg_;
};

class Init_OscpGnss_heading_motion
{
public:
  explicit Init_OscpGnss_heading_motion(::oscp_imu_msgs::msg::OscpGnss & msg)
  : msg_(msg)
  {}
  Init_OscpGnss_heading_accuracy heading_motion(::oscp_imu_msgs::msg::OscpGnss::_heading_motion_type arg)
  {
    msg_.heading_motion = std::move(arg);
    return Init_OscpGnss_heading_accuracy(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpGnss msg_;
};

class Init_OscpGnss_speed_accuracy_mms
{
public:
  explicit Init_OscpGnss_speed_accuracy_mms(::oscp_imu_msgs::msg::OscpGnss & msg)
  : msg_(msg)
  {}
  Init_OscpGnss_heading_motion speed_accuracy_mms(::oscp_imu_msgs::msg::OscpGnss::_speed_accuracy_mms_type arg)
  {
    msg_.speed_accuracy_mms = std::move(arg);
    return Init_OscpGnss_heading_motion(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpGnss msg_;
};

class Init_OscpGnss_vel_down_mms
{
public:
  explicit Init_OscpGnss_vel_down_mms(::oscp_imu_msgs::msg::OscpGnss & msg)
  : msg_(msg)
  {}
  Init_OscpGnss_speed_accuracy_mms vel_down_mms(::oscp_imu_msgs::msg::OscpGnss::_vel_down_mms_type arg)
  {
    msg_.vel_down_mms = std::move(arg);
    return Init_OscpGnss_speed_accuracy_mms(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpGnss msg_;
};

class Init_OscpGnss_vel_east_mms
{
public:
  explicit Init_OscpGnss_vel_east_mms(::oscp_imu_msgs::msg::OscpGnss & msg)
  : msg_(msg)
  {}
  Init_OscpGnss_vel_down_mms vel_east_mms(::oscp_imu_msgs::msg::OscpGnss::_vel_east_mms_type arg)
  {
    msg_.vel_east_mms = std::move(arg);
    return Init_OscpGnss_vel_down_mms(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpGnss msg_;
};

class Init_OscpGnss_vel_north_mms
{
public:
  explicit Init_OscpGnss_vel_north_mms(::oscp_imu_msgs::msg::OscpGnss & msg)
  : msg_(msg)
  {}
  Init_OscpGnss_vel_east_mms vel_north_mms(::oscp_imu_msgs::msg::OscpGnss::_vel_north_mms_type arg)
  {
    msg_.vel_north_mms = std::move(arg);
    return Init_OscpGnss_vel_east_mms(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpGnss msg_;
};

class Init_OscpGnss_v_accuracy_mm
{
public:
  explicit Init_OscpGnss_v_accuracy_mm(::oscp_imu_msgs::msg::OscpGnss & msg)
  : msg_(msg)
  {}
  Init_OscpGnss_vel_north_mms v_accuracy_mm(::oscp_imu_msgs::msg::OscpGnss::_v_accuracy_mm_type arg)
  {
    msg_.v_accuracy_mm = std::move(arg);
    return Init_OscpGnss_vel_north_mms(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpGnss msg_;
};

class Init_OscpGnss_h_accuracy_mm
{
public:
  explicit Init_OscpGnss_h_accuracy_mm(::oscp_imu_msgs::msg::OscpGnss & msg)
  : msg_(msg)
  {}
  Init_OscpGnss_v_accuracy_mm h_accuracy_mm(::oscp_imu_msgs::msg::OscpGnss::_h_accuracy_mm_type arg)
  {
    msg_.h_accuracy_mm = std::move(arg);
    return Init_OscpGnss_v_accuracy_mm(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpGnss msg_;
};

class Init_OscpGnss_height_mm
{
public:
  explicit Init_OscpGnss_height_mm(::oscp_imu_msgs::msg::OscpGnss & msg)
  : msg_(msg)
  {}
  Init_OscpGnss_h_accuracy_mm height_mm(::oscp_imu_msgs::msg::OscpGnss::_height_mm_type arg)
  {
    msg_.height_mm = std::move(arg);
    return Init_OscpGnss_h_accuracy_mm(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpGnss msg_;
};

class Init_OscpGnss_latitude
{
public:
  explicit Init_OscpGnss_latitude(::oscp_imu_msgs::msg::OscpGnss & msg)
  : msg_(msg)
  {}
  Init_OscpGnss_height_mm latitude(::oscp_imu_msgs::msg::OscpGnss::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_OscpGnss_height_mm(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpGnss msg_;
};

class Init_OscpGnss_longitude
{
public:
  explicit Init_OscpGnss_longitude(::oscp_imu_msgs::msg::OscpGnss & msg)
  : msg_(msg)
  {}
  Init_OscpGnss_latitude longitude(::oscp_imu_msgs::msg::OscpGnss::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_OscpGnss_latitude(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpGnss msg_;
};

class Init_OscpGnss_num_satellites
{
public:
  explicit Init_OscpGnss_num_satellites(::oscp_imu_msgs::msg::OscpGnss & msg)
  : msg_(msg)
  {}
  Init_OscpGnss_longitude num_satellites(::oscp_imu_msgs::msg::OscpGnss::_num_satellites_type arg)
  {
    msg_.num_satellites = std::move(arg);
    return Init_OscpGnss_longitude(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpGnss msg_;
};

class Init_OscpGnss_fix_type
{
public:
  explicit Init_OscpGnss_fix_type(::oscp_imu_msgs::msg::OscpGnss & msg)
  : msg_(msg)
  {}
  Init_OscpGnss_num_satellites fix_type(::oscp_imu_msgs::msg::OscpGnss::_fix_type_type arg)
  {
    msg_.fix_type = std::move(arg);
    return Init_OscpGnss_num_satellites(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpGnss msg_;
};

class Init_OscpGnss_timestamp_ms
{
public:
  explicit Init_OscpGnss_timestamp_ms(::oscp_imu_msgs::msg::OscpGnss & msg)
  : msg_(msg)
  {}
  Init_OscpGnss_fix_type timestamp_ms(::oscp_imu_msgs::msg::OscpGnss::_timestamp_ms_type arg)
  {
    msg_.timestamp_ms = std::move(arg);
    return Init_OscpGnss_fix_type(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpGnss msg_;
};

class Init_OscpGnss_counter
{
public:
  explicit Init_OscpGnss_counter(::oscp_imu_msgs::msg::OscpGnss & msg)
  : msg_(msg)
  {}
  Init_OscpGnss_timestamp_ms counter(::oscp_imu_msgs::msg::OscpGnss::_counter_type arg)
  {
    msg_.counter = std::move(arg);
    return Init_OscpGnss_timestamp_ms(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpGnss msg_;
};

class Init_OscpGnss_header_byte
{
public:
  explicit Init_OscpGnss_header_byte(::oscp_imu_msgs::msg::OscpGnss & msg)
  : msg_(msg)
  {}
  Init_OscpGnss_counter header_byte(::oscp_imu_msgs::msg::OscpGnss::_header_byte_type arg)
  {
    msg_.header_byte = std::move(arg);
    return Init_OscpGnss_counter(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpGnss msg_;
};

class Init_OscpGnss_header
{
public:
  Init_OscpGnss_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OscpGnss_header_byte header(::oscp_imu_msgs::msg::OscpGnss::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OscpGnss_header_byte(msg_);
  }

private:
  ::oscp_imu_msgs::msg::OscpGnss msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::oscp_imu_msgs::msg::OscpGnss>()
{
  return oscp_imu_msgs::msg::builder::Init_OscpGnss_header();
}

}  // namespace oscp_imu_msgs

#endif  // OSCP_IMU_MSGS__MSG__DETAIL__OSCP_GNSS__BUILDER_HPP_
