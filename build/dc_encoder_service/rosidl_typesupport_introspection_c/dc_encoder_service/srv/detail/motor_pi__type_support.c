// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dc_encoder_service:srv/MotorPI.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dc_encoder_service/srv/detail/motor_pi__rosidl_typesupport_introspection_c.h"
#include "dc_encoder_service/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dc_encoder_service/srv/detail/motor_pi__functions.h"
#include "dc_encoder_service/srv/detail/motor_pi__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void dc_encoder_service__srv__MotorPI_Request__rosidl_typesupport_introspection_c__MotorPI_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dc_encoder_service__srv__MotorPI_Request__init(message_memory);
}

void dc_encoder_service__srv__MotorPI_Request__rosidl_typesupport_introspection_c__MotorPI_Request_fini_function(void * message_memory)
{
  dc_encoder_service__srv__MotorPI_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dc_encoder_service__srv__MotorPI_Request__rosidl_typesupport_introspection_c__MotorPI_Request_message_member_array[4] = {
  {
    "speed_cmd_front_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dc_encoder_service__srv__MotorPI_Request, speed_cmd_front_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_cmd_front_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dc_encoder_service__srv__MotorPI_Request, speed_cmd_front_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_cmd_back_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dc_encoder_service__srv__MotorPI_Request, speed_cmd_back_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_cmd_back_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dc_encoder_service__srv__MotorPI_Request, speed_cmd_back_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dc_encoder_service__srv__MotorPI_Request__rosidl_typesupport_introspection_c__MotorPI_Request_message_members = {
  "dc_encoder_service__srv",  // message namespace
  "MotorPI_Request",  // message name
  4,  // number of fields
  sizeof(dc_encoder_service__srv__MotorPI_Request),
  false,  // has_any_key_member_
  dc_encoder_service__srv__MotorPI_Request__rosidl_typesupport_introspection_c__MotorPI_Request_message_member_array,  // message members
  dc_encoder_service__srv__MotorPI_Request__rosidl_typesupport_introspection_c__MotorPI_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  dc_encoder_service__srv__MotorPI_Request__rosidl_typesupport_introspection_c__MotorPI_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dc_encoder_service__srv__MotorPI_Request__rosidl_typesupport_introspection_c__MotorPI_Request_message_type_support_handle = {
  0,
  &dc_encoder_service__srv__MotorPI_Request__rosidl_typesupport_introspection_c__MotorPI_Request_message_members,
  get_message_typesupport_handle_function,
  &dc_encoder_service__srv__MotorPI_Request__get_type_hash,
  &dc_encoder_service__srv__MotorPI_Request__get_type_description,
  &dc_encoder_service__srv__MotorPI_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dc_encoder_service
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dc_encoder_service, srv, MotorPI_Request)() {
  if (!dc_encoder_service__srv__MotorPI_Request__rosidl_typesupport_introspection_c__MotorPI_Request_message_type_support_handle.typesupport_identifier) {
    dc_encoder_service__srv__MotorPI_Request__rosidl_typesupport_introspection_c__MotorPI_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dc_encoder_service__srv__MotorPI_Request__rosidl_typesupport_introspection_c__MotorPI_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "dc_encoder_service/srv/detail/motor_pi__rosidl_typesupport_introspection_c.h"
// already included above
// #include "dc_encoder_service/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "dc_encoder_service/srv/detail/motor_pi__functions.h"
// already included above
// #include "dc_encoder_service/srv/detail/motor_pi__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void dc_encoder_service__srv__MotorPI_Response__rosidl_typesupport_introspection_c__MotorPI_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dc_encoder_service__srv__MotorPI_Response__init(message_memory);
}

void dc_encoder_service__srv__MotorPI_Response__rosidl_typesupport_introspection_c__MotorPI_Response_fini_function(void * message_memory)
{
  dc_encoder_service__srv__MotorPI_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dc_encoder_service__srv__MotorPI_Response__rosidl_typesupport_introspection_c__MotorPI_Response_message_member_array[4] = {
  {
    "speed_front_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dc_encoder_service__srv__MotorPI_Response, speed_front_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_front_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dc_encoder_service__srv__MotorPI_Response, speed_front_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_back_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dc_encoder_service__srv__MotorPI_Response, speed_back_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_back_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dc_encoder_service__srv__MotorPI_Response, speed_back_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dc_encoder_service__srv__MotorPI_Response__rosidl_typesupport_introspection_c__MotorPI_Response_message_members = {
  "dc_encoder_service__srv",  // message namespace
  "MotorPI_Response",  // message name
  4,  // number of fields
  sizeof(dc_encoder_service__srv__MotorPI_Response),
  false,  // has_any_key_member_
  dc_encoder_service__srv__MotorPI_Response__rosidl_typesupport_introspection_c__MotorPI_Response_message_member_array,  // message members
  dc_encoder_service__srv__MotorPI_Response__rosidl_typesupport_introspection_c__MotorPI_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  dc_encoder_service__srv__MotorPI_Response__rosidl_typesupport_introspection_c__MotorPI_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dc_encoder_service__srv__MotorPI_Response__rosidl_typesupport_introspection_c__MotorPI_Response_message_type_support_handle = {
  0,
  &dc_encoder_service__srv__MotorPI_Response__rosidl_typesupport_introspection_c__MotorPI_Response_message_members,
  get_message_typesupport_handle_function,
  &dc_encoder_service__srv__MotorPI_Response__get_type_hash,
  &dc_encoder_service__srv__MotorPI_Response__get_type_description,
  &dc_encoder_service__srv__MotorPI_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dc_encoder_service
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dc_encoder_service, srv, MotorPI_Response)() {
  if (!dc_encoder_service__srv__MotorPI_Response__rosidl_typesupport_introspection_c__MotorPI_Response_message_type_support_handle.typesupport_identifier) {
    dc_encoder_service__srv__MotorPI_Response__rosidl_typesupport_introspection_c__MotorPI_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dc_encoder_service__srv__MotorPI_Response__rosidl_typesupport_introspection_c__MotorPI_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "dc_encoder_service/srv/detail/motor_pi__rosidl_typesupport_introspection_c.h"
// already included above
// #include "dc_encoder_service/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "dc_encoder_service/srv/detail/motor_pi__functions.h"
// already included above
// #include "dc_encoder_service/srv/detail/motor_pi__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "dc_encoder_service/srv/motor_pi.h"
// Member `request`
// Member `response`
// already included above
// #include "dc_encoder_service/srv/detail/motor_pi__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__MotorPI_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dc_encoder_service__srv__MotorPI_Event__init(message_memory);
}

void dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__MotorPI_Event_fini_function(void * message_memory)
{
  dc_encoder_service__srv__MotorPI_Event__fini(message_memory);
}

size_t dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__size_function__MotorPI_Event__request(
  const void * untyped_member)
{
  const dc_encoder_service__srv__MotorPI_Request__Sequence * member =
    (const dc_encoder_service__srv__MotorPI_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__get_const_function__MotorPI_Event__request(
  const void * untyped_member, size_t index)
{
  const dc_encoder_service__srv__MotorPI_Request__Sequence * member =
    (const dc_encoder_service__srv__MotorPI_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__get_function__MotorPI_Event__request(
  void * untyped_member, size_t index)
{
  dc_encoder_service__srv__MotorPI_Request__Sequence * member =
    (dc_encoder_service__srv__MotorPI_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__fetch_function__MotorPI_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const dc_encoder_service__srv__MotorPI_Request * item =
    ((const dc_encoder_service__srv__MotorPI_Request *)
    dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__get_const_function__MotorPI_Event__request(untyped_member, index));
  dc_encoder_service__srv__MotorPI_Request * value =
    (dc_encoder_service__srv__MotorPI_Request *)(untyped_value);
  *value = *item;
}

void dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__assign_function__MotorPI_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  dc_encoder_service__srv__MotorPI_Request * item =
    ((dc_encoder_service__srv__MotorPI_Request *)
    dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__get_function__MotorPI_Event__request(untyped_member, index));
  const dc_encoder_service__srv__MotorPI_Request * value =
    (const dc_encoder_service__srv__MotorPI_Request *)(untyped_value);
  *item = *value;
}

bool dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__resize_function__MotorPI_Event__request(
  void * untyped_member, size_t size)
{
  dc_encoder_service__srv__MotorPI_Request__Sequence * member =
    (dc_encoder_service__srv__MotorPI_Request__Sequence *)(untyped_member);
  dc_encoder_service__srv__MotorPI_Request__Sequence__fini(member);
  return dc_encoder_service__srv__MotorPI_Request__Sequence__init(member, size);
}

size_t dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__size_function__MotorPI_Event__response(
  const void * untyped_member)
{
  const dc_encoder_service__srv__MotorPI_Response__Sequence * member =
    (const dc_encoder_service__srv__MotorPI_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__get_const_function__MotorPI_Event__response(
  const void * untyped_member, size_t index)
{
  const dc_encoder_service__srv__MotorPI_Response__Sequence * member =
    (const dc_encoder_service__srv__MotorPI_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__get_function__MotorPI_Event__response(
  void * untyped_member, size_t index)
{
  dc_encoder_service__srv__MotorPI_Response__Sequence * member =
    (dc_encoder_service__srv__MotorPI_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__fetch_function__MotorPI_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const dc_encoder_service__srv__MotorPI_Response * item =
    ((const dc_encoder_service__srv__MotorPI_Response *)
    dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__get_const_function__MotorPI_Event__response(untyped_member, index));
  dc_encoder_service__srv__MotorPI_Response * value =
    (dc_encoder_service__srv__MotorPI_Response *)(untyped_value);
  *value = *item;
}

void dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__assign_function__MotorPI_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  dc_encoder_service__srv__MotorPI_Response * item =
    ((dc_encoder_service__srv__MotorPI_Response *)
    dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__get_function__MotorPI_Event__response(untyped_member, index));
  const dc_encoder_service__srv__MotorPI_Response * value =
    (const dc_encoder_service__srv__MotorPI_Response *)(untyped_value);
  *item = *value;
}

bool dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__resize_function__MotorPI_Event__response(
  void * untyped_member, size_t size)
{
  dc_encoder_service__srv__MotorPI_Response__Sequence * member =
    (dc_encoder_service__srv__MotorPI_Response__Sequence *)(untyped_member);
  dc_encoder_service__srv__MotorPI_Response__Sequence__fini(member);
  return dc_encoder_service__srv__MotorPI_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__MotorPI_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dc_encoder_service__srv__MotorPI_Event, info),  // bytes offset in struct
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
    offsetof(dc_encoder_service__srv__MotorPI_Event, request),  // bytes offset in struct
    NULL,  // default value
    dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__size_function__MotorPI_Event__request,  // size() function pointer
    dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__get_const_function__MotorPI_Event__request,  // get_const(index) function pointer
    dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__get_function__MotorPI_Event__request,  // get(index) function pointer
    dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__fetch_function__MotorPI_Event__request,  // fetch(index, &value) function pointer
    dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__assign_function__MotorPI_Event__request,  // assign(index, value) function pointer
    dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__resize_function__MotorPI_Event__request  // resize(index) function pointer
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
    offsetof(dc_encoder_service__srv__MotorPI_Event, response),  // bytes offset in struct
    NULL,  // default value
    dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__size_function__MotorPI_Event__response,  // size() function pointer
    dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__get_const_function__MotorPI_Event__response,  // get_const(index) function pointer
    dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__get_function__MotorPI_Event__response,  // get(index) function pointer
    dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__fetch_function__MotorPI_Event__response,  // fetch(index, &value) function pointer
    dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__assign_function__MotorPI_Event__response,  // assign(index, value) function pointer
    dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__resize_function__MotorPI_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__MotorPI_Event_message_members = {
  "dc_encoder_service__srv",  // message namespace
  "MotorPI_Event",  // message name
  3,  // number of fields
  sizeof(dc_encoder_service__srv__MotorPI_Event),
  false,  // has_any_key_member_
  dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__MotorPI_Event_message_member_array,  // message members
  dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__MotorPI_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__MotorPI_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__MotorPI_Event_message_type_support_handle = {
  0,
  &dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__MotorPI_Event_message_members,
  get_message_typesupport_handle_function,
  &dc_encoder_service__srv__MotorPI_Event__get_type_hash,
  &dc_encoder_service__srv__MotorPI_Event__get_type_description,
  &dc_encoder_service__srv__MotorPI_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dc_encoder_service
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dc_encoder_service, srv, MotorPI_Event)() {
  dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__MotorPI_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__MotorPI_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dc_encoder_service, srv, MotorPI_Request)();
  dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__MotorPI_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dc_encoder_service, srv, MotorPI_Response)();
  if (!dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__MotorPI_Event_message_type_support_handle.typesupport_identifier) {
    dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__MotorPI_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__MotorPI_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "dc_encoder_service/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "dc_encoder_service/srv/detail/motor_pi__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers dc_encoder_service__srv__detail__motor_pi__rosidl_typesupport_introspection_c__MotorPI_service_members = {
  "dc_encoder_service__srv",  // service namespace
  "MotorPI",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // dc_encoder_service__srv__detail__motor_pi__rosidl_typesupport_introspection_c__MotorPI_Request_message_type_support_handle,
  NULL,  // response message
  // dc_encoder_service__srv__detail__motor_pi__rosidl_typesupport_introspection_c__MotorPI_Response_message_type_support_handle
  NULL  // event_message
  // dc_encoder_service__srv__detail__motor_pi__rosidl_typesupport_introspection_c__MotorPI_Response_message_type_support_handle
};


static rosidl_service_type_support_t dc_encoder_service__srv__detail__motor_pi__rosidl_typesupport_introspection_c__MotorPI_service_type_support_handle = {
  0,
  &dc_encoder_service__srv__detail__motor_pi__rosidl_typesupport_introspection_c__MotorPI_service_members,
  get_service_typesupport_handle_function,
  &dc_encoder_service__srv__MotorPI_Request__rosidl_typesupport_introspection_c__MotorPI_Request_message_type_support_handle,
  &dc_encoder_service__srv__MotorPI_Response__rosidl_typesupport_introspection_c__MotorPI_Response_message_type_support_handle,
  &dc_encoder_service__srv__MotorPI_Event__rosidl_typesupport_introspection_c__MotorPI_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    dc_encoder_service,
    srv,
    MotorPI
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    dc_encoder_service,
    srv,
    MotorPI
  ),
  &dc_encoder_service__srv__MotorPI__get_type_hash,
  &dc_encoder_service__srv__MotorPI__get_type_description,
  &dc_encoder_service__srv__MotorPI__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dc_encoder_service, srv, MotorPI_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dc_encoder_service, srv, MotorPI_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dc_encoder_service, srv, MotorPI_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dc_encoder_service
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dc_encoder_service, srv, MotorPI)(void) {
  if (!dc_encoder_service__srv__detail__motor_pi__rosidl_typesupport_introspection_c__MotorPI_service_type_support_handle.typesupport_identifier) {
    dc_encoder_service__srv__detail__motor_pi__rosidl_typesupport_introspection_c__MotorPI_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)dc_encoder_service__srv__detail__motor_pi__rosidl_typesupport_introspection_c__MotorPI_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dc_encoder_service, srv, MotorPI_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dc_encoder_service, srv, MotorPI_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dc_encoder_service, srv, MotorPI_Event)()->data;
  }

  return &dc_encoder_service__srv__detail__motor_pi__rosidl_typesupport_introspection_c__MotorPI_service_type_support_handle;
}
