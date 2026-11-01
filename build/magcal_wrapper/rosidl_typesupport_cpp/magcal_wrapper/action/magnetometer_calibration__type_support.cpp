// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from magcal_wrapper:action/MagnetometerCalibration.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "magcal_wrapper/action/detail/magnetometer_calibration__functions.h"
#include "magcal_wrapper/action/detail/magnetometer_calibration__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace magcal_wrapper
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MagnetometerCalibration_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MagnetometerCalibration_Goal_type_support_ids_t;

static const _MagnetometerCalibration_Goal_type_support_ids_t _MagnetometerCalibration_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MagnetometerCalibration_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MagnetometerCalibration_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MagnetometerCalibration_Goal_type_support_symbol_names_t _MagnetometerCalibration_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, magcal_wrapper, action, MagnetometerCalibration_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, magcal_wrapper, action, MagnetometerCalibration_Goal)),
  }
};

typedef struct _MagnetometerCalibration_Goal_type_support_data_t
{
  void * data[2];
} _MagnetometerCalibration_Goal_type_support_data_t;

static _MagnetometerCalibration_Goal_type_support_data_t _MagnetometerCalibration_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MagnetometerCalibration_Goal_message_typesupport_map = {
  2,
  "magcal_wrapper",
  &_MagnetometerCalibration_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_MagnetometerCalibration_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_MagnetometerCalibration_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MagnetometerCalibration_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MagnetometerCalibration_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &magcal_wrapper__action__MagnetometerCalibration_Goal__get_type_hash,
  &magcal_wrapper__action__MagnetometerCalibration_Goal__get_type_description,
  &magcal_wrapper__action__MagnetometerCalibration_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace magcal_wrapper

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_Goal>()
{
  return &::magcal_wrapper::action::rosidl_typesupport_cpp::MagnetometerCalibration_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, magcal_wrapper, action, MagnetometerCalibration_Goal)() {
  return get_message_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_Goal>();
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
// #include "magcal_wrapper/action/detail/magnetometer_calibration__functions.h"
// already included above
// #include "magcal_wrapper/action/detail/magnetometer_calibration__struct.hpp"
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

namespace magcal_wrapper
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MagnetometerCalibration_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MagnetometerCalibration_Result_type_support_ids_t;

static const _MagnetometerCalibration_Result_type_support_ids_t _MagnetometerCalibration_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MagnetometerCalibration_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MagnetometerCalibration_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MagnetometerCalibration_Result_type_support_symbol_names_t _MagnetometerCalibration_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, magcal_wrapper, action, MagnetometerCalibration_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, magcal_wrapper, action, MagnetometerCalibration_Result)),
  }
};

typedef struct _MagnetometerCalibration_Result_type_support_data_t
{
  void * data[2];
} _MagnetometerCalibration_Result_type_support_data_t;

static _MagnetometerCalibration_Result_type_support_data_t _MagnetometerCalibration_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MagnetometerCalibration_Result_message_typesupport_map = {
  2,
  "magcal_wrapper",
  &_MagnetometerCalibration_Result_message_typesupport_ids.typesupport_identifier[0],
  &_MagnetometerCalibration_Result_message_typesupport_symbol_names.symbol_name[0],
  &_MagnetometerCalibration_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MagnetometerCalibration_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MagnetometerCalibration_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &magcal_wrapper__action__MagnetometerCalibration_Result__get_type_hash,
  &magcal_wrapper__action__MagnetometerCalibration_Result__get_type_description,
  &magcal_wrapper__action__MagnetometerCalibration_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace magcal_wrapper

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_Result>()
{
  return &::magcal_wrapper::action::rosidl_typesupport_cpp::MagnetometerCalibration_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, magcal_wrapper, action, MagnetometerCalibration_Result)() {
  return get_message_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_Result>();
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
// #include "magcal_wrapper/action/detail/magnetometer_calibration__functions.h"
// already included above
// #include "magcal_wrapper/action/detail/magnetometer_calibration__struct.hpp"
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

namespace magcal_wrapper
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MagnetometerCalibration_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MagnetometerCalibration_Feedback_type_support_ids_t;

static const _MagnetometerCalibration_Feedback_type_support_ids_t _MagnetometerCalibration_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MagnetometerCalibration_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MagnetometerCalibration_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MagnetometerCalibration_Feedback_type_support_symbol_names_t _MagnetometerCalibration_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, magcal_wrapper, action, MagnetometerCalibration_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, magcal_wrapper, action, MagnetometerCalibration_Feedback)),
  }
};

typedef struct _MagnetometerCalibration_Feedback_type_support_data_t
{
  void * data[2];
} _MagnetometerCalibration_Feedback_type_support_data_t;

static _MagnetometerCalibration_Feedback_type_support_data_t _MagnetometerCalibration_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MagnetometerCalibration_Feedback_message_typesupport_map = {
  2,
  "magcal_wrapper",
  &_MagnetometerCalibration_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_MagnetometerCalibration_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_MagnetometerCalibration_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MagnetometerCalibration_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MagnetometerCalibration_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &magcal_wrapper__action__MagnetometerCalibration_Feedback__get_type_hash,
  &magcal_wrapper__action__MagnetometerCalibration_Feedback__get_type_description,
  &magcal_wrapper__action__MagnetometerCalibration_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace magcal_wrapper

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_Feedback>()
{
  return &::magcal_wrapper::action::rosidl_typesupport_cpp::MagnetometerCalibration_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, magcal_wrapper, action, MagnetometerCalibration_Feedback)() {
  return get_message_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_Feedback>();
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
// #include "magcal_wrapper/action/detail/magnetometer_calibration__functions.h"
// already included above
// #include "magcal_wrapper/action/detail/magnetometer_calibration__struct.hpp"
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

namespace magcal_wrapper
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MagnetometerCalibration_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MagnetometerCalibration_SendGoal_Request_type_support_ids_t;

static const _MagnetometerCalibration_SendGoal_Request_type_support_ids_t _MagnetometerCalibration_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MagnetometerCalibration_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MagnetometerCalibration_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MagnetometerCalibration_SendGoal_Request_type_support_symbol_names_t _MagnetometerCalibration_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, magcal_wrapper, action, MagnetometerCalibration_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, magcal_wrapper, action, MagnetometerCalibration_SendGoal_Request)),
  }
};

typedef struct _MagnetometerCalibration_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _MagnetometerCalibration_SendGoal_Request_type_support_data_t;

static _MagnetometerCalibration_SendGoal_Request_type_support_data_t _MagnetometerCalibration_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MagnetometerCalibration_SendGoal_Request_message_typesupport_map = {
  2,
  "magcal_wrapper",
  &_MagnetometerCalibration_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MagnetometerCalibration_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MagnetometerCalibration_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MagnetometerCalibration_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MagnetometerCalibration_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__get_type_hash,
  &magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__get_type_description,
  &magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace magcal_wrapper

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Request>()
{
  return &::magcal_wrapper::action::rosidl_typesupport_cpp::MagnetometerCalibration_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, magcal_wrapper, action, MagnetometerCalibration_SendGoal_Request)() {
  return get_message_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Request>();
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
// #include "magcal_wrapper/action/detail/magnetometer_calibration__functions.h"
// already included above
// #include "magcal_wrapper/action/detail/magnetometer_calibration__struct.hpp"
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

namespace magcal_wrapper
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MagnetometerCalibration_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MagnetometerCalibration_SendGoal_Response_type_support_ids_t;

static const _MagnetometerCalibration_SendGoal_Response_type_support_ids_t _MagnetometerCalibration_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MagnetometerCalibration_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MagnetometerCalibration_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MagnetometerCalibration_SendGoal_Response_type_support_symbol_names_t _MagnetometerCalibration_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, magcal_wrapper, action, MagnetometerCalibration_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, magcal_wrapper, action, MagnetometerCalibration_SendGoal_Response)),
  }
};

typedef struct _MagnetometerCalibration_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _MagnetometerCalibration_SendGoal_Response_type_support_data_t;

static _MagnetometerCalibration_SendGoal_Response_type_support_data_t _MagnetometerCalibration_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MagnetometerCalibration_SendGoal_Response_message_typesupport_map = {
  2,
  "magcal_wrapper",
  &_MagnetometerCalibration_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MagnetometerCalibration_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MagnetometerCalibration_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MagnetometerCalibration_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MagnetometerCalibration_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__get_type_hash,
  &magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__get_type_description,
  &magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace magcal_wrapper

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Response>()
{
  return &::magcal_wrapper::action::rosidl_typesupport_cpp::MagnetometerCalibration_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, magcal_wrapper, action, MagnetometerCalibration_SendGoal_Response)() {
  return get_message_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Response>();
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
// #include "magcal_wrapper/action/detail/magnetometer_calibration__functions.h"
// already included above
// #include "magcal_wrapper/action/detail/magnetometer_calibration__struct.hpp"
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

namespace magcal_wrapper
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MagnetometerCalibration_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MagnetometerCalibration_SendGoal_Event_type_support_ids_t;

static const _MagnetometerCalibration_SendGoal_Event_type_support_ids_t _MagnetometerCalibration_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MagnetometerCalibration_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MagnetometerCalibration_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MagnetometerCalibration_SendGoal_Event_type_support_symbol_names_t _MagnetometerCalibration_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, magcal_wrapper, action, MagnetometerCalibration_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, magcal_wrapper, action, MagnetometerCalibration_SendGoal_Event)),
  }
};

typedef struct _MagnetometerCalibration_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _MagnetometerCalibration_SendGoal_Event_type_support_data_t;

static _MagnetometerCalibration_SendGoal_Event_type_support_data_t _MagnetometerCalibration_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MagnetometerCalibration_SendGoal_Event_message_typesupport_map = {
  2,
  "magcal_wrapper",
  &_MagnetometerCalibration_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MagnetometerCalibration_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MagnetometerCalibration_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MagnetometerCalibration_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MagnetometerCalibration_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__get_type_hash,
  &magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__get_type_description,
  &magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace magcal_wrapper

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Event>()
{
  return &::magcal_wrapper::action::rosidl_typesupport_cpp::MagnetometerCalibration_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, magcal_wrapper, action, MagnetometerCalibration_SendGoal_Event)() {
  return get_message_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Event>();
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
// #include "magcal_wrapper/action/detail/magnetometer_calibration__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace magcal_wrapper
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MagnetometerCalibration_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MagnetometerCalibration_SendGoal_type_support_ids_t;

static const _MagnetometerCalibration_SendGoal_type_support_ids_t _MagnetometerCalibration_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MagnetometerCalibration_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MagnetometerCalibration_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MagnetometerCalibration_SendGoal_type_support_symbol_names_t _MagnetometerCalibration_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, magcal_wrapper, action, MagnetometerCalibration_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, magcal_wrapper, action, MagnetometerCalibration_SendGoal)),
  }
};

typedef struct _MagnetometerCalibration_SendGoal_type_support_data_t
{
  void * data[2];
} _MagnetometerCalibration_SendGoal_type_support_data_t;

static _MagnetometerCalibration_SendGoal_type_support_data_t _MagnetometerCalibration_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MagnetometerCalibration_SendGoal_service_typesupport_map = {
  2,
  "magcal_wrapper",
  &_MagnetometerCalibration_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_MagnetometerCalibration_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_MagnetometerCalibration_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MagnetometerCalibration_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MagnetometerCalibration_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<magcal_wrapper::action::MagnetometerCalibration_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<magcal_wrapper::action::MagnetometerCalibration_SendGoal>,
  &magcal_wrapper__action__MagnetometerCalibration_SendGoal__get_type_hash,
  &magcal_wrapper__action__MagnetometerCalibration_SendGoal__get_type_description,
  &magcal_wrapper__action__MagnetometerCalibration_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace magcal_wrapper

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_SendGoal>()
{
  return &::magcal_wrapper::action::rosidl_typesupport_cpp::MagnetometerCalibration_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, magcal_wrapper, action, MagnetometerCalibration_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "magcal_wrapper/action/detail/magnetometer_calibration__functions.h"
// already included above
// #include "magcal_wrapper/action/detail/magnetometer_calibration__struct.hpp"
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

namespace magcal_wrapper
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MagnetometerCalibration_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MagnetometerCalibration_GetResult_Request_type_support_ids_t;

static const _MagnetometerCalibration_GetResult_Request_type_support_ids_t _MagnetometerCalibration_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MagnetometerCalibration_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MagnetometerCalibration_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MagnetometerCalibration_GetResult_Request_type_support_symbol_names_t _MagnetometerCalibration_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, magcal_wrapper, action, MagnetometerCalibration_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, magcal_wrapper, action, MagnetometerCalibration_GetResult_Request)),
  }
};

typedef struct _MagnetometerCalibration_GetResult_Request_type_support_data_t
{
  void * data[2];
} _MagnetometerCalibration_GetResult_Request_type_support_data_t;

static _MagnetometerCalibration_GetResult_Request_type_support_data_t _MagnetometerCalibration_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MagnetometerCalibration_GetResult_Request_message_typesupport_map = {
  2,
  "magcal_wrapper",
  &_MagnetometerCalibration_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MagnetometerCalibration_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MagnetometerCalibration_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MagnetometerCalibration_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MagnetometerCalibration_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__get_type_hash,
  &magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__get_type_description,
  &magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace magcal_wrapper

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_GetResult_Request>()
{
  return &::magcal_wrapper::action::rosidl_typesupport_cpp::MagnetometerCalibration_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, magcal_wrapper, action, MagnetometerCalibration_GetResult_Request)() {
  return get_message_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_GetResult_Request>();
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
// #include "magcal_wrapper/action/detail/magnetometer_calibration__functions.h"
// already included above
// #include "magcal_wrapper/action/detail/magnetometer_calibration__struct.hpp"
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

namespace magcal_wrapper
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MagnetometerCalibration_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MagnetometerCalibration_GetResult_Response_type_support_ids_t;

static const _MagnetometerCalibration_GetResult_Response_type_support_ids_t _MagnetometerCalibration_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MagnetometerCalibration_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MagnetometerCalibration_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MagnetometerCalibration_GetResult_Response_type_support_symbol_names_t _MagnetometerCalibration_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, magcal_wrapper, action, MagnetometerCalibration_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, magcal_wrapper, action, MagnetometerCalibration_GetResult_Response)),
  }
};

typedef struct _MagnetometerCalibration_GetResult_Response_type_support_data_t
{
  void * data[2];
} _MagnetometerCalibration_GetResult_Response_type_support_data_t;

static _MagnetometerCalibration_GetResult_Response_type_support_data_t _MagnetometerCalibration_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MagnetometerCalibration_GetResult_Response_message_typesupport_map = {
  2,
  "magcal_wrapper",
  &_MagnetometerCalibration_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MagnetometerCalibration_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MagnetometerCalibration_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MagnetometerCalibration_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MagnetometerCalibration_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__get_type_hash,
  &magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__get_type_description,
  &magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace magcal_wrapper

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_GetResult_Response>()
{
  return &::magcal_wrapper::action::rosidl_typesupport_cpp::MagnetometerCalibration_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, magcal_wrapper, action, MagnetometerCalibration_GetResult_Response)() {
  return get_message_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_GetResult_Response>();
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
// #include "magcal_wrapper/action/detail/magnetometer_calibration__functions.h"
// already included above
// #include "magcal_wrapper/action/detail/magnetometer_calibration__struct.hpp"
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

namespace magcal_wrapper
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MagnetometerCalibration_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MagnetometerCalibration_GetResult_Event_type_support_ids_t;

static const _MagnetometerCalibration_GetResult_Event_type_support_ids_t _MagnetometerCalibration_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MagnetometerCalibration_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MagnetometerCalibration_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MagnetometerCalibration_GetResult_Event_type_support_symbol_names_t _MagnetometerCalibration_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, magcal_wrapper, action, MagnetometerCalibration_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, magcal_wrapper, action, MagnetometerCalibration_GetResult_Event)),
  }
};

typedef struct _MagnetometerCalibration_GetResult_Event_type_support_data_t
{
  void * data[2];
} _MagnetometerCalibration_GetResult_Event_type_support_data_t;

static _MagnetometerCalibration_GetResult_Event_type_support_data_t _MagnetometerCalibration_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MagnetometerCalibration_GetResult_Event_message_typesupport_map = {
  2,
  "magcal_wrapper",
  &_MagnetometerCalibration_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MagnetometerCalibration_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MagnetometerCalibration_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MagnetometerCalibration_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MagnetometerCalibration_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__get_type_hash,
  &magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__get_type_description,
  &magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace magcal_wrapper

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_GetResult_Event>()
{
  return &::magcal_wrapper::action::rosidl_typesupport_cpp::MagnetometerCalibration_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, magcal_wrapper, action, MagnetometerCalibration_GetResult_Event)() {
  return get_message_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "magcal_wrapper/action/detail/magnetometer_calibration__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace magcal_wrapper
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MagnetometerCalibration_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MagnetometerCalibration_GetResult_type_support_ids_t;

static const _MagnetometerCalibration_GetResult_type_support_ids_t _MagnetometerCalibration_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MagnetometerCalibration_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MagnetometerCalibration_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MagnetometerCalibration_GetResult_type_support_symbol_names_t _MagnetometerCalibration_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, magcal_wrapper, action, MagnetometerCalibration_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, magcal_wrapper, action, MagnetometerCalibration_GetResult)),
  }
};

typedef struct _MagnetometerCalibration_GetResult_type_support_data_t
{
  void * data[2];
} _MagnetometerCalibration_GetResult_type_support_data_t;

static _MagnetometerCalibration_GetResult_type_support_data_t _MagnetometerCalibration_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MagnetometerCalibration_GetResult_service_typesupport_map = {
  2,
  "magcal_wrapper",
  &_MagnetometerCalibration_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_MagnetometerCalibration_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_MagnetometerCalibration_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MagnetometerCalibration_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MagnetometerCalibration_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<magcal_wrapper::action::MagnetometerCalibration_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<magcal_wrapper::action::MagnetometerCalibration_GetResult>,
  &magcal_wrapper__action__MagnetometerCalibration_GetResult__get_type_hash,
  &magcal_wrapper__action__MagnetometerCalibration_GetResult__get_type_description,
  &magcal_wrapper__action__MagnetometerCalibration_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace magcal_wrapper

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_GetResult>()
{
  return &::magcal_wrapper::action::rosidl_typesupport_cpp::MagnetometerCalibration_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, magcal_wrapper, action, MagnetometerCalibration_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "magcal_wrapper/action/detail/magnetometer_calibration__functions.h"
// already included above
// #include "magcal_wrapper/action/detail/magnetometer_calibration__struct.hpp"
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

namespace magcal_wrapper
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MagnetometerCalibration_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MagnetometerCalibration_FeedbackMessage_type_support_ids_t;

static const _MagnetometerCalibration_FeedbackMessage_type_support_ids_t _MagnetometerCalibration_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MagnetometerCalibration_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MagnetometerCalibration_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MagnetometerCalibration_FeedbackMessage_type_support_symbol_names_t _MagnetometerCalibration_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, magcal_wrapper, action, MagnetometerCalibration_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, magcal_wrapper, action, MagnetometerCalibration_FeedbackMessage)),
  }
};

typedef struct _MagnetometerCalibration_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _MagnetometerCalibration_FeedbackMessage_type_support_data_t;

static _MagnetometerCalibration_FeedbackMessage_type_support_data_t _MagnetometerCalibration_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MagnetometerCalibration_FeedbackMessage_message_typesupport_map = {
  2,
  "magcal_wrapper",
  &_MagnetometerCalibration_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MagnetometerCalibration_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MagnetometerCalibration_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MagnetometerCalibration_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MagnetometerCalibration_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__get_type_hash,
  &magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__get_type_description,
  &magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace magcal_wrapper

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_FeedbackMessage>()
{
  return &::magcal_wrapper::action::rosidl_typesupport_cpp::MagnetometerCalibration_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, magcal_wrapper, action, MagnetometerCalibration_FeedbackMessage)() {
  return get_message_type_support_handle<magcal_wrapper::action::MagnetometerCalibration_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "magcal_wrapper/action/detail/magnetometer_calibration__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace magcal_wrapper
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t MagnetometerCalibration_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &magcal_wrapper__action__MagnetometerCalibration__get_type_hash,
  &magcal_wrapper__action__MagnetometerCalibration__get_type_description,
  &magcal_wrapper__action__MagnetometerCalibration__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace magcal_wrapper

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<magcal_wrapper::action::MagnetometerCalibration>()
{
  using ::magcal_wrapper::action::rosidl_typesupport_cpp::MagnetometerCalibration_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  MagnetometerCalibration_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::magcal_wrapper::action::MagnetometerCalibration::Impl::SendGoalService>();
  MagnetometerCalibration_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::magcal_wrapper::action::MagnetometerCalibration::Impl::GetResultService>();
  MagnetometerCalibration_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::magcal_wrapper::action::MagnetometerCalibration::Impl::CancelGoalService>();
  MagnetometerCalibration_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::magcal_wrapper::action::MagnetometerCalibration::Impl::FeedbackMessage>();
  MagnetometerCalibration_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::magcal_wrapper::action::MagnetometerCalibration::Impl::GoalStatusMessage>();
  return &MagnetometerCalibration_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, magcal_wrapper, action, MagnetometerCalibration)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<magcal_wrapper::action::MagnetometerCalibration>();
}

#ifdef __cplusplus
}
#endif
