// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from oscp_imu_msgs:msg/OscpRot.idl
// generated code does not contain a copyright notice
#include "oscp_imu_msgs/msg/detail/oscp_rot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
oscp_imu_msgs__msg__OscpRot__init(oscp_imu_msgs__msg__OscpRot * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    oscp_imu_msgs__msg__OscpRot__fini(msg);
    return false;
  }
  // header_byte
  // counter
  // timestamp_ms
  // rotation_matrix
  // status
  // crc
  return true;
}

void
oscp_imu_msgs__msg__OscpRot__fini(oscp_imu_msgs__msg__OscpRot * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // header_byte
  // counter
  // timestamp_ms
  // rotation_matrix
  // status
  // crc
}

bool
oscp_imu_msgs__msg__OscpRot__are_equal(const oscp_imu_msgs__msg__OscpRot * lhs, const oscp_imu_msgs__msg__OscpRot * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // header_byte
  if (lhs->header_byte != rhs->header_byte) {
    return false;
  }
  // counter
  if (lhs->counter != rhs->counter) {
    return false;
  }
  // timestamp_ms
  if (lhs->timestamp_ms != rhs->timestamp_ms) {
    return false;
  }
  // rotation_matrix
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->rotation_matrix[i] != rhs->rotation_matrix[i]) {
      return false;
    }
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // crc
  if (lhs->crc != rhs->crc) {
    return false;
  }
  return true;
}

bool
oscp_imu_msgs__msg__OscpRot__copy(
  const oscp_imu_msgs__msg__OscpRot * input,
  oscp_imu_msgs__msg__OscpRot * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // header_byte
  output->header_byte = input->header_byte;
  // counter
  output->counter = input->counter;
  // timestamp_ms
  output->timestamp_ms = input->timestamp_ms;
  // rotation_matrix
  for (size_t i = 0; i < 9; ++i) {
    output->rotation_matrix[i] = input->rotation_matrix[i];
  }
  // status
  output->status = input->status;
  // crc
  output->crc = input->crc;
  return true;
}

oscp_imu_msgs__msg__OscpRot *
oscp_imu_msgs__msg__OscpRot__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  oscp_imu_msgs__msg__OscpRot * msg = (oscp_imu_msgs__msg__OscpRot *)allocator.allocate(sizeof(oscp_imu_msgs__msg__OscpRot), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(oscp_imu_msgs__msg__OscpRot));
  bool success = oscp_imu_msgs__msg__OscpRot__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
oscp_imu_msgs__msg__OscpRot__destroy(oscp_imu_msgs__msg__OscpRot * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    oscp_imu_msgs__msg__OscpRot__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
oscp_imu_msgs__msg__OscpRot__Sequence__init(oscp_imu_msgs__msg__OscpRot__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  oscp_imu_msgs__msg__OscpRot * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(oscp_imu_msgs__msg__OscpRot)) {
      return false;
    }
    data = (oscp_imu_msgs__msg__OscpRot *)allocator.zero_allocate(size, sizeof(oscp_imu_msgs__msg__OscpRot), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = oscp_imu_msgs__msg__OscpRot__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        oscp_imu_msgs__msg__OscpRot__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
oscp_imu_msgs__msg__OscpRot__Sequence__fini(oscp_imu_msgs__msg__OscpRot__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      oscp_imu_msgs__msg__OscpRot__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

oscp_imu_msgs__msg__OscpRot__Sequence *
oscp_imu_msgs__msg__OscpRot__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  oscp_imu_msgs__msg__OscpRot__Sequence * array = (oscp_imu_msgs__msg__OscpRot__Sequence *)allocator.allocate(sizeof(oscp_imu_msgs__msg__OscpRot__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = oscp_imu_msgs__msg__OscpRot__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
oscp_imu_msgs__msg__OscpRot__Sequence__destroy(oscp_imu_msgs__msg__OscpRot__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    oscp_imu_msgs__msg__OscpRot__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
oscp_imu_msgs__msg__OscpRot__Sequence__are_equal(const oscp_imu_msgs__msg__OscpRot__Sequence * lhs, const oscp_imu_msgs__msg__OscpRot__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!oscp_imu_msgs__msg__OscpRot__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
oscp_imu_msgs__msg__OscpRot__Sequence__copy(
  const oscp_imu_msgs__msg__OscpRot__Sequence * input,
  oscp_imu_msgs__msg__OscpRot__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(oscp_imu_msgs__msg__OscpRot)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(oscp_imu_msgs__msg__OscpRot);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    oscp_imu_msgs__msg__OscpRot * data =
      (oscp_imu_msgs__msg__OscpRot *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!oscp_imu_msgs__msg__OscpRot__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          oscp_imu_msgs__msg__OscpRot__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!oscp_imu_msgs__msg__OscpRot__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
