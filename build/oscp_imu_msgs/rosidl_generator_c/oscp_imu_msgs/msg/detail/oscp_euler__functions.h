// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from oscp_imu_msgs:msg/OscpEuler.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "oscp_imu_msgs/msg/oscp_euler.h"


#ifndef OSCP_IMU_MSGS__MSG__DETAIL__OSCP_EULER__FUNCTIONS_H_
#define OSCP_IMU_MSGS__MSG__DETAIL__OSCP_EULER__FUNCTIONS_H_

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
#include "oscp_imu_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "oscp_imu_msgs/msg/detail/oscp_euler__struct.h"

/// Initialize msg/OscpEuler message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * oscp_imu_msgs__msg__OscpEuler
 * )) before or use
 * oscp_imu_msgs__msg__OscpEuler__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_msgs
bool
oscp_imu_msgs__msg__OscpEuler__init(oscp_imu_msgs__msg__OscpEuler * msg);

/// Finalize msg/OscpEuler message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_msgs
void
oscp_imu_msgs__msg__OscpEuler__fini(oscp_imu_msgs__msg__OscpEuler * msg);

/// Create msg/OscpEuler message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * oscp_imu_msgs__msg__OscpEuler__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_msgs
oscp_imu_msgs__msg__OscpEuler *
oscp_imu_msgs__msg__OscpEuler__create(void);

/// Destroy msg/OscpEuler message.
/**
 * It calls
 * oscp_imu_msgs__msg__OscpEuler__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_msgs
void
oscp_imu_msgs__msg__OscpEuler__destroy(oscp_imu_msgs__msg__OscpEuler * msg);

/// Check for msg/OscpEuler message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_msgs
bool
oscp_imu_msgs__msg__OscpEuler__are_equal(const oscp_imu_msgs__msg__OscpEuler * lhs, const oscp_imu_msgs__msg__OscpEuler * rhs);

/// Copy a msg/OscpEuler message.
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
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_msgs
bool
oscp_imu_msgs__msg__OscpEuler__copy(
  const oscp_imu_msgs__msg__OscpEuler * input,
  oscp_imu_msgs__msg__OscpEuler * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_msgs
const rosidl_type_hash_t *
oscp_imu_msgs__msg__OscpEuler__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_msgs
const rosidl_runtime_c__type_description__TypeDescription *
oscp_imu_msgs__msg__OscpEuler__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_msgs
const rosidl_runtime_c__type_description__TypeSource *
oscp_imu_msgs__msg__OscpEuler__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
oscp_imu_msgs__msg__OscpEuler__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/OscpEuler messages.
/**
 * It allocates the memory for the number of elements and calls
 * oscp_imu_msgs__msg__OscpEuler__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_msgs
bool
oscp_imu_msgs__msg__OscpEuler__Sequence__init(oscp_imu_msgs__msg__OscpEuler__Sequence * array, size_t size);

/// Finalize array of msg/OscpEuler messages.
/**
 * It calls
 * oscp_imu_msgs__msg__OscpEuler__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_msgs
void
oscp_imu_msgs__msg__OscpEuler__Sequence__fini(oscp_imu_msgs__msg__OscpEuler__Sequence * array);

/// Create array of msg/OscpEuler messages.
/**
 * It allocates the memory for the array and calls
 * oscp_imu_msgs__msg__OscpEuler__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_msgs
oscp_imu_msgs__msg__OscpEuler__Sequence *
oscp_imu_msgs__msg__OscpEuler__Sequence__create(size_t size);

/// Destroy array of msg/OscpEuler messages.
/**
 * It calls
 * oscp_imu_msgs__msg__OscpEuler__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_msgs
void
oscp_imu_msgs__msg__OscpEuler__Sequence__destroy(oscp_imu_msgs__msg__OscpEuler__Sequence * array);

/// Check for msg/OscpEuler message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_msgs
bool
oscp_imu_msgs__msg__OscpEuler__Sequence__are_equal(const oscp_imu_msgs__msg__OscpEuler__Sequence * lhs, const oscp_imu_msgs__msg__OscpEuler__Sequence * rhs);

/// Copy an array of msg/OscpEuler messages.
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
ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_msgs
bool
oscp_imu_msgs__msg__OscpEuler__Sequence__copy(
  const oscp_imu_msgs__msg__OscpEuler__Sequence * input,
  oscp_imu_msgs__msg__OscpEuler__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OSCP_IMU_MSGS__MSG__DETAIL__OSCP_EULER__FUNCTIONS_H_
