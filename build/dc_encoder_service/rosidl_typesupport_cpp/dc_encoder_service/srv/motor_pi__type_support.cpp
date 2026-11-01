// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from dc_encoder_service:srv/MotorPI.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "dc_encoder_service/srv/detail/motor_pi__functions.h"
#include "dc_encoder_service/srv/detail/motor_pi__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace dc_encoder_service
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _MotorPI_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorPI_Request_type_support_ids_t;

static const _MotorPI_Request_type_support_ids_t _MotorPI_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MotorPI_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorPI_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorPI_Request_type_support_symbol_names_t _MotorPI_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dc_encoder_service, srv, MotorPI_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dc_encoder_service, srv, MotorPI_Request)),
  }
};

typedef struct _MotorPI_Request_type_support_data_t
{
  void * data[2];
} _MotorPI_Request_type_support_data_t;

static _MotorPI_Request_type_support_data_t _MotorPI_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorPI_Request_message_typesupport_map = {
  2,
  "dc_encoder_service",
  &_MotorPI_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MotorPI_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MotorPI_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MotorPI_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorPI_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &dc_encoder_service__srv__MotorPI_Request__get_type_hash,
  &dc_encoder_service__srv__MotorPI_Request__get_type_description,
  &dc_encoder_service__srv__MotorPI_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dc_encoder_service

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dc_encoder_service::srv::MotorPI_Request>()
{
  return &::dc_encoder_service::srv::rosidl_typesupport_cpp::MotorPI_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dc_encoder_service, srv, MotorPI_Request)() {
  return get_message_type_support_handle<dc_encoder_service::srv::MotorPI_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dc_encoder_service/srv/detail/motor_pi__functions.h"
// already included above
// #include "dc_encoder_service/srv/detail/motor_pi__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dc_encoder_service
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _MotorPI_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorPI_Response_type_support_ids_t;

static const _MotorPI_Response_type_support_ids_t _MotorPI_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MotorPI_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorPI_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorPI_Response_type_support_symbol_names_t _MotorPI_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dc_encoder_service, srv, MotorPI_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dc_encoder_service, srv, MotorPI_Response)),
  }
};

typedef struct _MotorPI_Response_type_support_data_t
{
  void * data[2];
} _MotorPI_Response_type_support_data_t;

static _MotorPI_Response_type_support_data_t _MotorPI_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorPI_Response_message_typesupport_map = {
  2,
  "dc_encoder_service",
  &_MotorPI_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MotorPI_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MotorPI_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MotorPI_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorPI_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &dc_encoder_service__srv__MotorPI_Response__get_type_hash,
  &dc_encoder_service__srv__MotorPI_Response__get_type_description,
  &dc_encoder_service__srv__MotorPI_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dc_encoder_service

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dc_encoder_service::srv::MotorPI_Response>()
{
  return &::dc_encoder_service::srv::rosidl_typesupport_cpp::MotorPI_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dc_encoder_service, srv, MotorPI_Response)() {
  return get_message_type_support_handle<dc_encoder_service::srv::MotorPI_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dc_encoder_service/srv/detail/motor_pi__functions.h"
// already included above
// #include "dc_encoder_service/srv/detail/motor_pi__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dc_encoder_service
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _MotorPI_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorPI_Event_type_support_ids_t;

static const _MotorPI_Event_type_support_ids_t _MotorPI_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MotorPI_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorPI_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorPI_Event_type_support_symbol_names_t _MotorPI_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dc_encoder_service, srv, MotorPI_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dc_encoder_service, srv, MotorPI_Event)),
  }
};

typedef struct _MotorPI_Event_type_support_data_t
{
  void * data[2];
} _MotorPI_Event_type_support_data_t;

static _MotorPI_Event_type_support_data_t _MotorPI_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorPI_Event_message_typesupport_map = {
  2,
  "dc_encoder_service",
  &_MotorPI_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MotorPI_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MotorPI_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MotorPI_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorPI_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &dc_encoder_service__srv__MotorPI_Event__get_type_hash,
  &dc_encoder_service__srv__MotorPI_Event__get_type_description,
  &dc_encoder_service__srv__MotorPI_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dc_encoder_service

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dc_encoder_service::srv::MotorPI_Event>()
{
  return &::dc_encoder_service::srv::rosidl_typesupport_cpp::MotorPI_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dc_encoder_service, srv, MotorPI_Event)() {
  return get_message_type_support_handle<dc_encoder_service::srv::MotorPI_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "dc_encoder_service/srv/detail/motor_pi__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dc_encoder_service
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _MotorPI_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorPI_type_support_ids_t;

static const _MotorPI_type_support_ids_t _MotorPI_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MotorPI_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorPI_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorPI_type_support_symbol_names_t _MotorPI_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dc_encoder_service, srv, MotorPI)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dc_encoder_service, srv, MotorPI)),
  }
};

typedef struct _MotorPI_type_support_data_t
{
  void * data[2];
} _MotorPI_type_support_data_t;

static _MotorPI_type_support_data_t _MotorPI_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorPI_service_typesupport_map = {
  2,
  "dc_encoder_service",
  &_MotorPI_service_typesupport_ids.typesupport_identifier[0],
  &_MotorPI_service_typesupport_symbol_names.symbol_name[0],
  &_MotorPI_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MotorPI_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorPI_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<dc_encoder_service::srv::MotorPI_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<dc_encoder_service::srv::MotorPI_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<dc_encoder_service::srv::MotorPI_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<dc_encoder_service::srv::MotorPI>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<dc_encoder_service::srv::MotorPI>,
  &dc_encoder_service__srv__MotorPI__get_type_hash,
  &dc_encoder_service__srv__MotorPI__get_type_description,
  &dc_encoder_service__srv__MotorPI__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dc_encoder_service

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<dc_encoder_service::srv::MotorPI>()
{
  return &::dc_encoder_service::srv::rosidl_typesupport_cpp::MotorPI_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, dc_encoder_service, srv, MotorPI)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<dc_encoder_service::srv::MotorPI>();
}

#ifdef __cplusplus
}
#endif
