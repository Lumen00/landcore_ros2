// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from magcal_wrapper:action/MagnetometerCalibration.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "magcal_wrapper/action/magnetometer_calibration.hpp"


#ifndef MAGCAL_WRAPPER__ACTION__DETAIL__MAGNETOMETER_CALIBRATION__TRAITS_HPP_
#define MAGCAL_WRAPPER__ACTION__DETAIL__MAGNETOMETER_CALIBRATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "magcal_wrapper/action/detail/magnetometer_calibration__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace magcal_wrapper
{

namespace action
{

inline void to_flow_style_yaml(
  const MagnetometerCalibration_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: start
  {
    out << "start: ";
    rosidl_generator_traits::value_to_yaml(msg.start, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MagnetometerCalibration_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start: ";
    rosidl_generator_traits::value_to_yaml(msg.start, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MagnetometerCalibration_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace magcal_wrapper

namespace rosidl_generator_traits
{

[[deprecated("use magcal_wrapper::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const magcal_wrapper::action::MagnetometerCalibration_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  magcal_wrapper::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use magcal_wrapper::action::to_yaml() instead")]]
inline std::string to_yaml(const magcal_wrapper::action::MagnetometerCalibration_Goal & msg)
{
  return magcal_wrapper::action::to_yaml(msg);
}

template<>
inline const char * data_type<magcal_wrapper::action::MagnetometerCalibration_Goal>()
{
  return "magcal_wrapper::action::MagnetometerCalibration_Goal";
}

template<>
inline const char * name<magcal_wrapper::action::MagnetometerCalibration_Goal>()
{
  return "magcal_wrapper/action/MagnetometerCalibration_Goal";
}

template<>
struct has_fixed_size<magcal_wrapper::action::MagnetometerCalibration_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<magcal_wrapper::action::MagnetometerCalibration_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<magcal_wrapper::action::MagnetometerCalibration_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace magcal_wrapper
{

namespace action
{

inline void to_flow_style_yaml(
  const MagnetometerCalibration_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: hard_iron_x
  {
    out << "hard_iron_x: ";
    rosidl_generator_traits::value_to_yaml(msg.hard_iron_x, out);
    out << ", ";
  }

  // member: hard_iron_y
  {
    out << "hard_iron_y: ";
    rosidl_generator_traits::value_to_yaml(msg.hard_iron_y, out);
    out << ", ";
  }

  // member: hard_iron_z
  {
    out << "hard_iron_z: ";
    rosidl_generator_traits::value_to_yaml(msg.hard_iron_z, out);
    out << ", ";
  }

  // member: soft_iron
  {
    if (msg.soft_iron.size() == 0) {
      out << "soft_iron: []";
    } else {
      out << "soft_iron: [";
      size_t pending_items = msg.soft_iron.size();
      for (auto item : msg.soft_iron) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: fit_error
  {
    out << "fit_error: ";
    rosidl_generator_traits::value_to_yaml(msg.fit_error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MagnetometerCalibration_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: hard_iron_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hard_iron_x: ";
    rosidl_generator_traits::value_to_yaml(msg.hard_iron_x, out);
    out << "\n";
  }

  // member: hard_iron_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hard_iron_y: ";
    rosidl_generator_traits::value_to_yaml(msg.hard_iron_y, out);
    out << "\n";
  }

  // member: hard_iron_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hard_iron_z: ";
    rosidl_generator_traits::value_to_yaml(msg.hard_iron_z, out);
    out << "\n";
  }

  // member: soft_iron
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.soft_iron.size() == 0) {
      out << "soft_iron: []\n";
    } else {
      out << "soft_iron:\n";
      for (auto item : msg.soft_iron) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: fit_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fit_error: ";
    rosidl_generator_traits::value_to_yaml(msg.fit_error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MagnetometerCalibration_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace magcal_wrapper

namespace rosidl_generator_traits
{

[[deprecated("use magcal_wrapper::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const magcal_wrapper::action::MagnetometerCalibration_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  magcal_wrapper::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use magcal_wrapper::action::to_yaml() instead")]]
inline std::string to_yaml(const magcal_wrapper::action::MagnetometerCalibration_Result & msg)
{
  return magcal_wrapper::action::to_yaml(msg);
}

template<>
inline const char * data_type<magcal_wrapper::action::MagnetometerCalibration_Result>()
{
  return "magcal_wrapper::action::MagnetometerCalibration_Result";
}

template<>
inline const char * name<magcal_wrapper::action::MagnetometerCalibration_Result>()
{
  return "magcal_wrapper/action/MagnetometerCalibration_Result";
}

template<>
struct has_fixed_size<magcal_wrapper::action::MagnetometerCalibration_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<magcal_wrapper::action::MagnetometerCalibration_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<magcal_wrapper::action::MagnetometerCalibration_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace magcal_wrapper
{

namespace action
{

inline void to_flow_style_yaml(
  const MagnetometerCalibration_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: progress
  {
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MagnetometerCalibration_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MagnetometerCalibration_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace magcal_wrapper

namespace rosidl_generator_traits
{

[[deprecated("use magcal_wrapper::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const magcal_wrapper::action::MagnetometerCalibration_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  magcal_wrapper::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use magcal_wrapper::action::to_yaml() instead")]]
inline std::string to_yaml(const magcal_wrapper::action::MagnetometerCalibration_Feedback & msg)
{
  return magcal_wrapper::action::to_yaml(msg);
}

template<>
inline const char * data_type<magcal_wrapper::action::MagnetometerCalibration_Feedback>()
{
  return "magcal_wrapper::action::MagnetometerCalibration_Feedback";
}

template<>
inline const char * name<magcal_wrapper::action::MagnetometerCalibration_Feedback>()
{
  return "magcal_wrapper/action/MagnetometerCalibration_Feedback";
}

template<>
struct has_fixed_size<magcal_wrapper::action::MagnetometerCalibration_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<magcal_wrapper::action::MagnetometerCalibration_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<magcal_wrapper::action::MagnetometerCalibration_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "magcal_wrapper/action/detail/magnetometer_calibration__traits.hpp"

namespace magcal_wrapper
{

namespace action
{

inline void to_flow_style_yaml(
  const MagnetometerCalibration_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MagnetometerCalibration_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MagnetometerCalibration_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace magcal_wrapper

namespace rosidl_generator_traits
{

[[deprecated("use magcal_wrapper::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const magcal_wrapper::action::MagnetometerCalibration_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  magcal_wrapper::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use magcal_wrapper::action::to_yaml() instead")]]
inline std::string to_yaml(const magcal_wrapper::action::MagnetometerCalibration_SendGoal_Request & msg)
{
  return magcal_wrapper::action::to_yaml(msg);
}

template<>
inline const char * data_type<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Request>()
{
  return "magcal_wrapper::action::MagnetometerCalibration_SendGoal_Request";
}

template<>
inline const char * name<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Request>()
{
  return "magcal_wrapper/action/MagnetometerCalibration_SendGoal_Request";
}

template<>
struct has_fixed_size<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<magcal_wrapper::action::MagnetometerCalibration_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<magcal_wrapper::action::MagnetometerCalibration_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace magcal_wrapper
{

namespace action
{

inline void to_flow_style_yaml(
  const MagnetometerCalibration_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MagnetometerCalibration_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MagnetometerCalibration_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace magcal_wrapper

namespace rosidl_generator_traits
{

[[deprecated("use magcal_wrapper::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const magcal_wrapper::action::MagnetometerCalibration_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  magcal_wrapper::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use magcal_wrapper::action::to_yaml() instead")]]
inline std::string to_yaml(const magcal_wrapper::action::MagnetometerCalibration_SendGoal_Response & msg)
{
  return magcal_wrapper::action::to_yaml(msg);
}

template<>
inline const char * data_type<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Response>()
{
  return "magcal_wrapper::action::MagnetometerCalibration_SendGoal_Response";
}

template<>
inline const char * name<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Response>()
{
  return "magcal_wrapper/action/MagnetometerCalibration_SendGoal_Response";
}

template<>
struct has_fixed_size<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace magcal_wrapper
{

namespace action
{

inline void to_flow_style_yaml(
  const MagnetometerCalibration_SendGoal_Event & msg,
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
  const MagnetometerCalibration_SendGoal_Event & msg,
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

inline std::string to_yaml(const MagnetometerCalibration_SendGoal_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace magcal_wrapper

namespace rosidl_generator_traits
{

[[deprecated("use magcal_wrapper::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const magcal_wrapper::action::MagnetometerCalibration_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  magcal_wrapper::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use magcal_wrapper::action::to_yaml() instead")]]
inline std::string to_yaml(const magcal_wrapper::action::MagnetometerCalibration_SendGoal_Event & msg)
{
  return magcal_wrapper::action::to_yaml(msg);
}

template<>
inline const char * data_type<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Event>()
{
  return "magcal_wrapper::action::MagnetometerCalibration_SendGoal_Event";
}

template<>
inline const char * name<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Event>()
{
  return "magcal_wrapper/action/MagnetometerCalibration_SendGoal_Event";
}

template<>
struct has_fixed_size<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Request>::value && has_bounded_size<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<magcal_wrapper::action::MagnetometerCalibration_SendGoal>()
{
  return "magcal_wrapper::action::MagnetometerCalibration_SendGoal";
}

template<>
inline const char * name<magcal_wrapper::action::MagnetometerCalibration_SendGoal>()
{
  return "magcal_wrapper/action/MagnetometerCalibration_SendGoal";
}

template<>
struct has_fixed_size<magcal_wrapper::action::MagnetometerCalibration_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Request>::value &&
    has_fixed_size<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<magcal_wrapper::action::MagnetometerCalibration_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Request>::value &&
    has_bounded_size<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<magcal_wrapper::action::MagnetometerCalibration_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace magcal_wrapper
{

namespace action
{

inline void to_flow_style_yaml(
  const MagnetometerCalibration_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MagnetometerCalibration_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MagnetometerCalibration_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace magcal_wrapper

namespace rosidl_generator_traits
{

[[deprecated("use magcal_wrapper::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const magcal_wrapper::action::MagnetometerCalibration_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  magcal_wrapper::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use magcal_wrapper::action::to_yaml() instead")]]
inline std::string to_yaml(const magcal_wrapper::action::MagnetometerCalibration_GetResult_Request & msg)
{
  return magcal_wrapper::action::to_yaml(msg);
}

template<>
inline const char * data_type<magcal_wrapper::action::MagnetometerCalibration_GetResult_Request>()
{
  return "magcal_wrapper::action::MagnetometerCalibration_GetResult_Request";
}

template<>
inline const char * name<magcal_wrapper::action::MagnetometerCalibration_GetResult_Request>()
{
  return "magcal_wrapper/action/MagnetometerCalibration_GetResult_Request";
}

template<>
struct has_fixed_size<magcal_wrapper::action::MagnetometerCalibration_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<magcal_wrapper::action::MagnetometerCalibration_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<magcal_wrapper::action::MagnetometerCalibration_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "magcal_wrapper/action/detail/magnetometer_calibration__traits.hpp"

namespace magcal_wrapper
{

namespace action
{

inline void to_flow_style_yaml(
  const MagnetometerCalibration_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MagnetometerCalibration_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MagnetometerCalibration_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace magcal_wrapper

namespace rosidl_generator_traits
{

[[deprecated("use magcal_wrapper::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const magcal_wrapper::action::MagnetometerCalibration_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  magcal_wrapper::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use magcal_wrapper::action::to_yaml() instead")]]
inline std::string to_yaml(const magcal_wrapper::action::MagnetometerCalibration_GetResult_Response & msg)
{
  return magcal_wrapper::action::to_yaml(msg);
}

template<>
inline const char * data_type<magcal_wrapper::action::MagnetometerCalibration_GetResult_Response>()
{
  return "magcal_wrapper::action::MagnetometerCalibration_GetResult_Response";
}

template<>
inline const char * name<magcal_wrapper::action::MagnetometerCalibration_GetResult_Response>()
{
  return "magcal_wrapper/action/MagnetometerCalibration_GetResult_Response";
}

template<>
struct has_fixed_size<magcal_wrapper::action::MagnetometerCalibration_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<magcal_wrapper::action::MagnetometerCalibration_Result>::value> {};

template<>
struct has_bounded_size<magcal_wrapper::action::MagnetometerCalibration_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<magcal_wrapper::action::MagnetometerCalibration_Result>::value> {};

template<>
struct is_message<magcal_wrapper::action::MagnetometerCalibration_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace magcal_wrapper
{

namespace action
{

inline void to_flow_style_yaml(
  const MagnetometerCalibration_GetResult_Event & msg,
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
  const MagnetometerCalibration_GetResult_Event & msg,
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

inline std::string to_yaml(const MagnetometerCalibration_GetResult_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace magcal_wrapper

namespace rosidl_generator_traits
{

[[deprecated("use magcal_wrapper::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const magcal_wrapper::action::MagnetometerCalibration_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  magcal_wrapper::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use magcal_wrapper::action::to_yaml() instead")]]
inline std::string to_yaml(const magcal_wrapper::action::MagnetometerCalibration_GetResult_Event & msg)
{
  return magcal_wrapper::action::to_yaml(msg);
}

template<>
inline const char * data_type<magcal_wrapper::action::MagnetometerCalibration_GetResult_Event>()
{
  return "magcal_wrapper::action::MagnetometerCalibration_GetResult_Event";
}

template<>
inline const char * name<magcal_wrapper::action::MagnetometerCalibration_GetResult_Event>()
{
  return "magcal_wrapper/action/MagnetometerCalibration_GetResult_Event";
}

template<>
struct has_fixed_size<magcal_wrapper::action::MagnetometerCalibration_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<magcal_wrapper::action::MagnetometerCalibration_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<magcal_wrapper::action::MagnetometerCalibration_GetResult_Request>::value && has_bounded_size<magcal_wrapper::action::MagnetometerCalibration_GetResult_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<magcal_wrapper::action::MagnetometerCalibration_GetResult_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<magcal_wrapper::action::MagnetometerCalibration_GetResult>()
{
  return "magcal_wrapper::action::MagnetometerCalibration_GetResult";
}

template<>
inline const char * name<magcal_wrapper::action::MagnetometerCalibration_GetResult>()
{
  return "magcal_wrapper/action/MagnetometerCalibration_GetResult";
}

template<>
struct has_fixed_size<magcal_wrapper::action::MagnetometerCalibration_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<magcal_wrapper::action::MagnetometerCalibration_GetResult_Request>::value &&
    has_fixed_size<magcal_wrapper::action::MagnetometerCalibration_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<magcal_wrapper::action::MagnetometerCalibration_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<magcal_wrapper::action::MagnetometerCalibration_GetResult_Request>::value &&
    has_bounded_size<magcal_wrapper::action::MagnetometerCalibration_GetResult_Response>::value
  >
{
};

template<>
struct is_service<magcal_wrapper::action::MagnetometerCalibration_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<magcal_wrapper::action::MagnetometerCalibration_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<magcal_wrapper::action::MagnetometerCalibration_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "magcal_wrapper/action/detail/magnetometer_calibration__traits.hpp"

namespace magcal_wrapper
{

namespace action
{

inline void to_flow_style_yaml(
  const MagnetometerCalibration_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MagnetometerCalibration_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MagnetometerCalibration_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace magcal_wrapper

namespace rosidl_generator_traits
{

[[deprecated("use magcal_wrapper::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const magcal_wrapper::action::MagnetometerCalibration_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  magcal_wrapper::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use magcal_wrapper::action::to_yaml() instead")]]
inline std::string to_yaml(const magcal_wrapper::action::MagnetometerCalibration_FeedbackMessage & msg)
{
  return magcal_wrapper::action::to_yaml(msg);
}

template<>
inline const char * data_type<magcal_wrapper::action::MagnetometerCalibration_FeedbackMessage>()
{
  return "magcal_wrapper::action::MagnetometerCalibration_FeedbackMessage";
}

template<>
inline const char * name<magcal_wrapper::action::MagnetometerCalibration_FeedbackMessage>()
{
  return "magcal_wrapper/action/MagnetometerCalibration_FeedbackMessage";
}

template<>
struct has_fixed_size<magcal_wrapper::action::MagnetometerCalibration_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<magcal_wrapper::action::MagnetometerCalibration_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<magcal_wrapper::action::MagnetometerCalibration_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<magcal_wrapper::action::MagnetometerCalibration_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<magcal_wrapper::action::MagnetometerCalibration_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<magcal_wrapper::action::MagnetometerCalibration>
  : std::true_type
{
};

template<>
struct is_action_goal<magcal_wrapper::action::MagnetometerCalibration_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<magcal_wrapper::action::MagnetometerCalibration_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<magcal_wrapper::action::MagnetometerCalibration_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MAGCAL_WRAPPER__ACTION__DETAIL__MAGNETOMETER_CALIBRATION__TRAITS_HPP_
