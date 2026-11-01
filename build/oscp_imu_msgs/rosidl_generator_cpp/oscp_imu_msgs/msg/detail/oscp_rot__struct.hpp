// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from oscp_imu_msgs:msg/OscpRot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "oscp_imu_msgs/msg/oscp_rot.hpp"


#ifndef OSCP_IMU_MSGS__MSG__DETAIL__OSCP_ROT__STRUCT_HPP_
#define OSCP_IMU_MSGS__MSG__DETAIL__OSCP_ROT__STRUCT_HPP_

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
# define DEPRECATED__oscp_imu_msgs__msg__OscpRot __attribute__((deprecated))
#else
# define DEPRECATED__oscp_imu_msgs__msg__OscpRot __declspec(deprecated)
#endif

namespace oscp_imu_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OscpRot_
{
  using Type = OscpRot_<ContainerAllocator>;

  explicit OscpRot_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_byte = 0;
      this->counter = 0;
      this->timestamp_ms = 0ull;
      std::fill<typename std::array<float, 9>::iterator, float>(this->rotation_matrix.begin(), this->rotation_matrix.end(), 0.0f);
      this->status = 0;
      this->crc = 0;
    }
  }

  explicit OscpRot_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    rotation_matrix(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_byte = 0;
      this->counter = 0;
      this->timestamp_ms = 0ull;
      std::fill<typename std::array<float, 9>::iterator, float>(this->rotation_matrix.begin(), this->rotation_matrix.end(), 0.0f);
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
  using _rotation_matrix_type =
    std::array<float, 9>;
  _rotation_matrix_type rotation_matrix;
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
  Type & set__rotation_matrix(
    const std::array<float, 9> & _arg)
  {
    this->rotation_matrix = _arg;
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
    oscp_imu_msgs::msg::OscpRot_<ContainerAllocator> *;
  using ConstRawPtr =
    const oscp_imu_msgs::msg::OscpRot_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<oscp_imu_msgs::msg::OscpRot_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<oscp_imu_msgs::msg::OscpRot_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      oscp_imu_msgs::msg::OscpRot_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<oscp_imu_msgs::msg::OscpRot_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      oscp_imu_msgs::msg::OscpRot_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<oscp_imu_msgs::msg::OscpRot_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<oscp_imu_msgs::msg::OscpRot_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<oscp_imu_msgs::msg::OscpRot_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__oscp_imu_msgs__msg__OscpRot
    std::shared_ptr<oscp_imu_msgs::msg::OscpRot_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__oscp_imu_msgs__msg__OscpRot
    std::shared_ptr<oscp_imu_msgs::msg::OscpRot_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OscpRot_ & other) const
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
    if (this->rotation_matrix != other.rotation_matrix) {
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
  bool operator!=(const OscpRot_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OscpRot_

// alias to use template instance with default allocator
using OscpRot =
  oscp_imu_msgs::msg::OscpRot_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace oscp_imu_msgs

#endif  // OSCP_IMU_MSGS__MSG__DETAIL__OSCP_ROT__STRUCT_HPP_
