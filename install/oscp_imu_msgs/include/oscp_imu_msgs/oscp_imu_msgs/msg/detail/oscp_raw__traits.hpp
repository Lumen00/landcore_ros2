// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from oscp_imu_msgs:msg/OscpRaw.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "oscp_imu_msgs/msg/oscp_raw.hpp"


#ifndef OSCP_IMU_MSGS__MSG__DETAIL__OSCP_RAW__TRAITS_HPP_
#define OSCP_IMU_MSGS__MSG__DETAIL__OSCP_RAW__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "oscp_imu_msgs/msg/detail/oscp_raw__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace oscp_imu_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OscpRaw & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: header_byte
  {
    out << "header_byte: ";
    rosidl_generator_traits::value_to_yaml(msg.header_byte, out);
    out << ", ";
  }

  // member: counter
  {
    out << "counter: ";
    rosidl_generator_traits::value_to_yaml(msg.counter, out);
    out << ", ";
  }

  // member: timestamp_ms
  {
    out << "timestamp_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_ms, out);
    out << ", ";
  }

  // member: gyro_x
  {
    out << "gyro_x: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_x, out);
    out << ", ";
  }

  // member: gyro_y
  {
    out << "gyro_y: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_y, out);
    out << ", ";
  }

  // member: gyro_z
  {
    out << "gyro_z: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_z, out);
    out << ", ";
  }

  // member: accel_x
  {
    out << "accel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_x, out);
    out << ", ";
  }

  // member: accel_y
  {
    out << "accel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_y, out);
    out << ", ";
  }

  // member: accel_z
  {
    out << "accel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_z, out);
    out << ", ";
  }

  // member: incl_x
  {
    out << "incl_x: ";
    rosidl_generator_traits::value_to_yaml(msg.incl_x, out);
    out << ", ";
  }

  // member: incl_y
  {
    out << "incl_y: ";
    rosidl_generator_traits::value_to_yaml(msg.incl_y, out);
    out << ", ";
  }

  // member: mag_x
  {
    out << "mag_x: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_x, out);
    out << ", ";
  }

  // member: mag_y
  {
    out << "mag_y: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_y, out);
    out << ", ";
  }

  // member: mag_z
  {
    out << "mag_z: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_z, out);
    out << ", ";
  }

  // member: temp
  {
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: crc
  {
    out << "crc: ";
    rosidl_generator_traits::value_to_yaml(msg.crc, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OscpRaw & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: header_byte
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header_byte: ";
    rosidl_generator_traits::value_to_yaml(msg.header_byte, out);
    out << "\n";
  }

  // member: counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "counter: ";
    rosidl_generator_traits::value_to_yaml(msg.counter, out);
    out << "\n";
  }

  // member: timestamp_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_ms, out);
    out << "\n";
  }

  // member: gyro_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_x: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_x, out);
    out << "\n";
  }

  // member: gyro_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_y: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_y, out);
    out << "\n";
  }

  // member: gyro_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_z: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_z, out);
    out << "\n";
  }

  // member: accel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_x, out);
    out << "\n";
  }

  // member: accel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_y, out);
    out << "\n";
  }

  // member: accel_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_z, out);
    out << "\n";
  }

  // member: incl_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "incl_x: ";
    rosidl_generator_traits::value_to_yaml(msg.incl_x, out);
    out << "\n";
  }

  // member: incl_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "incl_y: ";
    rosidl_generator_traits::value_to_yaml(msg.incl_y, out);
    out << "\n";
  }

  // member: mag_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_x: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_x, out);
    out << "\n";
  }

  // member: mag_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_y: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_y, out);
    out << "\n";
  }

  // member: mag_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_z: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_z, out);
    out << "\n";
  }

  // member: temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: crc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crc: ";
    rosidl_generator_traits::value_to_yaml(msg.crc, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OscpRaw & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace oscp_imu_msgs

namespace rosidl_generator_traits
{

[[deprecated("use oscp_imu_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const oscp_imu_msgs::msg::OscpRaw & msg,
  std::ostream & out, size_t indentation = 0)
{
  oscp_imu_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use oscp_imu_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const oscp_imu_msgs::msg::OscpRaw & msg)
{
  return oscp_imu_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<oscp_imu_msgs::msg::OscpRaw>()
{
  return "oscp_imu_msgs::msg::OscpRaw";
}

template<>
inline const char * name<oscp_imu_msgs::msg::OscpRaw>()
{
  return "oscp_imu_msgs/msg/OscpRaw";
}

template<>
struct has_fixed_size<oscp_imu_msgs::msg::OscpRaw>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<oscp_imu_msgs::msg::OscpRaw>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<oscp_imu_msgs::msg::OscpRaw>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OSCP_IMU_MSGS__MSG__DETAIL__OSCP_RAW__TRAITS_HPP_
