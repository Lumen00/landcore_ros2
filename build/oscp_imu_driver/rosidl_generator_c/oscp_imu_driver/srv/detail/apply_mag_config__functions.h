// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from oscp_imu_driver:srv/ApplyMagConfig.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "oscp_imu_driver/srv/apply_mag_config.h"


#ifndef OSCP_IMU_DRIVER__SRV__DETAIL__APPLY_MAG_CONFIG__FUNCTIONS_H_
#define OSCP_IMU_DRIVER__SRV__DETAIL__APPLY_MAG_CONFIG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "oscp_imu_driver/msg/rosidl_generator_c__visibility_control.h"

#include "oscp_imu_driver/srv/detail/apply_mag_config__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
const rosidl_type_hash_t *
oscp_imu_driver__srv__ApplyMagConfig__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
const rosidl_runtime_c__type_description__TypeDescription *
oscp_imu_driver__srv__ApplyMagConfig__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
const rosidl_runtime_c__type_description__TypeSource *
oscp_imu_driver__srv__ApplyMagConfig__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
const rosidl_runtime_c__type_description__TypeSource__Sequence *
oscp_imu_driver__srv__ApplyMagConfig__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/ApplyMagConfig message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * oscp_imu_driver__srv__ApplyMagConfig_Request
 * )) before or use
 * oscp_imu_driver__srv__ApplyMagConfig_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
bool
oscp_imu_driver__srv__ApplyMagConfig_Request__init(oscp_imu_driver__srv__ApplyMagConfig_Request * msg);

/// Finalize srv/ApplyMagConfig message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
void
oscp_imu_driver__srv__ApplyMagConfig_Request__fini(oscp_imu_driver__srv__ApplyMagConfig_Request * msg);

/// Create srv/ApplyMagConfig message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * oscp_imu_driver__srv__ApplyMagConfig_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
oscp_imu_driver__srv__ApplyMagConfig_Request *
oscp_imu_driver__srv__ApplyMagConfig_Request__create(void);

/// Destroy srv/ApplyMagConfig message.
/**
 * It calls
 * oscp_imu_driver__srv__ApplyMagConfig_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
void
oscp_imu_driver__srv__ApplyMagConfig_Request__destroy(oscp_imu_driver__srv__ApplyMagConfig_Request * msg);

/// Check for srv/ApplyMagConfig message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
bool
oscp_imu_driver__srv__ApplyMagConfig_Request__are_equal(const oscp_imu_driver__srv__ApplyMagConfig_Request * lhs, const oscp_imu_driver__srv__ApplyMagConfig_Request * rhs);

/// Copy a srv/ApplyMagConfig message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
bool
oscp_imu_driver__srv__ApplyMagConfig_Request__copy(
  const oscp_imu_driver__srv__ApplyMagConfig_Request * input,
  oscp_imu_driver__srv__ApplyMagConfig_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
const rosidl_type_hash_t *
oscp_imu_driver__srv__ApplyMagConfig_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
const rosidl_runtime_c__type_description__TypeDescription *
oscp_imu_driver__srv__ApplyMagConfig_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
const rosidl_runtime_c__type_description__TypeSource *
oscp_imu_driver__srv__ApplyMagConfig_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
const rosidl_runtime_c__type_description__TypeSource__Sequence *
oscp_imu_driver__srv__ApplyMagConfig_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/ApplyMagConfig messages.
/**
 * It allocates the memory for the number of elements and calls
 * oscp_imu_driver__srv__ApplyMagConfig_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
bool
oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence__init(oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence * array, size_t size);

/// Finalize array of srv/ApplyMagConfig messages.
/**
 * It calls
 * oscp_imu_driver__srv__ApplyMagConfig_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
void
oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence__fini(oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence * array);

/// Create array of srv/ApplyMagConfig messages.
/**
 * It allocates the memory for the array and calls
 * oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence *
oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence__create(size_t size);

/// Destroy array of srv/ApplyMagConfig messages.
/**
 * It calls
 * oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
void
oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence__destroy(oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence * array);

/// Check for srv/ApplyMagConfig message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
bool
oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence__are_equal(const oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence * lhs, const oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence * rhs);

/// Copy an array of srv/ApplyMagConfig messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
bool
oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence__copy(
  const oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence * input,
  oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence * output);

/// Initialize srv/ApplyMagConfig message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * oscp_imu_driver__srv__ApplyMagConfig_Response
 * )) before or use
 * oscp_imu_driver__srv__ApplyMagConfig_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
bool
oscp_imu_driver__srv__ApplyMagConfig_Response__init(oscp_imu_driver__srv__ApplyMagConfig_Response * msg);

/// Finalize srv/ApplyMagConfig message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
void
oscp_imu_driver__srv__ApplyMagConfig_Response__fini(oscp_imu_driver__srv__ApplyMagConfig_Response * msg);

/// Create srv/ApplyMagConfig message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * oscp_imu_driver__srv__ApplyMagConfig_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
oscp_imu_driver__srv__ApplyMagConfig_Response *
oscp_imu_driver__srv__ApplyMagConfig_Response__create(void);

/// Destroy srv/ApplyMagConfig message.
/**
 * It calls
 * oscp_imu_driver__srv__ApplyMagConfig_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
void
oscp_imu_driver__srv__ApplyMagConfig_Response__destroy(oscp_imu_driver__srv__ApplyMagConfig_Response * msg);

/// Check for srv/ApplyMagConfig message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
bool
oscp_imu_driver__srv__ApplyMagConfig_Response__are_equal(const oscp_imu_driver__srv__ApplyMagConfig_Response * lhs, const oscp_imu_driver__srv__ApplyMagConfig_Response * rhs);

/// Copy a srv/ApplyMagConfig message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
bool
oscp_imu_driver__srv__ApplyMagConfig_Response__copy(
  const oscp_imu_driver__srv__ApplyMagConfig_Response * input,
  oscp_imu_driver__srv__ApplyMagConfig_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
const rosidl_type_hash_t *
oscp_imu_driver__srv__ApplyMagConfig_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
const rosidl_runtime_c__type_description__TypeDescription *
oscp_imu_driver__srv__ApplyMagConfig_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
const rosidl_runtime_c__type_description__TypeSource *
oscp_imu_driver__srv__ApplyMagConfig_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
const rosidl_runtime_c__type_description__TypeSource__Sequence *
oscp_imu_driver__srv__ApplyMagConfig_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/ApplyMagConfig messages.
/**
 * It allocates the memory for the number of elements and calls
 * oscp_imu_driver__srv__ApplyMagConfig_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
bool
oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence__init(oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence * array, size_t size);

/// Finalize array of srv/ApplyMagConfig messages.
/**
 * It calls
 * oscp_imu_driver__srv__ApplyMagConfig_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
void
oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence__fini(oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence * array);

/// Create array of srv/ApplyMagConfig messages.
/**
 * It allocates the memory for the array and calls
 * oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence *
oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence__create(size_t size);

/// Destroy array of srv/ApplyMagConfig messages.
/**
 * It calls
 * oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
void
oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence__destroy(oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence * array);

/// Check for srv/ApplyMagConfig message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
bool
oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence__are_equal(const oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence * lhs, const oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence * rhs);

/// Copy an array of srv/ApplyMagConfig messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
bool
oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence__copy(
  const oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence * input,
  oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence * output);

/// Initialize srv/ApplyMagConfig message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * oscp_imu_driver__srv__ApplyMagConfig_Event
 * )) before or use
 * oscp_imu_driver__srv__ApplyMagConfig_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
bool
oscp_imu_driver__srv__ApplyMagConfig_Event__init(oscp_imu_driver__srv__ApplyMagConfig_Event * msg);

/// Finalize srv/ApplyMagConfig message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
void
oscp_imu_driver__srv__ApplyMagConfig_Event__fini(oscp_imu_driver__srv__ApplyMagConfig_Event * msg);

/// Create srv/ApplyMagConfig message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * oscp_imu_driver__srv__ApplyMagConfig_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
oscp_imu_driver__srv__ApplyMagConfig_Event *
oscp_imu_driver__srv__ApplyMagConfig_Event__create(void);

/// Destroy srv/ApplyMagConfig message.
/**
 * It calls
 * oscp_imu_driver__srv__ApplyMagConfig_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
void
oscp_imu_driver__srv__ApplyMagConfig_Event__destroy(oscp_imu_driver__srv__ApplyMagConfig_Event * msg);

/// Check for srv/ApplyMagConfig message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
bool
oscp_imu_driver__srv__ApplyMagConfig_Event__are_equal(const oscp_imu_driver__srv__ApplyMagConfig_Event * lhs, const oscp_imu_driver__srv__ApplyMagConfig_Event * rhs);

/// Copy a srv/ApplyMagConfig message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
bool
oscp_imu_driver__srv__ApplyMagConfig_Event__copy(
  const oscp_imu_driver__srv__ApplyMagConfig_Event * input,
  oscp_imu_driver__srv__ApplyMagConfig_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
const rosidl_type_hash_t *
oscp_imu_driver__srv__ApplyMagConfig_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
const rosidl_runtime_c__type_description__TypeDescription *
oscp_imu_driver__srv__ApplyMagConfig_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
const rosidl_runtime_c__type_description__TypeSource *
oscp_imu_driver__srv__ApplyMagConfig_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
const rosidl_runtime_c__type_description__TypeSource__Sequence *
oscp_imu_driver__srv__ApplyMagConfig_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/ApplyMagConfig messages.
/**
 * It allocates the memory for the number of elements and calls
 * oscp_imu_driver__srv__ApplyMagConfig_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
bool
oscp_imu_driver__srv__ApplyMagConfig_Event__Sequence__init(oscp_imu_driver__srv__ApplyMagConfig_Event__Sequence * array, size_t size);

/// Finalize array of srv/ApplyMagConfig messages.
/**
 * It calls
 * oscp_imu_driver__srv__ApplyMagConfig_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
void
oscp_imu_driver__srv__ApplyMagConfig_Event__Sequence__fini(oscp_imu_driver__srv__ApplyMagConfig_Event__Sequence * array);

/// Create array of srv/ApplyMagConfig messages.
/**
 * It allocates the memory for the array and calls
 * oscp_imu_driver__srv__ApplyMagConfig_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
oscp_imu_driver__srv__ApplyMagConfig_Event__Sequence *
oscp_imu_driver__srv__ApplyMagConfig_Event__Sequence__create(size_t size);

/// Destroy array of srv/ApplyMagConfig messages.
/**
 * It calls
 * oscp_imu_driver__srv__ApplyMagConfig_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
void
oscp_imu_driver__srv__ApplyMagConfig_Event__Sequence__destroy(oscp_imu_driver__srv__ApplyMagConfig_Event__Sequence * array);

/// Check for srv/ApplyMagConfig message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
bool
oscp_imu_driver__srv__ApplyMagConfig_Event__Sequence__are_equal(const oscp_imu_driver__srv__ApplyMagConfig_Event__Sequence * lhs, const oscp_imu_driver__srv__ApplyMagConfig_Event__Sequence * rhs);

/// Copy an array of srv/ApplyMagConfig messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_driver
bool
oscp_imu_driver__srv__ApplyMagConfig_Event__Sequence__copy(
  const oscp_imu_driver__srv__ApplyMagConfig_Event__Sequence * input,
  oscp_imu_driver__srv__ApplyMagConfig_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // OSCP_IMU_DRIVER__SRV__DETAIL__APPLY_MAG_CONFIG__FUNCTIONS_H_
