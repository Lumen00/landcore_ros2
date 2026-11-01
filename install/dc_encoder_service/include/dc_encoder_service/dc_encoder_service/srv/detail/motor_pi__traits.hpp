// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dc_encoder_service:srv/MotorPI.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dc_encoder_service/srv/motor_pi.hpp"


#ifndef DC_ENCODER_SERVICE__SRV__DETAIL__MOTOR_PI__TRAITS_HPP_
#define DC_ENCODER_SERVICE__SRV__DETAIL__MOTOR_PI__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dc_encoder_service/srv/detail/motor_pi__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dc_encoder_service
{

namespace srv
{

inline void to_flow_style_yaml(
  const MotorPI_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: speed_cmd_front_left
  {
    out << "speed_cmd_front_left: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_cmd_front_left, out);
    out << ", ";
  }

  // member: speed_cmd_front_right
  {
    out << "speed_cmd_front_right: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_cmd_front_right, out);
    out << ", ";
  }

  // member: speed_cmd_back_left
  {
    out << "speed_cmd_back_left: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_cmd_back_left, out);
    out << ", ";
  }

  // member: speed_cmd_back_right
  {
    out << "speed_cmd_back_right: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_cmd_back_right, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorPI_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: speed_cmd_front_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_cmd_front_left: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_cmd_front_left, out);
    out << "\n";
  }

  // member: speed_cmd_front_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_cmd_front_right: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_cmd_front_right, out);
    out << "\n";
  }

  // member: speed_cmd_back_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_cmd_back_left: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_cmd_back_left, out);
    out << "\n";
  }

  // member: speed_cmd_back_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_cmd_back_right: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_cmd_back_right, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorPI_Request & msg, bool use_flow_style = false)
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

}  // namespace dc_encoder_service

namespace rosidl_generator_traits
{

[[deprecated("use dc_encoder_service::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dc_encoder_service::srv::MotorPI_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dc_encoder_service::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dc_encoder_service::srv::to_yaml() instead")]]
inline std::string to_yaml(const dc_encoder_service::srv::MotorPI_Request & msg)
{
  return dc_encoder_service::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dc_encoder_service::srv::MotorPI_Request>()
{
  return "dc_encoder_service::srv::MotorPI_Request";
}

template<>
inline const char * name<dc_encoder_service::srv::MotorPI_Request>()
{
  return "dc_encoder_service/srv/MotorPI_Request";
}

template<>
struct has_fixed_size<dc_encoder_service::srv::MotorPI_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dc_encoder_service::srv::MotorPI_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dc_encoder_service::srv::MotorPI_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dc_encoder_service
{

namespace srv
{

inline void to_flow_style_yaml(
  const MotorPI_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: speed_front_left
  {
    out << "speed_front_left: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_front_left, out);
    out << ", ";
  }

  // member: speed_front_right
  {
    out << "speed_front_right: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_front_right, out);
    out << ", ";
  }

  // member: speed_back_left
  {
    out << "speed_back_left: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_back_left, out);
    out << ", ";
  }

  // member: speed_back_right
  {
    out << "speed_back_right: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_back_right, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorPI_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: speed_front_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_front_left: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_front_left, out);
    out << "\n";
  }

  // member: speed_front_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_front_right: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_front_right, out);
    out << "\n";
  }

  // member: speed_back_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_back_left: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_back_left, out);
    out << "\n";
  }

  // member: speed_back_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_back_right: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_back_right, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorPI_Response & msg, bool use_flow_style = false)
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

}  // namespace dc_encoder_service

namespace rosidl_generator_traits
{

[[deprecated("use dc_encoder_service::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dc_encoder_service::srv::MotorPI_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dc_encoder_service::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dc_encoder_service::srv::to_yaml() instead")]]
inline std::string to_yaml(const dc_encoder_service::srv::MotorPI_Response & msg)
{
  return dc_encoder_service::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dc_encoder_service::srv::MotorPI_Response>()
{
  return "dc_encoder_service::srv::MotorPI_Response";
}

template<>
inline const char * name<dc_encoder_service::srv::MotorPI_Response>()
{
  return "dc_encoder_service/srv/MotorPI_Response";
}

template<>
struct has_fixed_size<dc_encoder_service::srv::MotorPI_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dc_encoder_service::srv::MotorPI_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dc_encoder_service::srv::MotorPI_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace dc_encoder_service
{

namespace srv
{

inline void to_flow_style_yaml(
  const MotorPI_Event & msg,
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
  const MotorPI_Event & msg,
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

inline std::string to_yaml(const MotorPI_Event & msg, bool use_flow_style = false)
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

}  // namespace dc_encoder_service

namespace rosidl_generator_traits
{

[[deprecated("use dc_encoder_service::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dc_encoder_service::srv::MotorPI_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  dc_encoder_service::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dc_encoder_service::srv::to_yaml() instead")]]
inline std::string to_yaml(const dc_encoder_service::srv::MotorPI_Event & msg)
{
  return dc_encoder_service::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dc_encoder_service::srv::MotorPI_Event>()
{
  return "dc_encoder_service::srv::MotorPI_Event";
}

template<>
inline const char * name<dc_encoder_service::srv::MotorPI_Event>()
{
  return "dc_encoder_service/srv/MotorPI_Event";
}

template<>
struct has_fixed_size<dc_encoder_service::srv::MotorPI_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dc_encoder_service::srv::MotorPI_Event>
  : std::integral_constant<bool, has_bounded_size<dc_encoder_service::srv::MotorPI_Request>::value && has_bounded_size<dc_encoder_service::srv::MotorPI_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<dc_encoder_service::srv::MotorPI_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dc_encoder_service::srv::MotorPI>()
{
  return "dc_encoder_service::srv::MotorPI";
}

template<>
inline const char * name<dc_encoder_service::srv::MotorPI>()
{
  return "dc_encoder_service/srv/MotorPI";
}

template<>
struct has_fixed_size<dc_encoder_service::srv::MotorPI>
  : std::integral_constant<
    bool,
    has_fixed_size<dc_encoder_service::srv::MotorPI_Request>::value &&
    has_fixed_size<dc_encoder_service::srv::MotorPI_Response>::value
  >
{
};

template<>
struct has_bounded_size<dc_encoder_service::srv::MotorPI>
  : std::integral_constant<
    bool,
    has_bounded_size<dc_encoder_service::srv::MotorPI_Request>::value &&
    has_bounded_size<dc_encoder_service::srv::MotorPI_Response>::value
  >
{
};

template<>
struct is_service<dc_encoder_service::srv::MotorPI>
  : std::true_type
{
};

template<>
struct is_service_request<dc_encoder_service::srv::MotorPI_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dc_encoder_service::srv::MotorPI_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DC_ENCODER_SERVICE__SRV__DETAIL__MOTOR_PI__TRAITS_HPP_
