// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from oscp_imu_msgs:msg/OscpRaw.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "oscp_imu_msgs/msg/oscp_raw.hpp"


#ifndef OSCP_IMU_MSGS__MSG__DETAIL__OSCP_RAW__STRUCT_HPP_
#define OSCP_IMU_MSGS__MSG__DETAIL__OSCP_RAW__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__oscp_imu_msgs__msg__OscpRaw __attribute__((deprecated))
#else
# define DEPRECATED__oscp_imu_msgs__msg__OscpRaw __declspec(deprecated)
#endif

namespace oscp_imu_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OscpRaw_
{
  using Type = OscpRaw_<ContainerAllocator>;

  explicit OscpRaw_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_byte = 0;
      this->counter = 0;
      this->timestamp_ms = 0ull;
      this->gyro_x = 0.0f;
      this->gyro_y = 0.0f;
      this->gyro_z = 0.0f;
      this->accel_x = 0.0f;
      this->accel_y = 0.0f;
      this->accel_z = 0.0f;
      this->incl_x = 0.0f;
      this->incl_y = 0.0f;
      this->mag_x = 0.0f;
      this->mag_y = 0.0f;
      this->mag_z = 0.0f;
      this->temp = 0.0f;
      this->status = 0;
      this->crc = 0;
    }
  }

  explicit OscpRaw_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_byte = 0;
      this->counter = 0;
      this->timestamp_ms = 0ull;
      this->gyro_x = 0.0f;
      this->gyro_y = 0.0f;
      this->gyro_z = 0.0f;
      this->accel_x = 0.0f;
      this->accel_y = 0.0f;
      this->accel_z = 0.0f;
      this->incl_x = 0.0f;
      this->incl_y = 0.0f;
      this->mag_x = 0.0f;
      this->mag_y = 0.0f;
      this->mag_z = 0.0f;
      this->temp = 0.0f;
      this->status = 0;
      this->crc = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _header_byte_type =
    uint8_t;
  _header_byte_type header_byte;
  using _counter_type =
    uint8_t;
  _counter_type counter;
  using _timestamp_ms_type =
    uint64_t;
  _timestamp_ms_type timestamp_ms;
  using _gyro_x_type =
    float;
  _gyro_x_type gyro_x;
  using _gyro_y_type =
    float;
  _gyro_y_type gyro_y;
  using _gyro_z_type =
    float;
  _gyro_z_type gyro_z;
  using _accel_x_type =
    float;
  _accel_x_type accel_x;
  using _accel_y_type =
    float;
  _accel_y_type accel_y;
  using _accel_z_type =
    float;
  _accel_z_type accel_z;
  using _incl_x_type =
    float;
  _incl_x_type incl_x;
  using _incl_y_type =
    float;
  _incl_y_type incl_y;
  using _mag_x_type =
    float;
  _mag_x_type mag_x;
  using _mag_y_type =
    float;
  _mag_y_type mag_y;
  using _mag_z_type =
    float;
  _mag_z_type mag_z;
  using _temp_type =
    float;
  _temp_type temp;
  using _status_type =
    uint8_t;
  _status_type status;
  using _crc_type =
    uint16_t;
  _crc_type crc;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__header_byte(
    const uint8_t & _arg)
  {
    this->header_byte = _arg;
    return *this;
  }
  Type & set__counter(
    const uint8_t & _arg)
  {
    this->counter = _arg;
    return *this;
  }
  Type & set__timestamp_ms(
    const uint64_t & _arg)
  {
    this->timestamp_ms = _arg;
    return *this;
  }
  Type & set__gyro_x(
    const float & _arg)
  {
    this->gyro_x = _arg;
    return *this;
  }
  Type & set__gyro_y(
    const float & _arg)
  {
    this->gyro_y = _arg;
    return *this;
  }
  Type & set__gyro_z(
    const float & _arg)
  {
    this->gyro_z = _arg;
    return *this;
  }
  Type & set__accel_x(
    const float & _arg)
  {
    this->accel_x = _arg;
    return *this;
  }
  Type & set__accel_y(
    const float & _arg)
  {
    this->accel_y = _arg;
    return *this;
  }
  Type & set__accel_z(
    const float & _arg)
  {
    this->accel_z = _arg;
    return *this;
  }
  Type & set__incl_x(
    const float & _arg)
  {
    this->incl_x = _arg;
    return *this;
  }
  Type & set__incl_y(
    const float & _arg)
  {
    this->incl_y = _arg;
    return *this;
  }
  Type & set__mag_x(
    const float & _arg)
  {
    this->mag_x = _arg;
    return *this;
  }
  Type & set__mag_y(
    const float & _arg)
  {
    this->mag_y = _arg;
    return *this;
  }
  Type & set__mag_z(
    const float & _arg)
  {
    this->mag_z = _arg;
    return *this;
  }
  Type & set__temp(
    const float & _arg)
  {
    this->temp = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__crc(
    const uint16_t & _arg)
  {
    this->crc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    oscp_imu_msgs::msg::OscpRaw_<ContainerAllocator> *;
  using ConstRawPtr =
    const oscp_imu_msgs::msg::OscpRaw_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<oscp_imu_msgs::msg::OscpRaw_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<oscp_imu_msgs::msg::OscpRaw_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      oscp_imu_msgs::msg::OscpRaw_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<oscp_imu_msgs::msg::OscpRaw_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      oscp_imu_msgs::msg::OscpRaw_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<oscp_imu_msgs::msg::OscpRaw_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<oscp_imu_msgs::msg::OscpRaw_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<oscp_imu_msgs::msg::OscpRaw_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__oscp_imu_msgs__msg__OscpRaw
    std::shared_ptr<oscp_imu_msgs::msg::OscpRaw_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__oscp_imu_msgs__msg__OscpRaw
    std::shared_ptr<oscp_imu_msgs::msg::OscpRaw_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OscpRaw_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_byte != other.header_byte) {
      return false;
    }
    if (this->counter != other.counter) {
      return false;
    }
    if (this->timestamp_ms != other.timestamp_ms) {
      return false;
    }
    if (this->gyro_x != other.gyro_x) {
      return false;
    }
    if (this->gyro_y != other.gyro_y) {
      return false;
    }
    if (this->gyro_z != other.gyro_z) {
      return false;
    }
    if (this->accel_x != other.accel_x) {
      return false;
    }
    if (this->accel_y != other.accel_y) {
      return false;
    }
    if (this->accel_z != other.accel_z) {
      return false;
    }
    if (this->incl_x != other.incl_x) {
      return false;
    }
    if (this->incl_y != other.incl_y) {
      return false;
    }
    if (this->mag_x != other.mag_x) {
      return false;
    }
    if (this->mag_y != other.mag_y) {
      return false;
    }
    if (this->mag_z != other.mag_z) {
      return false;
    }
    if (this->temp != other.temp) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->crc != other.crc) {
      return false;
    }
    return true;
  }
  bool operator!=(const OscpRaw_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OscpRaw_

// alias to use template instance with default allocator
using OscpRaw =
  oscp_imu_msgs::msg::OscpRaw_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace oscp_imu_msgs

#endif  // OSCP_IMU_MSGS__MSG__DETAIL__OSCP_RAW__STRUCT_HPP_
