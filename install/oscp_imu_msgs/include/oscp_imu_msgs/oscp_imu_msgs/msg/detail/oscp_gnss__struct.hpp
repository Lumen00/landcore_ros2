// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from oscp_imu_msgs:msg/OscpGnss.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "oscp_imu_msgs/msg/oscp_gnss.hpp"


#ifndef OSCP_IMU_MSGS__MSG__DETAIL__OSCP_GNSS__STRUCT_HPP_
#define OSCP_IMU_MSGS__MSG__DETAIL__OSCP_GNSS__STRUCT_HPP_

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
# define DEPRECATED__oscp_imu_msgs__msg__OscpGnss __attribute__((deprecated))
#else
# define DEPRECATED__oscp_imu_msgs__msg__OscpGnss __declspec(deprecated)
#endif

namespace oscp_imu_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OscpGnss_
{
  using Type = OscpGnss_<ContainerAllocator>;

  explicit OscpGnss_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_byte = 0;
      this->counter = 0;
      this->timestamp_ms = 0ull;
      this->fix_type = 0;
      this->num_satellites = 0;
      this->longitude = 0.0f;
      this->latitude = 0.0f;
      this->height_mm = 0l;
      this->h_accuracy_mm = 0ul;
      this->v_accuracy_mm = 0ul;
      this->vel_north_mms = 0l;
      this->vel_east_mms = 0l;
      this->vel_down_mms = 0l;
      this->speed_accuracy_mms = 0ul;
      this->heading_motion = 0.0f;
      this->heading_accuracy = 0.0f;
      this->position_dop = 0.0f;
      this->last_correction_age = 0;
      this->gnss_status = 0;
      this->status = 0;
      this->crc = 0;
    }
  }

  explicit OscpGnss_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_byte = 0;
      this->counter = 0;
      this->timestamp_ms = 0ull;
      this->fix_type = 0;
      this->num_satellites = 0;
      this->longitude = 0.0f;
      this->latitude = 0.0f;
      this->height_mm = 0l;
      this->h_accuracy_mm = 0ul;
      this->v_accuracy_mm = 0ul;
      this->vel_north_mms = 0l;
      this->vel_east_mms = 0l;
      this->vel_down_mms = 0l;
      this->speed_accuracy_mms = 0ul;
      this->heading_motion = 0.0f;
      this->heading_accuracy = 0.0f;
      this->position_dop = 0.0f;
      this->last_correction_age = 0;
      this->gnss_status = 0;
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
  using _fix_type_type =
    uint8_t;
  _fix_type_type fix_type;
  using _num_satellites_type =
    uint8_t;
  _num_satellites_type num_satellites;
  using _longitude_type =
    float;
  _longitude_type longitude;
  using _latitude_type =
    float;
  _latitude_type latitude;
  using _height_mm_type =
    int32_t;
  _height_mm_type height_mm;
  using _h_accuracy_mm_type =
    uint32_t;
  _h_accuracy_mm_type h_accuracy_mm;
  using _v_accuracy_mm_type =
    uint32_t;
  _v_accuracy_mm_type v_accuracy_mm;
  using _vel_north_mms_type =
    int32_t;
  _vel_north_mms_type vel_north_mms;
  using _vel_east_mms_type =
    int32_t;
  _vel_east_mms_type vel_east_mms;
  using _vel_down_mms_type =
    int32_t;
  _vel_down_mms_type vel_down_mms;
  using _speed_accuracy_mms_type =
    uint32_t;
  _speed_accuracy_mms_type speed_accuracy_mms;
  using _heading_motion_type =
    float;
  _heading_motion_type heading_motion;
  using _heading_accuracy_type =
    float;
  _heading_accuracy_type heading_accuracy;
  using _position_dop_type =
    float;
  _position_dop_type position_dop;
  using _last_correction_age_type =
    uint8_t;
  _last_correction_age_type last_correction_age;
  using _gnss_status_type =
    uint8_t;
  _gnss_status_type gnss_status;
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
  Type & set__fix_type(
    const uint8_t & _arg)
  {
    this->fix_type = _arg;
    return *this;
  }
  Type & set__num_satellites(
    const uint8_t & _arg)
  {
    this->num_satellites = _arg;
    return *this;
  }
  Type & set__longitude(
    const float & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__latitude(
    const float & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__height_mm(
    const int32_t & _arg)
  {
    this->height_mm = _arg;
    return *this;
  }
  Type & set__h_accuracy_mm(
    const uint32_t & _arg)
  {
    this->h_accuracy_mm = _arg;
    return *this;
  }
  Type & set__v_accuracy_mm(
    const uint32_t & _arg)
  {
    this->v_accuracy_mm = _arg;
    return *this;
  }
  Type & set__vel_north_mms(
    const int32_t & _arg)
  {
    this->vel_north_mms = _arg;
    return *this;
  }
  Type & set__vel_east_mms(
    const int32_t & _arg)
  {
    this->vel_east_mms = _arg;
    return *this;
  }
  Type & set__vel_down_mms(
    const int32_t & _arg)
  {
    this->vel_down_mms = _arg;
    return *this;
  }
  Type & set__speed_accuracy_mms(
    const uint32_t & _arg)
  {
    this->speed_accuracy_mms = _arg;
    return *this;
  }
  Type & set__heading_motion(
    const float & _arg)
  {
    this->heading_motion = _arg;
    return *this;
  }
  Type & set__heading_accuracy(
    const float & _arg)
  {
    this->heading_accuracy = _arg;
    return *this;
  }
  Type & set__position_dop(
    const float & _arg)
  {
    this->position_dop = _arg;
    return *this;
  }
  Type & set__last_correction_age(
    const uint8_t & _arg)
  {
    this->last_correction_age = _arg;
    return *this;
  }
  Type & set__gnss_status(
    const uint8_t & _arg)
  {
    this->gnss_status = _arg;
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
    oscp_imu_msgs::msg::OscpGnss_<ContainerAllocator> *;
  using ConstRawPtr =
    const oscp_imu_msgs::msg::OscpGnss_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<oscp_imu_msgs::msg::OscpGnss_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<oscp_imu_msgs::msg::OscpGnss_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      oscp_imu_msgs::msg::OscpGnss_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<oscp_imu_msgs::msg::OscpGnss_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      oscp_imu_msgs::msg::OscpGnss_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<oscp_imu_msgs::msg::OscpGnss_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<oscp_imu_msgs::msg::OscpGnss_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<oscp_imu_msgs::msg::OscpGnss_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__oscp_imu_msgs__msg__OscpGnss
    std::shared_ptr<oscp_imu_msgs::msg::OscpGnss_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__oscp_imu_msgs__msg__OscpGnss
    std::shared_ptr<oscp_imu_msgs::msg::OscpGnss_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OscpGnss_ & other) const
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
    if (this->fix_type != other.fix_type) {
      return false;
    }
    if (this->num_satellites != other.num_satellites) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->height_mm != other.height_mm) {
      return false;
    }
    if (this->h_accuracy_mm != other.h_accuracy_mm) {
      return false;
    }
    if (this->v_accuracy_mm != other.v_accuracy_mm) {
      return false;
    }
    if (this->vel_north_mms != other.vel_north_mms) {
      return false;
    }
    if (this->vel_east_mms != other.vel_east_mms) {
      return false;
    }
    if (this->vel_down_mms != other.vel_down_mms) {
      return false;
    }
    if (this->speed_accuracy_mms != other.speed_accuracy_mms) {
      return false;
    }
    if (this->heading_motion != other.heading_motion) {
      return false;
    }
    if (this->heading_accuracy != other.heading_accuracy) {
      return false;
    }
    if (this->position_dop != other.position_dop) {
      return false;
    }
    if (this->last_correction_age != other.last_correction_age) {
      return false;
    }
    if (this->gnss_status != other.gnss_status) {
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
  bool operator!=(const OscpGnss_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OscpGnss_

// alias to use template instance with default allocator
using OscpGnss =
  oscp_imu_msgs::msg::OscpGnss_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace oscp_imu_msgs

#endif  // OSCP_IMU_MSGS__MSG__DETAIL__OSCP_GNSS__STRUCT_HPP_
