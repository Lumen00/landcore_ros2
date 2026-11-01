// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from oscp_imu_msgs:msg/OscpGnss.idl
// generated code does not contain a copyright notice
#include "oscp_imu_msgs/msg/detail/oscp_gnss__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
oscp_imu_msgs__msg__OscpGnss__init(oscp_imu_msgs__msg__OscpGnss * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    oscp_imu_msgs__msg__OscpGnss__fini(msg);
    return false;
  }
  // header_byte
  // counter
  // timestamp_ms
  // fix_type
  // num_satellites
  // longitude
  // latitude
  // height_mm
  // h_accuracy_mm
  // v_accuracy_mm
  // vel_north_mms
  // vel_east_mms
  // vel_down_mms
  // speed_accuracy_mms
  // heading_motion
  // heading_accuracy
  // position_dop
  // last_correction_age
  // gnss_status
  // status
  // crc
  return true;
}

void
oscp_imu_msgs__msg__OscpGnss__fini(oscp_imu_msgs__msg__OscpGnss * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // header_byte
  // counter
  // timestamp_ms
  // fix_type
  // num_satellites
  // longitude
  // latitude
  // height_mm
  // h_accuracy_mm
  // v_accuracy_mm
  // vel_north_mms
  // vel_east_mms
  // vel_down_mms
  // speed_accuracy_mms
  // heading_motion
  // heading_accuracy
  // position_dop
  // last_correction_age
  // gnss_status
  // status
  // crc
}

bool
oscp_imu_msgs__msg__OscpGnss__are_equal(const oscp_imu_msgs__msg__OscpGnss * lhs, const oscp_imu_msgs__msg__OscpGnss * rhs)
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
  // fix_type
  if (lhs->fix_type != rhs->fix_type) {
    return false;
  }
  // num_satellites
  if (lhs->num_satellites != rhs->num_satellites) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // latitude
  if (lhs->latitude != rhs->latitude) {
    return false;
  }
  // height_mm
  if (lhs->height_mm != rhs->height_mm) {
    return false;
  }
  // h_accuracy_mm
  if (lhs->h_accuracy_mm != rhs->h_accuracy_mm) {
    return false;
  }
  // v_accuracy_mm
  if (lhs->v_accuracy_mm != rhs->v_accuracy_mm) {
    return false;
  }
  // vel_north_mms
  if (lhs->vel_north_mms != rhs->vel_north_mms) {
    return false;
  }
  // vel_east_mms
  if (lhs->vel_east_mms != rhs->vel_east_mms) {
    return false;
  }
  // vel_down_mms
  if (lhs->vel_down_mms != rhs->vel_down_mms) {
    return false;
  }
  // speed_accuracy_mms
  if (lhs->speed_accuracy_mms != rhs->speed_accuracy_mms) {
    return false;
  }
  // heading_motion
  if (lhs->heading_motion != rhs->heading_motion) {
    return false;
  }
  // heading_accuracy
  if (lhs->heading_accuracy != rhs->heading_accuracy) {
    return false;
  }
  // position_dop
  if (lhs->position_dop != rhs->position_dop) {
    return false;
  }
  // last_correction_age
  if (lhs->last_correction_age != rhs->last_correction_age) {
    return false;
  }
  // gnss_status
  if (lhs->gnss_status != rhs->gnss_status) {
    return false;
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
oscp_imu_msgs__msg__OscpGnss__copy(
  const oscp_imu_msgs__msg__OscpGnss * input,
  oscp_imu_msgs__msg__OscpGnss * output)
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
  // fix_type
  output->fix_type = input->fix_type;
  // num_satellites
  output->num_satellites = input->num_satellites;
  // longitude
  output->longitude = input->longitude;
  // latitude
  output->latitude = input->latitude;
  // height_mm
  output->height_mm = input->height_mm;
  // h_accuracy_mm
  output->h_accuracy_mm = input->h_accuracy_mm;
  // v_accuracy_mm
  output->v_accuracy_mm = input->v_accuracy_mm;
  // vel_north_mms
  output->vel_north_mms = input->vel_north_mms;
  // vel_east_mms
  output->vel_east_mms = input->vel_east_mms;
  // vel_down_mms
  output->vel_down_mms = input->vel_down_mms;
  // speed_accuracy_mms
  output->speed_accuracy_mms = input->speed_accuracy_mms;
  // heading_motion
  output->heading_motion = input->heading_motion;
  // heading_accuracy
  output->heading_accuracy = input->heading_accuracy;
  // position_dop
  output->position_dop = input->position_dop;
  // last_correction_age
  output->last_correction_age = input->last_correction_age;
  // gnss_status
  output->gnss_status = input->gnss_status;
  // status
  output->status = input->status;
  // crc
  output->crc = input->crc;
  return true;
}

oscp_imu_msgs__msg__OscpGnss *
oscp_imu_msgs__msg__OscpGnss__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  oscp_imu_msgs__msg__OscpGnss * msg = (oscp_imu_msgs__msg__OscpGnss *)allocator.allocate(sizeof(oscp_imu_msgs__msg__OscpGnss), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(oscp_imu_msgs__msg__OscpGnss));
  bool success = oscp_imu_msgs__msg__OscpGnss__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
oscp_imu_msgs__msg__OscpGnss__destroy(oscp_imu_msgs__msg__OscpGnss * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    oscp_imu_msgs__msg__OscpGnss__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
oscp_imu_msgs__msg__OscpGnss__Sequence__init(oscp_imu_msgs__msg__OscpGnss__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  oscp_imu_msgs__msg__OscpGnss * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(oscp_imu_msgs__msg__OscpGnss)) {
      return false;
    }
    data = (oscp_imu_msgs__msg__OscpGnss *)allocator.zero_allocate(size, sizeof(oscp_imu_msgs__msg__OscpGnss), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = oscp_imu_msgs__msg__OscpGnss__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        oscp_imu_msgs__msg__OscpGnss__fini(&data[i - 1]);
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
oscp_imu_msgs__msg__OscpGnss__Sequence__fini(oscp_imu_msgs__msg__OscpGnss__Sequence * array)
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
      oscp_imu_msgs__msg__OscpGnss__fini(&array->data[i]);
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

oscp_imu_msgs__msg__OscpGnss__Sequence *
oscp_imu_msgs__msg__OscpGnss__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  oscp_imu_msgs__msg__OscpGnss__Sequence * array = (oscp_imu_msgs__msg__OscpGnss__Sequence *)allocator.allocate(sizeof(oscp_imu_msgs__msg__OscpGnss__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = oscp_imu_msgs__msg__OscpGnss__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
oscp_imu_msgs__msg__OscpGnss__Sequence__destroy(oscp_imu_msgs__msg__OscpGnss__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    oscp_imu_msgs__msg__OscpGnss__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
oscp_imu_msgs__msg__OscpGnss__Sequence__are_equal(const oscp_imu_msgs__msg__OscpGnss__Sequence * lhs, const oscp_imu_msgs__msg__OscpGnss__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!oscp_imu_msgs__msg__OscpGnss__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
oscp_imu_msgs__msg__OscpGnss__Sequence__copy(
  const oscp_imu_msgs__msg__OscpGnss__Sequence * input,
  oscp_imu_msgs__msg__OscpGnss__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(oscp_imu_msgs__msg__OscpGnss)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(oscp_imu_msgs__msg__OscpGnss);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    oscp_imu_msgs__msg__OscpGnss * data =
      (oscp_imu_msgs__msg__OscpGnss *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!oscp_imu_msgs__msg__OscpGnss__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          oscp_imu_msgs__msg__OscpGnss__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!oscp_imu_msgs__msg__OscpGnss__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
