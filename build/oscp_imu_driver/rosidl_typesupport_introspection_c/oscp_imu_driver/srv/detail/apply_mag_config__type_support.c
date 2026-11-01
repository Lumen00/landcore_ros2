// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from oscp_imu_driver:srv/ApplyMagConfig.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "oscp_imu_driver/srv/detail/apply_mag_config__rosidl_typesupport_introspection_c.h"
#include "oscp_imu_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "oscp_imu_driver/srv/detail/apply_mag_config__functions.h"
#include "oscp_imu_driver/srv/detail/apply_mag_config__struct.h"


// Include directives for member types
// Member `config_path`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void oscp_imu_driver__srv__ApplyMagConfig_Request__rosidl_typesupport_introspection_c__ApplyMagConfig_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  oscp_imu_driver__srv__ApplyMagConfig_Request__init(message_memory);
}

void oscp_imu_driver__srv__ApplyMagConfig_Request__rosidl_typesupport_introspection_c__ApplyMagConfig_Request_fini_function(void * message_memory)
{
  oscp_imu_driver__srv__ApplyMagConfig_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember oscp_imu_driver__srv__ApplyMagConfig_Request__rosidl_typesupport_introspection_c__ApplyMagConfig_Request_message_member_array[1] = {
  {
    "config_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(oscp_imu_driver__srv__ApplyMagConfig_Request, config_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers oscp_imu_driver__srv__ApplyMagConfig_Request__rosidl_typesupport_introspection_c__ApplyMagConfig_Request_message_members = {
  "oscp_imu_driver__srv",  // message namespace
  "ApplyMagConfig_Request",  // message name
  1,  // number of fields
  sizeof(oscp_imu_driver__srv__ApplyMagConfig_Request),
  false,  // has_any_key_member_
  oscp_imu_driver__srv__ApplyMagConfig_Request__rosidl_typesupport_introspection_c__ApplyMagConfig_Request_message_member_array,  // message members
  oscp_imu_driver__srv__ApplyMagConfig_Request__rosidl_typesupport_introspection_c__ApplyMagConfig_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  oscp_imu_driver__srv__ApplyMagConfig_Request__rosidl_typesupport_introspection_c__ApplyMagConfig_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t oscp_imu_driver__srv__ApplyMagConfig_Request__rosidl_typesupport_introspection_c__ApplyMagConfig_Request_message_type_support_handle = {
  0,
  &oscp_imu_driver__srv__ApplyMagConfig_Request__rosidl_typesupport_introspection_c__ApplyMagConfig_Request_message_members,
  get_message_typesupport_handle_function,
  &oscp_imu_driver__srv__ApplyMagConfig_Request__get_type_hash,
  &oscp_imu_driver__srv__ApplyMagConfig_Request__get_type_description,
  &oscp_imu_driver__srv__ApplyMagConfig_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_oscp_imu_driver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, oscp_imu_driver, srv, ApplyMagConfig_Request)() {
  if (!oscp_imu_driver__srv__ApplyMagConfig_Request__rosidl_typesupport_introspection_c__ApplyMagConfig_Request_message_type_support_handle.typesupport_identifier) {
    oscp_imu_driver__srv__ApplyMagConfig_Request__rosidl_typesupport_introspection_c__ApplyMagConfig_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &oscp_imu_driver__srv__ApplyMagConfig_Request__rosidl_typesupport_introspection_c__ApplyMagConfig_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "oscp_imu_driver/srv/detail/apply_mag_config__rosidl_typesupport_introspection_c.h"
// already included above
// #include "oscp_imu_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "oscp_imu_driver/srv/detail/apply_mag_config__functions.h"
// already included above
// #include "oscp_imu_driver/srv/detail/apply_mag_config__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void oscp_imu_driver__srv__ApplyMagConfig_Response__rosidl_typesupport_introspection_c__ApplyMagConfig_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  oscp_imu_driver__srv__ApplyMagConfig_Response__init(message_memory);
}

void oscp_imu_driver__srv__ApplyMagConfig_Response__rosidl_typesupport_introspection_c__ApplyMagConfig_Response_fini_function(void * message_memory)
{
  oscp_imu_driver__srv__ApplyMagConfig_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember oscp_imu_driver__srv__ApplyMagConfig_Response__rosidl_typesupport_introspection_c__ApplyMagConfig_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(oscp_imu_driver__srv__ApplyMagConfig_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(oscp_imu_driver__srv__ApplyMagConfig_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers oscp_imu_driver__srv__ApplyMagConfig_Response__rosidl_typesupport_introspection_c__ApplyMagConfig_Response_message_members = {
  "oscp_imu_driver__srv",  // message namespace
  "ApplyMagConfig_Response",  // message name
  2,  // number of fields
  sizeof(oscp_imu_driver__srv__ApplyMagConfig_Response),
  false,  // has_any_key_member_
  oscp_imu_driver__srv__ApplyMagConfig_Response__rosidl_typesupport_introspection_c__ApplyMagConfig_Response_message_member_array,  // message members
  oscp_imu_driver__srv__ApplyMagConfig_Response__rosidl_typesupport_introspection_c__ApplyMagConfig_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  oscp_imu_driver__srv__ApplyMagConfig_Response__rosidl_typesupport_introspection_c__ApplyMagConfig_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t oscp_imu_driver__srv__ApplyMagConfig_Response__rosidl_typesupport_introspection_c__ApplyMagConfig_Response_message_type_support_handle = {
  0,
  &oscp_imu_driver__srv__ApplyMagConfig_Response__rosidl_typesupport_introspection_c__ApplyMagConfig_Response_message_members,
  get_message_typesupport_handle_function,
  &oscp_imu_driver__srv__ApplyMagConfig_Response__get_type_hash,
  &oscp_imu_driver__srv__ApplyMagConfig_Response__get_type_description,
  &oscp_imu_driver__srv__ApplyMagConfig_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_oscp_imu_driver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, oscp_imu_driver, srv, ApplyMagConfig_Response)() {
  if (!oscp_imu_driver__srv__ApplyMagConfig_Response__rosidl_typesupport_introspection_c__ApplyMagConfig_Response_message_type_support_handle.typesupport_identifier) {
    oscp_imu_driver__srv__ApplyMagConfig_Response__rosidl_typesupport_introspection_c__ApplyMagConfig_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &oscp_imu_driver__srv__ApplyMagConfig_Response__rosidl_typesupport_introspection_c__ApplyMagConfig_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "oscp_imu_driver/srv/detail/apply_mag_config__rosidl_typesupport_introspection_c.h"
// already included above
// #include "oscp_imu_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "oscp_imu_driver/srv/detail/apply_mag_config__functions.h"
// already included above
// #include "oscp_imu_driver/srv/detail/apply_mag_config__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "oscp_imu_driver/srv/apply_mag_config.h"
// Member `request`
// Member `response`
// already included above
// #include "oscp_imu_driver/srv/detail/apply_mag_config__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__ApplyMagConfig_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  oscp_imu_driver__srv__ApplyMagConfig_Event__init(message_memory);
}

void oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__ApplyMagConfig_Event_fini_function(void * message_memory)
{
  oscp_imu_driver__srv__ApplyMagConfig_Event__fini(message_memory);
}

size_t oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__size_function__ApplyMagConfig_Event__request(
  const void * untyped_member)
{
  const oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence * member =
    (const oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__get_const_function__ApplyMagConfig_Event__request(
  const void * untyped_member, size_t index)
{
  const oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence * member =
    (const oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__get_function__ApplyMagConfig_Event__request(
  void * untyped_member, size_t index)
{
  oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence * member =
    (oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__fetch_function__ApplyMagConfig_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const oscp_imu_driver__srv__ApplyMagConfig_Request * item =
    ((const oscp_imu_driver__srv__ApplyMagConfig_Request *)
    oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__get_const_function__ApplyMagConfig_Event__request(untyped_member, index));
  oscp_imu_driver__srv__ApplyMagConfig_Request * value =
    (oscp_imu_driver__srv__ApplyMagConfig_Request *)(untyped_value);
  *value = *item;
}

void oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__assign_function__ApplyMagConfig_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  oscp_imu_driver__srv__ApplyMagConfig_Request * item =
    ((oscp_imu_driver__srv__ApplyMagConfig_Request *)
    oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__get_function__ApplyMagConfig_Event__request(untyped_member, index));
  const oscp_imu_driver__srv__ApplyMagConfig_Request * value =
    (const oscp_imu_driver__srv__ApplyMagConfig_Request *)(untyped_value);
  *item = *value;
}

bool oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__resize_function__ApplyMagConfig_Event__request(
  void * untyped_member, size_t size)
{
  oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence * member =
    (oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence *)(untyped_member);
  oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence__fini(member);
  return oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence__init(member, size);
}

size_t oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__size_function__ApplyMagConfig_Event__response(
  const void * untyped_member)
{
  const oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence * member =
    (const oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__get_const_function__ApplyMagConfig_Event__response(
  const void * untyped_member, size_t index)
{
  const oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence * member =
    (const oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__get_function__ApplyMagConfig_Event__response(
  void * untyped_member, size_t index)
{
  oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence * member =
    (oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__fetch_function__ApplyMagConfig_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const oscp_imu_driver__srv__ApplyMagConfig_Response * item =
    ((const oscp_imu_driver__srv__ApplyMagConfig_Response *)
    oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__get_const_function__ApplyMagConfig_Event__response(untyped_member, index));
  oscp_imu_driver__srv__ApplyMagConfig_Response * value =
    (oscp_imu_driver__srv__ApplyMagConfig_Response *)(untyped_value);
  *value = *item;
}

void oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__assign_function__ApplyMagConfig_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  oscp_imu_driver__srv__ApplyMagConfig_Response * item =
    ((oscp_imu_driver__srv__ApplyMagConfig_Response *)
    oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__get_function__ApplyMagConfig_Event__response(untyped_member, index));
  const oscp_imu_driver__srv__ApplyMagConfig_Response * value =
    (const oscp_imu_driver__srv__ApplyMagConfig_Response *)(untyped_value);
  *item = *value;
}

bool oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__resize_function__ApplyMagConfig_Event__response(
  void * untyped_member, size_t size)
{
  oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence * member =
    (oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence *)(untyped_member);
  oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence__fini(member);
  return oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__ApplyMagConfig_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(oscp_imu_driver__srv__ApplyMagConfig_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(oscp_imu_driver__srv__ApplyMagConfig_Event, request),  // bytes offset in struct
    NULL,  // default value
    oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__size_function__ApplyMagConfig_Event__request,  // size() function pointer
    oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__get_const_function__ApplyMagConfig_Event__request,  // get_const(index) function pointer
    oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__get_function__ApplyMagConfig_Event__request,  // get(index) function pointer
    oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__fetch_function__ApplyMagConfig_Event__request,  // fetch(index, &value) function pointer
    oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__assign_function__ApplyMagConfig_Event__request,  // assign(index, value) function pointer
    oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__resize_function__ApplyMagConfig_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(oscp_imu_driver__srv__ApplyMagConfig_Event, response),  // bytes offset in struct
    NULL,  // default value
    oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__size_function__ApplyMagConfig_Event__response,  // size() function pointer
    oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__get_const_function__ApplyMagConfig_Event__response,  // get_const(index) function pointer
    oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__get_function__ApplyMagConfig_Event__response,  // get(index) function pointer
    oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__fetch_function__ApplyMagConfig_Event__response,  // fetch(index, &value) function pointer
    oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__assign_function__ApplyMagConfig_Event__response,  // assign(index, value) function pointer
    oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__resize_function__ApplyMagConfig_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__ApplyMagConfig_Event_message_members = {
  "oscp_imu_driver__srv",  // message namespace
  "ApplyMagConfig_Event",  // message name
  3,  // number of fields
  sizeof(oscp_imu_driver__srv__ApplyMagConfig_Event),
  false,  // has_any_key_member_
  oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__ApplyMagConfig_Event_message_member_array,  // message members
  oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__ApplyMagConfig_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__ApplyMagConfig_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__ApplyMagConfig_Event_message_type_support_handle = {
  0,
  &oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__ApplyMagConfig_Event_message_members,
  get_message_typesupport_handle_function,
  &oscp_imu_driver__srv__ApplyMagConfig_Event__get_type_hash,
  &oscp_imu_driver__srv__ApplyMagConfig_Event__get_type_description,
  &oscp_imu_driver__srv__ApplyMagConfig_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_oscp_imu_driver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, oscp_imu_driver, srv, ApplyMagConfig_Event)() {
  oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__ApplyMagConfig_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__ApplyMagConfig_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, oscp_imu_driver, srv, ApplyMagConfig_Request)();
  oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__ApplyMagConfig_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, oscp_imu_driver, srv, ApplyMagConfig_Response)();
  if (!oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__ApplyMagConfig_Event_message_type_support_handle.typesupport_identifier) {
    oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__ApplyMagConfig_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__ApplyMagConfig_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "oscp_imu_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "oscp_imu_driver/srv/detail/apply_mag_config__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers oscp_imu_driver__srv__detail__apply_mag_config__rosidl_typesupport_introspection_c__ApplyMagConfig_service_members = {
  "oscp_imu_driver__srv",  // service namespace
  "ApplyMagConfig",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // oscp_imu_driver__srv__detail__apply_mag_config__rosidl_typesupport_introspection_c__ApplyMagConfig_Request_message_type_support_handle,
  NULL,  // response message
  // oscp_imu_driver__srv__detail__apply_mag_config__rosidl_typesupport_introspection_c__ApplyMagConfig_Response_message_type_support_handle
  NULL  // event_message
  // oscp_imu_driver__srv__detail__apply_mag_config__rosidl_typesupport_introspection_c__ApplyMagConfig_Response_message_type_support_handle
};


static rosidl_service_type_support_t oscp_imu_driver__srv__detail__apply_mag_config__rosidl_typesupport_introspection_c__ApplyMagConfig_service_type_support_handle = {
  0,
  &oscp_imu_driver__srv__detail__apply_mag_config__rosidl_typesupport_introspection_c__ApplyMagConfig_service_members,
  get_service_typesupport_handle_function,
  &oscp_imu_driver__srv__ApplyMagConfig_Request__rosidl_typesupport_introspection_c__ApplyMagConfig_Request_message_type_support_handle,
  &oscp_imu_driver__srv__ApplyMagConfig_Response__rosidl_typesupport_introspection_c__ApplyMagConfig_Response_message_type_support_handle,
  &oscp_imu_driver__srv__ApplyMagConfig_Event__rosidl_typesupport_introspection_c__ApplyMagConfig_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    oscp_imu_driver,
    srv,
    ApplyMagConfig
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    oscp_imu_driver,
    srv,
    ApplyMagConfig
  ),
  &oscp_imu_driver__srv__ApplyMagConfig__get_type_hash,
  &oscp_imu_driver__srv__ApplyMagConfig__get_type_description,
  &oscp_imu_driver__srv__ApplyMagConfig__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, oscp_imu_driver, srv, ApplyMagConfig_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, oscp_imu_driver, srv, ApplyMagConfig_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, oscp_imu_driver, srv, ApplyMagConfig_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_oscp_imu_driver
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, oscp_imu_driver, srv, ApplyMagConfig)(void) {
  if (!oscp_imu_driver__srv__detail__apply_mag_config__rosidl_typesupport_introspection_c__ApplyMagConfig_service_type_support_handle.typesupport_identifier) {
    oscp_imu_driver__srv__detail__apply_mag_config__rosidl_typesupport_introspection_c__ApplyMagConfig_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)oscp_imu_driver__srv__detail__apply_mag_config__rosidl_typesupport_introspection_c__ApplyMagConfig_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, oscp_imu_driver, srv, ApplyMagConfig_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, oscp_imu_driver, srv, ApplyMagConfig_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, oscp_imu_driver, srv, ApplyMagConfig_Event)()->data;
  }

  return &oscp_imu_driver__srv__detail__apply_mag_config__rosidl_typesupport_introspection_c__ApplyMagConfig_service_type_support_handle;
}
