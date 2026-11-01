// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from oscp_imu_msgs:msg/OscpQuat.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "oscp_imu_msgs/msg/detail/oscp_quat__rosidl_typesupport_introspection_c.h"
#include "oscp_imu_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "oscp_imu_msgs/msg/detail/oscp_quat__functions.h"
#include "oscp_imu_msgs/msg/detail/oscp_quat__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void oscp_imu_msgs__msg__OscpQuat__rosidl_typesupport_introspection_c__OscpQuat_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  oscp_imu_msgs__msg__OscpQuat__init(message_memory);
}

void oscp_imu_msgs__msg__OscpQuat__rosidl_typesupport_introspection_c__OscpQuat_fini_function(void * message_memory)
{
  oscp_imu_msgs__msg__OscpQuat__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember oscp_imu_msgs__msg__OscpQuat__rosidl_typesupport_introspection_c__OscpQuat_message_member_array[10] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(oscp_imu_msgs__msg__OscpQuat, header),  // bytes offset in struct
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
    offsetof(oscp_imu_msgs__msg__OscpQuat, header_byte),  // bytes offset in struct
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
    offsetof(oscp_imu_msgs__msg__OscpQuat, counter),  // bytes offset in struct
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
    offsetof(oscp_imu_msgs__msg__OscpQuat, timestamp_ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quat_w",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(oscp_imu_msgs__msg__OscpQuat, quat_w),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quat_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(oscp_imu_msgs__msg__OscpQuat, quat_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quat_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(oscp_imu_msgs__msg__OscpQuat, quat_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quat_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(oscp_imu_msgs__msg__OscpQuat, quat_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
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
    offsetof(oscp_imu_msgs__msg__OscpQuat, status),  // bytes offset in struct
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
    offsetof(oscp_imu_msgs__msg__OscpQuat, crc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers oscp_imu_msgs__msg__OscpQuat__rosidl_typesupport_introspection_c__OscpQuat_message_members = {
  "oscp_imu_msgs__msg",  // message namespace
  "OscpQuat",  // message name
  10,  // number of fields
  sizeof(oscp_imu_msgs__msg__OscpQuat),
  false,  // has_any_key_member_
  oscp_imu_msgs__msg__OscpQuat__rosidl_typesupport_introspection_c__OscpQuat_message_member_array,  // message members
  oscp_imu_msgs__msg__OscpQuat__rosidl_typesupport_introspection_c__OscpQuat_init_function,  // function to initialize message memory (memory has to be allocated)
  oscp_imu_msgs__msg__OscpQuat__rosidl_typesupport_introspection_c__OscpQuat_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t oscp_imu_msgs__msg__OscpQuat__rosidl_typesupport_introspection_c__OscpQuat_message_type_support_handle = {
  0,
  &oscp_imu_msgs__msg__OscpQuat__rosidl_typesupport_introspection_c__OscpQuat_message_members,
  get_message_typesupport_handle_function,
  &oscp_imu_msgs__msg__OscpQuat__get_type_hash,
  &oscp_imu_msgs__msg__OscpQuat__get_type_description,
  &oscp_imu_msgs__msg__OscpQuat__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_oscp_imu_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, oscp_imu_msgs, msg, OscpQuat)() {
  oscp_imu_msgs__msg__OscpQuat__rosidl_typesupport_introspection_c__OscpQuat_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!oscp_imu_msgs__msg__OscpQuat__rosidl_typesupport_introspection_c__OscpQuat_message_type_support_handle.typesupport_identifier) {
    oscp_imu_msgs__msg__OscpQuat__rosidl_typesupport_introspection_c__OscpQuat_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &oscp_imu_msgs__msg__OscpQuat__rosidl_typesupport_introspection_c__OscpQuat_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
