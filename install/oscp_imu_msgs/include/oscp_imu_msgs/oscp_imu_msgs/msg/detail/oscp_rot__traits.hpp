// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from oscp_imu_msgs:msg/OscpRot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "oscp_imu_msgs/msg/oscp_rot.hpp"


#ifndef OSCP_IMU_MSGS__MSG__DETAIL__OSCP_ROT__TRAITS_HPP_
#define OSCP_IMU_MSGS__MSG__DETAIL__OSCP_ROT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "oscp_imu_msgs/msg/detail/oscp_rot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace oscp_imu_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OscpRot & msg,
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

  // member: rotation_matrix
  {
    if (msg.rotation_matrix.size() == 0) {
      out << "rotation_matrix: []";
    } else {
      out << "rotation_matrix: [";
      size_t pending_items = msg.rotation_matrix.size();
      for (auto item : msg.rotation_matrix) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const OscpRot & msg,
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

  // member: rotation_matrix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rotation_matrix.size() == 0) {
      out << "rotation_matrix: []\n";
    } else {
      out << "rotation_matrix:\n";
      for (auto item : msg.rotation_matrix) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

inline std::string to_yaml(const OscpRot & msg, bool use_flow_style = false)
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
  const oscp_imu_msgs::msg::OscpRot & msg,
  std::ostream & out, size_t indentation = 0)
{
  oscp_imu_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use oscp_imu_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const oscp_imu_msgs::msg::OscpRot & msg)
{
  return oscp_imu_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<oscp_imu_msgs::msg::OscpRot>()
{
  return "oscp_imu_msgs::msg::OscpRot";
}

template<>
inline const char * name<oscp_imu_msgs::msg::OscpRot>()
{
  return "oscp_imu_msgs/msg/OscpRot";
}

template<>
struct has_fixed_size<oscp_imu_msgs::msg::OscpRot>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<oscp_imu_msgs::msg::OscpRot>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<oscp_imu_msgs::msg::OscpRot>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OSCP_IMU_MSGS__MSG__DETAIL__OSCP_ROT__TRAITS_HPP_
