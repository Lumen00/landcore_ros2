// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from oscp_imu_msgs:msg/OscpRot.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "oscp_imu_msgs/msg/detail/oscp_rot__functions.h"
#include "oscp_imu_msgs/msg/detail/oscp_rot__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace oscp_imu_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void OscpRot_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) oscp_imu_msgs::msg::OscpRot(_init);
}

void OscpRot_fini_function(void * message_memory)
{
  auto typed_message = static_cast<oscp_imu_msgs::msg::OscpRot *>(message_memory);
  typed_message->~OscpRot();
}

size_t size_function__OscpRot__rotation_matrix(const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * get_const_function__OscpRot__rotation_matrix(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 9> *>(untyped_member);
  return &member[index];
}

void * get_function__OscpRot__rotation_matrix(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 9> *>(untyped_member);
  return &member[index];
}

void fetch_function__OscpRot__rotation_matrix(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__OscpRot__rotation_matrix(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__OscpRot__rotation_matrix(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__OscpRot__rotation_matrix(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember OscpRot_message_member_array[7] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(oscp_imu_msgs::msg::OscpRot, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "header_byte",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(oscp_imu_msgs::msg::OscpRot, header_byte),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "counter",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(oscp_imu_msgs::msg::OscpRot, counter),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "timestamp_ms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(oscp_imu_msgs::msg::OscpRot, timestamp_ms),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rotation_matrix",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(oscp_imu_msgs::msg::OscpRot, rotation_matrix),  // bytes offset in struct
    nullptr,  // default value
    size_function__OscpRot__rotation_matrix,  // size() function pointer
    get_const_function__OscpRot__rotation_matrix,  // get_const(index) function pointer
    get_function__OscpRot__rotation_matrix,  // get(index) function pointer
    fetch_function__OscpRot__rotation_matrix,  // fetch(index, &value) function pointer
    assign_function__OscpRot__rotation_matrix,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(oscp_imu_msgs::msg::OscpRot, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "crc",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(oscp_imu_msgs::msg::OscpRot, crc),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OscpRot_message_members = {
  "oscp_imu_msgs::msg",  // message namespace
  "OscpRot",  // message name
  7,  // number of fields
  sizeof(oscp_imu_msgs::msg::OscpRot),
  false,  // has_any_key_member_
  OscpRot_message_member_array,  // message members
  OscpRot_init_function,  // function to initialize message memory (memory has to be allocated)
  OscpRot_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t OscpRot_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &OscpRot_message_members,
  get_message_typesupport_handle_function,
  &oscp_imu_msgs__msg__OscpRot__get_type_hash,
  &oscp_imu_msgs__msg__OscpRot__get_type_description,
  &oscp_imu_msgs__msg__OscpRot__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace oscp_imu_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<oscp_imu_msgs::msg::OscpRot>()
{
  return &::oscp_imu_msgs::msg::rosidl_typesupport_introspection_cpp::OscpRot_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, oscp_imu_msgs, msg, OscpRot)() {
  return &::oscp_imu_msgs::msg::rosidl_typesupport_introspection_cpp::OscpRot_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
