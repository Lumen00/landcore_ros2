// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from oscp_imu_msgs:msg/OscpQuat.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "oscp_imu_msgs/msg/oscp_quat.hpp"


#ifndef OSCP_IMU_MSGS__MSG__DETAIL__OSCP_QUAT__STRUCT_HPP_
#define OSCP_IMU_MSGS__MSG__DETAIL__OSCP_QUAT__STRUCT_HPP_

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
# define DEPRECATED__oscp_imu_msgs__msg__OscpQuat __attribute__((deprecated))
#else
# define DEPRECATED__oscp_imu_msgs__msg__OscpQuat __declspec(deprecated)
#endif

namespace oscp_imu_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OscpQuat_
{
  using Type = OscpQuat_<ContainerAllocator>;

  explicit OscpQuat_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_byte = 0;
      this->counter = 0;
      this->timestamp_ms = 0ull;
      this->quat_w = 0.0f;
      this->quat_x = 0.0f;
      this->quat_y = 0.0f;
      this->quat_z = 0.0f;
      this->status = 0;
      this->crc = 0;
    }
  }

  explicit OscpQuat_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_byte = 0;
      this->counter = 0;
      this->timestamp_ms = 0ull;
      this->quat_w = 0.0f;
      this->quat_x = 0.0f;
      this->quat_y = 0.0f;
      this->quat_z = 0.0f;
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
  using _quat_w_type =
    float;
  _quat_w_type quat_w;
  using _quat_x_type =
    float;
  _quat_x_type quat_x;
  using _quat_y_type =
    float;
  _quat_y_type quat_y;
  using _quat_z_type =
    float;
  _quat_z_type quat_z;
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
  Type & set__quat_w(
    const float & _arg)
  {
    this->quat_w = _arg;
    return *this;
  }
  Type & set__quat_x(
    const float & _arg)
  {
    this->quat_x = _arg;
    return *this;
  }
  Type & set__quat_y(
    const float & _arg)
  {
    this->quat_y = _arg;
    return *this;
  }
  Type & set__quat_z(
    const float & _arg)
  {
    this->quat_z = _arg;
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
    oscp_imu_msgs::msg::OscpQuat_<ContainerAllocator> *;
  using ConstRawPtr =
    const oscp_imu_msgs::msg::OscpQuat_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<oscp_imu_msgs::msg::OscpQuat_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<oscp_imu_msgs::msg::OscpQuat_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      oscp_imu_msgs::msg::OscpQuat_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<oscp_imu_msgs::msg::OscpQuat_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      oscp_imu_msgs::msg::OscpQuat_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<oscp_imu_msgs::msg::OscpQuat_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<oscp_imu_msgs::msg::OscpQuat_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<oscp_imu_msgs::msg::OscpQuat_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__oscp_imu_msgs__msg__OscpQuat
    std::shared_ptr<oscp_imu_msgs::msg::OscpQuat_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__oscp_imu_msgs__msg__OscpQuat
    std::shared_ptr<oscp_imu_msgs::msg::OscpQuat_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OscpQuat_ & other) const
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
    if (this->quat_w != other.quat_w) {
      return false;
    }
    if (this->quat_x != other.quat_x) {
      return false;
    }
    if (this->quat_y != other.quat_y) {
      return false;
    }
    if (this->quat_z != other.quat_z) {
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
  bool operator!=(const OscpQuat_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OscpQuat_

// alias to use template instance with default allocator
using OscpQuat =
  oscp_imu_msgs::msg::OscpQuat_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace oscp_imu_msgs

#endif  // OSCP_IMU_MSGS__MSG__DETAIL__OSCP_QUAT__STRUCT_HPP_
