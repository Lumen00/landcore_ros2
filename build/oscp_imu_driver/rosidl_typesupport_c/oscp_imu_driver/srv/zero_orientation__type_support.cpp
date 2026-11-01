// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from oscp_imu_driver:srv/ZeroOrientation.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "oscp_imu_driver/srv/detail/zero_orientation__struct.h"
#include "oscp_imu_driver/srv/detail/zero_orientation__type_support.h"
#include "oscp_imu_driver/srv/detail/zero_orientation__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace oscp_imu_driver
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ZeroOrientation_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ZeroOrientation_Request_type_support_ids_t;

static const _ZeroOrientation_Request_type_support_ids_t _ZeroOrientation_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ZeroOrientation_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ZeroOrientation_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ZeroOrientation_Request_type_support_symbol_names_t _ZeroOrientation_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, oscp_imu_driver, srv, ZeroOrientation_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, oscp_imu_driver, srv, ZeroOrientation_Request)),
  }
};

typedef struct _ZeroOrientation_Request_type_support_data_t
{
  void * data[2];
} _ZeroOrientation_Request_type_support_data_t;

static _ZeroOrientation_Request_type_support_data_t _ZeroOrientation_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ZeroOrientation_Request_message_typesupport_map = {
  2,
  "oscp_imu_driver",
  &_ZeroOrientation_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ZeroOrientation_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ZeroOrientation_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ZeroOrientation_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ZeroOrientation_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &oscp_imu_driver__srv__ZeroOrientation_Request__get_type_hash,
  &oscp_imu_driver__srv__ZeroOrientation_Request__get_type_description,
  &oscp_imu_driver__srv__ZeroOrientation_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace oscp_imu_driver

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, oscp_imu_driver, srv, ZeroOrientation_Request)() {
  return &::oscp_imu_driver::srv::rosidl_typesupport_c::ZeroOrientation_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "oscp_imu_driver/srv/detail/zero_orientation__struct.h"
// already included above
// #include "oscp_imu_driver/srv/detail/zero_orientation__type_support.h"
// already included above
// #include "oscp_imu_driver/srv/detail/zero_orientation__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace oscp_imu_driver
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ZeroOrientation_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ZeroOrientation_Response_type_support_ids_t;

static const _ZeroOrientation_Response_type_support_ids_t _ZeroOrientation_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ZeroOrientation_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ZeroOrientation_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ZeroOrientation_Response_type_support_symbol_names_t _ZeroOrientation_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, oscp_imu_driver, srv, ZeroOrientation_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, oscp_imu_driver, srv, ZeroOrientation_Response)),
  }
};

typedef struct _ZeroOrientation_Response_type_support_data_t
{
  void * data[2];
} _ZeroOrientation_Response_type_support_data_t;

static _ZeroOrientation_Response_type_support_data_t _ZeroOrientation_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ZeroOrientation_Response_message_typesupport_map = {
  2,
  "oscp_imu_driver",
  &_ZeroOrientation_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ZeroOrientation_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ZeroOrientation_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ZeroOrientation_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ZeroOrientation_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &oscp_imu_driver__srv__ZeroOrientation_Response__get_type_hash,
  &oscp_imu_driver__srv__ZeroOrientation_Response__get_type_description,
  &oscp_imu_driver__srv__ZeroOrientation_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace oscp_imu_driver

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, oscp_imu_driver, srv, ZeroOrientation_Response)() {
  return &::oscp_imu_driver::srv::rosidl_typesupport_c::ZeroOrientation_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "oscp_imu_driver/srv/detail/zero_orientation__struct.h"
// already included above
// #include "oscp_imu_driver/srv/detail/zero_orientation__type_support.h"
// already included above
// #include "oscp_imu_driver/srv/detail/zero_orientation__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace oscp_imu_driver
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ZeroOrientation_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ZeroOrientation_Event_type_support_ids_t;

static const _ZeroOrientation_Event_type_support_ids_t _ZeroOrientation_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ZeroOrientation_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ZeroOrientation_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ZeroOrientation_Event_type_support_symbol_names_t _ZeroOrientation_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, oscp_imu_driver, srv, ZeroOrientation_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, oscp_imu_driver, srv, ZeroOrientation_Event)),
  }
};

typedef struct _ZeroOrientation_Event_type_support_data_t
{
  void * data[2];
} _ZeroOrientation_Event_type_support_data_t;

static _ZeroOrientation_Event_type_support_data_t _ZeroOrientation_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ZeroOrientation_Event_message_typesupport_map = {
  2,
  "oscp_imu_driver",
  &_ZeroOrientation_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ZeroOrientation_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ZeroOrientation_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ZeroOrientation_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ZeroOrientation_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &oscp_imu_driver__srv__ZeroOrientation_Event__get_type_hash,
  &oscp_imu_driver__srv__ZeroOrientation_Event__get_type_description,
  &oscp_imu_driver__srv__ZeroOrientation_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace oscp_imu_driver

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, oscp_imu_driver, srv, ZeroOrientation_Event)() {
  return &::oscp_imu_driver::srv::rosidl_typesupport_c::ZeroOrientation_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "oscp_imu_driver/srv/detail/zero_orientation__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace oscp_imu_driver
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _ZeroOrientation_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ZeroOrientation_type_support_ids_t;

static const _ZeroOrientation_type_support_ids_t _ZeroOrientation_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ZeroOrientation_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ZeroOrientation_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ZeroOrientation_type_support_symbol_names_t _ZeroOrientation_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, oscp_imu_driver, srv, ZeroOrientation)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, oscp_imu_driver, srv, ZeroOrientation)),
  }
};

typedef struct _ZeroOrientation_type_support_data_t
{
  void * data[2];
} _ZeroOrientation_type_support_data_t;

static _ZeroOrientation_type_support_data_t _ZeroOrientation_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ZeroOrientation_service_typesupport_map = {
  2,
  "oscp_imu_driver",
  &_ZeroOrientation_service_typesupport_ids.typesupport_identifier[0],
  &_ZeroOrientation_service_typesupport_symbol_names.symbol_name[0],
  &_ZeroOrientation_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ZeroOrientation_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ZeroOrientation_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ZeroOrientation_Request_message_type_support_handle,
  &ZeroOrientation_Response_message_type_support_handle,
  &ZeroOrientation_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    oscp_imu_driver,
    srv,
    ZeroOrientation
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    oscp_imu_driver,
    srv,
    ZeroOrientation
  ),
  &oscp_imu_driver__srv__ZeroOrientation__get_type_hash,
  &oscp_imu_driver__srv__ZeroOrientation__get_type_description,
  &oscp_imu_driver__srv__ZeroOrientation__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace oscp_imu_driver

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, oscp_imu_driver, srv, ZeroOrientation)() {
  return &::oscp_imu_driver::srv::rosidl_typesupport_c::ZeroOrientation_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
