// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from oscp_imu_msgs:msg/OscpRot.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "oscp_imu_msgs/msg/detail/oscp_rot__rosidl_typesupport_introspection_c.h"
#include "oscp_imu_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "oscp_imu_msgs/msg/detail/oscp_rot__functions.h"
#include "oscp_imu_msgs/msg/detail/oscp_rot__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void oscp_imu_msgs__msg__OscpRot__rosidl_typesupport_introspection_c__OscpRot_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  oscp_imu_msgs__msg__OscpRot__init(message_memory);
}

void oscp_imu_msgs__msg__OscpRot__rosidl_typesupport_introspection_c__OscpRot_fini_function(void * message_memory)
{
  oscp_imu_msgs__msg__OscpRot__fini(message_memory);
}

size_t oscp_imu_msgs__msg__OscpRot__rosidl_typesupport_introspection_c__size_function__OscpRot__rotation_matrix(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * oscp_imu_msgs__msg__OscpRot__rosidl_typesupport_introspection_c__get_const_function__OscpRot__rotation_matrix(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * oscp_imu_msgs__msg__OscpRot__rosidl_typesupport_introspection_c__get_function__OscpRot__rotation_matrix(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void oscp_imu_msgs__msg__OscpRot__rosidl_typesupport_introspection_c__fetch_function__OscpRot__rotation_matrix(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    oscp_imu_msgs__msg__OscpRot__rosidl_typesupport_introspection_c__get_const_function__OscpRot__rotation_matrix(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void oscp_imu_msgs__msg__OscpRot__rosidl_typesupport_introspection_c__assign_function__OscpRot__rotation_matrix(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    oscp_imu_msgs__msg__OscpRot__rosidl_typesupport_introspection_c__get_function__OscpRot__rotation_matrix(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember oscp_imu_msgs__msg__OscpRot__rosidl_typesupport_introspection_c__OscpRot_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(oscp_imu_msgs__msg__OscpRot, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "header_byte",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(oscp_imu_msgs__msg__OscpRot, header_byte),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "counter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(oscp_imu_msgs__msg__OscpRot, counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp_ms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(oscp_imu_msgs__msg__OscpRot, timestamp_ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rotation_matrix",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(oscp_imu_msgs__msg__OscpRot, rotation_matrix),  // bytes offset in struct
    NULL,  // default value
    oscp_imu_msgs__msg__OscpRot__rosidl_typesupport_introspection_c__size_function__OscpRot__rotation_matrix,  // size() function pointer
    oscp_imu_msgs__msg__OscpRot__rosidl_typesupport_introspection_c__get_const_function__OscpRot__rotation_matrix,  // get_const(index) function pointer
    oscp_imu_msgs__msg__OscpRot__rosidl_typesupport_introspection_c__get_function__OscpRot__rotation_matrix,  // get(index) function pointer
    oscp_imu_msgs__msg__OscpRot__rosidl_typesupport_introspection_c__fetch_function__OscpRot__rotation_matrix,  // fetch(index, &value) function pointer
    oscp_imu_msgs__msg__OscpRot__rosidl_typesupport_introspection_c__assign_function__OscpRot__rotation_matrix,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(oscp_imu_msgs__msg__OscpRot, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "crc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(oscp_imu_msgs__msg__OscpRot, crc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers oscp_imu_msgs__msg__OscpRot__rosidl_typesupport_introspection_c__OscpRot_message_members = {
  "oscp_imu_msgs__msg",  // message namespace
  "OscpRot",  // message name
  7,  // number of fields
  sizeof(oscp_imu_msgs__msg__OscpRot),
  false,  // has_any_key_member_
  oscp_imu_msgs__msg__OscpRot__rosidl_typesupport_introspection_c__OscpRot_message_member_array,  // message members
  oscp_imu_msgs__msg__OscpRot__rosidl_typesupport_introspection_c__OscpRot_init_function,  // function to initialize message memory (memory has to be allocated)
  oscp_imu_msgs__msg__OscpRot__rosidl_typesupport_introspection_c__OscpRot_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t oscp_imu_msgs__msg__OscpRot__rosidl_typesupport_introspection_c__OscpRot_message_type_support_handle = {
  0,
  &oscp_imu_msgs__msg__OscpRot__rosidl_typesupport_introspection_c__OscpRot_message_members,
  get_message_typesupport_handle_function,
  &oscp_imu_msgs__msg__OscpRot__get_type_hash,
  &oscp_imu_msgs__msg__OscpRot__get_type_description,
  &oscp_imu_msgs__msg__OscpRot__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_oscp_imu_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, oscp_imu_msgs, msg, OscpRot)() {
  oscp_imu_msgs__msg__OscpRot__rosidl_typesupport_introspection_c__OscpRot_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!oscp_imu_msgs__msg__OscpRot__rosidl_typesupport_introspection_c__OscpRot_message_type_support_handle.typesupport_identifier) {
    oscp_imu_msgs__msg__OscpRot__rosidl_typesupport_introspection_c__OscpRot_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &oscp_imu_msgs__msg__OscpRot__rosidl_typesupport_introspection_c__OscpRot_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
