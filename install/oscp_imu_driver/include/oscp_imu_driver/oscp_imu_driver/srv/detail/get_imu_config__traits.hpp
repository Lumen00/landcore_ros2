// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from oscp_imu_driver:srv/GetIMUConfig.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "oscp_imu_driver/srv/get_imu_config.hpp"


#ifndef OSCP_IMU_DRIVER__SRV__DETAIL__GET_IMU_CONFIG__TRAITS_HPP_
#define OSCP_IMU_DRIVER__SRV__DETAIL__GET_IMU_CONFIG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "oscp_imu_driver/srv/detail/get_imu_config__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace oscp_imu_driver
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetIMUConfig_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetIMUConfig_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetIMUConfig_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace oscp_imu_driver

namespace rosidl_generator_traits
{

[[deprecated("use oscp_imu_driver::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const oscp_imu_driver::srv::GetIMUConfig_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  oscp_imu_driver::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use oscp_imu_driver::srv::to_yaml() instead")]]
inline std::string to_yaml(const oscp_imu_driver::srv::GetIMUConfig_Request & msg)
{
  return oscp_imu_driver::srv::to_yaml(msg);
}

template<>
inline const char * data_type<oscp_imu_driver::srv::GetIMUConfig_Request>()
{
  return "oscp_imu_driver::srv::GetIMUConfig_Request";
}

template<>
inline const char * name<oscp_imu_driver::srv::GetIMUConfig_Request>()
{
  return "oscp_imu_driver/srv/GetIMUConfig_Request";
}

template<>
struct has_fixed_size<oscp_imu_driver::srv::GetIMUConfig_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<oscp_imu_driver::srv::GetIMUConfig_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<oscp_imu_driver::srv::GetIMUConfig_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace oscp_imu_driver
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetIMUConfig_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: config_summary
  {
    out << "config_summary: ";
    rosidl_generator_traits::value_to_yaml(msg.config_summary, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetIMUConfig_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: config_summary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "config_summary: ";
    rosidl_generator_traits::value_to_yaml(msg.config_summary, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetIMUConfig_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace oscp_imu_driver

namespace rosidl_generator_traits
{

[[deprecated("use oscp_imu_driver::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const oscp_imu_driver::srv::GetIMUConfig_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  oscp_imu_driver::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use oscp_imu_driver::srv::to_yaml() instead")]]
inline std::string to_yaml(const oscp_imu_driver::srv::GetIMUConfig_Response & msg)
{
  return oscp_imu_driver::srv::to_yaml(msg);
}

template<>
inline const char * data_type<oscp_imu_driver::srv::GetIMUConfig_Response>()
{
  return "oscp_imu_driver::srv::GetIMUConfig_Response";
}

template<>
inline const char * name<oscp_imu_driver::srv::GetIMUConfig_Response>()
{
  return "oscp_imu_driver/srv/GetIMUConfig_Response";
}

template<>
struct has_fixed_size<oscp_imu_driver::srv::GetIMUConfig_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<oscp_imu_driver::srv::GetIMUConfig_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<oscp_imu_driver::srv::GetIMUConfig_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace oscp_imu_driver
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetIMUConfig_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetIMUConfig_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetIMUConfig_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace oscp_imu_driver

namespace rosidl_generator_traits
{

[[deprecated("use oscp_imu_driver::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const oscp_imu_driver::srv::GetIMUConfig_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  oscp_imu_driver::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use oscp_imu_driver::srv::to_yaml() instead")]]
inline std::string to_yaml(const oscp_imu_driver::srv::GetIMUConfig_Event & msg)
{
  return oscp_imu_driver::srv::to_yaml(msg);
}

template<>
inline const char * data_type<oscp_imu_driver::srv::GetIMUConfig_Event>()
{
  return "oscp_imu_driver::srv::GetIMUConfig_Event";
}

template<>
inline const char * name<oscp_imu_driver::srv::GetIMUConfig_Event>()
{
  return "oscp_imu_driver/srv/GetIMUConfig_Event";
}

template<>
struct has_fixed_size<oscp_imu_driver::srv::GetIMUConfig_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<oscp_imu_driver::srv::GetIMUConfig_Event>
  : std::integral_constant<bool, has_bounded_size<oscp_imu_driver::srv::GetIMUConfig_Request>::value && has_bounded_size<oscp_imu_driver::srv::GetIMUConfig_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<oscp_imu_driver::srv::GetIMUConfig_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<oscp_imu_driver::srv::GetIMUConfig>()
{
  return "oscp_imu_driver::srv::GetIMUConfig";
}

template<>
inline const char * name<oscp_imu_driver::srv::GetIMUConfig>()
{
  return "oscp_imu_driver/srv/GetIMUConfig";
}

template<>
struct has_fixed_size<oscp_imu_driver::srv::GetIMUConfig>
  : std::integral_constant<
    bool,
    has_fixed_size<oscp_imu_driver::srv::GetIMUConfig_Request>::value &&
    has_fixed_size<oscp_imu_driver::srv::GetIMUConfig_Response>::value
  >
{
};

template<>
struct has_bounded_size<oscp_imu_driver::srv::GetIMUConfig>
  : std::integral_constant<
    bool,
    has_bounded_size<oscp_imu_driver::srv::GetIMUConfig_Request>::value &&
    has_bounded_size<oscp_imu_driver::srv::GetIMUConfig_Response>::value
  >
{
};

template<>
struct is_service<oscp_imu_driver::srv::GetIMUConfig>
  : std::true_type
{
};

template<>
struct is_service_request<oscp_imu_driver::srv::GetIMUConfig_Request>
  : std::true_type
{
};

template<>
struct is_service_response<oscp_imu_driver::srv::GetIMUConfig_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OSCP_IMU_DRIVER__SRV__DETAIL__GET_IMU_CONFIG__TRAITS_HPP_
