// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from oscp_imu_msgs:msg/OscpGnss.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "oscp_imu_msgs/msg/oscp_gnss.hpp"


#ifndef OSCP_IMU_MSGS__MSG__DETAIL__OSCP_GNSS__TRAITS_HPP_
#define OSCP_IMU_MSGS__MSG__DETAIL__OSCP_GNSS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "oscp_imu_msgs/msg/detail/oscp_gnss__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace oscp_imu_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OscpGnss & msg,
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

  // member: fix_type
  {
    out << "fix_type: ";
    rosidl_generator_traits::value_to_yaml(msg.fix_type, out);
    out << ", ";
  }

  // member: num_satellites
  {
    out << "num_satellites: ";
    rosidl_generator_traits::value_to_yaml(msg.num_satellites, out);
    out << ", ";
  }

  // member: longitude
  {
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << ", ";
  }

  // member: latitude
  {
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << ", ";
  }

  // member: height_mm
  {
    out << "height_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.height_mm, out);
    out << ", ";
  }

  // member: h_accuracy_mm
  {
    out << "h_accuracy_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.h_accuracy_mm, out);
    out << ", ";
  }

  // member: v_accuracy_mm
  {
    out << "v_accuracy_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.v_accuracy_mm, out);
    out << ", ";
  }

  // member: vel_north_mms
  {
    out << "vel_north_mms: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_north_mms, out);
    out << ", ";
  }

  // member: vel_east_mms
  {
    out << "vel_east_mms: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_east_mms, out);
    out << ", ";
  }

  // member: vel_down_mms
  {
    out << "vel_down_mms: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_down_mms, out);
    out << ", ";
  }

  // member: speed_accuracy_mms
  {
    out << "speed_accuracy_mms: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_accuracy_mms, out);
    out << ", ";
  }

  // member: heading_motion
  {
    out << "heading_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_motion, out);
    out << ", ";
  }

  // member: heading_accuracy
  {
    out << "heading_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_accuracy, out);
    out << ", ";
  }

  // member: position_dop
  {
    out << "position_dop: ";
    rosidl_generator_traits::value_to_yaml(msg.position_dop, out);
    out << ", ";
  }

  // member: last_correction_age
  {
    out << "last_correction_age: ";
    rosidl_generator_traits::value_to_yaml(msg.last_correction_age, out);
    out << ", ";
  }

  // member: gnss_status
  {
    out << "gnss_status: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_status, out);
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
  const OscpGnss & msg,
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

  // member: fix_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fix_type: ";
    rosidl_generator_traits::value_to_yaml(msg.fix_type, out);
    out << "\n";
  }

  // member: num_satellites
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_satellites: ";
    rosidl_generator_traits::value_to_yaml(msg.num_satellites, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: height_mm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.height_mm, out);
    out << "\n";
  }

  // member: h_accuracy_mm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "h_accuracy_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.h_accuracy_mm, out);
    out << "\n";
  }

  // member: v_accuracy_mm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_accuracy_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.v_accuracy_mm, out);
    out << "\n";
  }

  // member: vel_north_mms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_north_mms: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_north_mms, out);
    out << "\n";
  }

  // member: vel_east_mms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_east_mms: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_east_mms, out);
    out << "\n";
  }

  // member: vel_down_mms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_down_mms: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_down_mms, out);
    out << "\n";
  }

  // member: speed_accuracy_mms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_accuracy_mms: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_accuracy_mms, out);
    out << "\n";
  }

  // member: heading_motion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_motion, out);
    out << "\n";
  }

  // member: heading_accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_accuracy, out);
    out << "\n";
  }

  // member: position_dop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_dop: ";
    rosidl_generator_traits::value_to_yaml(msg.position_dop, out);
    out << "\n";
  }

  // member: last_correction_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_correction_age: ";
    rosidl_generator_traits::value_to_yaml(msg.last_correction_age, out);
    out << "\n";
  }

  // member: gnss_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gnss_status: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_status, out);
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

inline std::string to_yaml(const OscpGnss & msg, bool use_flow_style = false)
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
  const oscp_imu_msgs::msg::OscpGnss & msg,
  std::ostream & out, size_t indentation = 0)
{
  oscp_imu_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use oscp_imu_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const oscp_imu_msgs::msg::OscpGnss & msg)
{
  return oscp_imu_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<oscp_imu_msgs::msg::OscpGnss>()
{
  return "oscp_imu_msgs::msg::OscpGnss";
}

template<>
inline const char * name<oscp_imu_msgs::msg::OscpGnss>()
{
  return "oscp_imu_msgs/msg/OscpGnss";
}

template<>
struct has_fixed_size<oscp_imu_msgs::msg::OscpGnss>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<oscp_imu_msgs::msg::OscpGnss>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<oscp_imu_msgs::msg::OscpGnss>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OSCP_IMU_MSGS__MSG__DETAIL__OSCP_GNSS__TRAITS_HPP_
