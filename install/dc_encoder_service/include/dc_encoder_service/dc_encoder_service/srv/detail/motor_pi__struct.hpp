// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dc_encoder_service:srv/MotorPI.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dc_encoder_service/srv/motor_pi.hpp"


#ifndef DC_ENCODER_SERVICE__SRV__DETAIL__MOTOR_PI__STRUCT_HPP_
#define DC_ENCODER_SERVICE__SRV__DETAIL__MOTOR_PI__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dc_encoder_service__srv__MotorPI_Request __attribute__((deprecated))
#else
# define DEPRECATED__dc_encoder_service__srv__MotorPI_Request __declspec(deprecated)
#endif

namespace dc_encoder_service
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotorPI_Request_
{
  using Type = MotorPI_Request_<ContainerAllocator>;

  explicit MotorPI_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed_cmd_front_left = 0.0;
      this->speed_cmd_front_right = 0.0;
      this->speed_cmd_back_left = 0.0;
      this->speed_cmd_back_right = 0.0;
    }
  }

  explicit MotorPI_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed_cmd_front_left = 0.0;
      this->speed_cmd_front_right = 0.0;
      this->speed_cmd_back_left = 0.0;
      this->speed_cmd_back_right = 0.0;
    }
  }

  // field types and members
  using _speed_cmd_front_left_type =
    double;
  _speed_cmd_front_left_type speed_cmd_front_left;
  using _speed_cmd_front_right_type =
    double;
  _speed_cmd_front_right_type speed_cmd_front_right;
  using _speed_cmd_back_left_type =
    double;
  _speed_cmd_back_left_type speed_cmd_back_left;
  using _speed_cmd_back_right_type =
    double;
  _speed_cmd_back_right_type speed_cmd_back_right;

  // setters for named parameter idiom
  Type & set__speed_cmd_front_left(
    const double & _arg)
  {
    this->speed_cmd_front_left = _arg;
    return *this;
  }
  Type & set__speed_cmd_front_right(
    const double & _arg)
  {
    this->speed_cmd_front_right = _arg;
    return *this;
  }
  Type & set__speed_cmd_back_left(
    const double & _arg)
  {
    this->speed_cmd_back_left = _arg;
    return *this;
  }
  Type & set__speed_cmd_back_right(
    const double & _arg)
  {
    this->speed_cmd_back_right = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dc_encoder_service::srv::MotorPI_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dc_encoder_service::srv::MotorPI_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dc_encoder_service::srv::MotorPI_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dc_encoder_service::srv::MotorPI_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dc_encoder_service::srv::MotorPI_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dc_encoder_service::srv::MotorPI_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dc_encoder_service::srv::MotorPI_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dc_encoder_service::srv::MotorPI_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dc_encoder_service::srv::MotorPI_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dc_encoder_service::srv::MotorPI_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dc_encoder_service__srv__MotorPI_Request
    std::shared_ptr<dc_encoder_service::srv::MotorPI_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dc_encoder_service__srv__MotorPI_Request
    std::shared_ptr<dc_encoder_service::srv::MotorPI_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorPI_Request_ & other) const
  {
    if (this->speed_cmd_front_left != other.speed_cmd_front_left) {
      return false;
    }
    if (this->speed_cmd_front_right != other.speed_cmd_front_right) {
      return false;
    }
    if (this->speed_cmd_back_left != other.speed_cmd_back_left) {
      return false;
    }
    if (this->speed_cmd_back_right != other.speed_cmd_back_right) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorPI_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorPI_Request_

// alias to use template instance with default allocator
using MotorPI_Request =
  dc_encoder_service::srv::MotorPI_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dc_encoder_service


#ifndef _WIN32
# define DEPRECATED__dc_encoder_service__srv__MotorPI_Response __attribute__((deprecated))
#else
# define DEPRECATED__dc_encoder_service__srv__MotorPI_Response __declspec(deprecated)
#endif

namespace dc_encoder_service
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotorPI_Response_
{
  using Type = MotorPI_Response_<ContainerAllocator>;

  explicit MotorPI_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed_front_left = 0.0;
      this->speed_front_right = 0.0;
      this->speed_back_left = 0.0;
      this->speed_back_right = 0.0;
    }
  }

  explicit MotorPI_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed_front_left = 0.0;
      this->speed_front_right = 0.0;
      this->speed_back_left = 0.0;
      this->speed_back_right = 0.0;
    }
  }

  // field types and members
  using _speed_front_left_type =
    double;
  _speed_front_left_type speed_front_left;
  using _speed_front_right_type =
    double;
  _speed_front_right_type speed_front_right;
  using _speed_back_left_type =
    double;
  _speed_back_left_type speed_back_left;
  using _speed_back_right_type =
    double;
  _speed_back_right_type speed_back_right;

  // setters for named parameter idiom
  Type & set__speed_front_left(
    const double & _arg)
  {
    this->speed_front_left = _arg;
    return *this;
  }
  Type & set__speed_front_right(
    const double & _arg)
  {
    this->speed_front_right = _arg;
    return *this;
  }
  Type & set__speed_back_left(
    const double & _arg)
  {
    this->speed_back_left = _arg;
    return *this;
  }
  Type & set__speed_back_right(
    const double & _arg)
  {
    this->speed_back_right = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dc_encoder_service::srv::MotorPI_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dc_encoder_service::srv::MotorPI_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dc_encoder_service::srv::MotorPI_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dc_encoder_service::srv::MotorPI_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dc_encoder_service::srv::MotorPI_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dc_encoder_service::srv::MotorPI_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dc_encoder_service::srv::MotorPI_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dc_encoder_service::srv::MotorPI_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dc_encoder_service::srv::MotorPI_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dc_encoder_service::srv::MotorPI_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dc_encoder_service__srv__MotorPI_Response
    std::shared_ptr<dc_encoder_service::srv::MotorPI_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dc_encoder_service__srv__MotorPI_Response
    std::shared_ptr<dc_encoder_service::srv::MotorPI_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorPI_Response_ & other) const
  {
    if (this->speed_front_left != other.speed_front_left) {
      return false;
    }
    if (this->speed_front_right != other.speed_front_right) {
      return false;
    }
    if (this->speed_back_left != other.speed_back_left) {
      return false;
    }
    if (this->speed_back_right != other.speed_back_right) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorPI_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorPI_Response_

// alias to use template instance with default allocator
using MotorPI_Response =
  dc_encoder_service::srv::MotorPI_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dc_encoder_service


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dc_encoder_service__srv__MotorPI_Event __attribute__((deprecated))
#else
# define DEPRECATED__dc_encoder_service__srv__MotorPI_Event __declspec(deprecated)
#endif

namespace dc_encoder_service
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotorPI_Event_
{
  using Type = MotorPI_Event_<ContainerAllocator>;

  explicit MotorPI_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit MotorPI_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<dc_encoder_service::srv::MotorPI_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dc_encoder_service::srv::MotorPI_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<dc_encoder_service::srv::MotorPI_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dc_encoder_service::srv::MotorPI_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<dc_encoder_service::srv::MotorPI_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dc_encoder_service::srv::MotorPI_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<dc_encoder_service::srv::MotorPI_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dc_encoder_service::srv::MotorPI_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dc_encoder_service::srv::MotorPI_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const dc_encoder_service::srv::MotorPI_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dc_encoder_service::srv::MotorPI_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dc_encoder_service::srv::MotorPI_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dc_encoder_service::srv::MotorPI_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dc_encoder_service::srv::MotorPI_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dc_encoder_service::srv::MotorPI_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dc_encoder_service::srv::MotorPI_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dc_encoder_service::srv::MotorPI_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dc_encoder_service::srv::MotorPI_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dc_encoder_service__srv__MotorPI_Event
    std::shared_ptr<dc_encoder_service::srv::MotorPI_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dc_encoder_service__srv__MotorPI_Event
    std::shared_ptr<dc_encoder_service::srv::MotorPI_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorPI_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorPI_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorPI_Event_

// alias to use template instance with default allocator
using MotorPI_Event =
  dc_encoder_service::srv::MotorPI_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dc_encoder_service

namespace dc_encoder_service
{

namespace srv
{

struct MotorPI
{
  using Request = dc_encoder_service::srv::MotorPI_Request;
  using Response = dc_encoder_service::srv::MotorPI_Response;
  using Event = dc_encoder_service::srv::MotorPI_Event;
};

}  // namespace srv

}  // namespace dc_encoder_service

#endif  // DC_ENCODER_SERVICE__SRV__DETAIL__MOTOR_PI__STRUCT_HPP_
