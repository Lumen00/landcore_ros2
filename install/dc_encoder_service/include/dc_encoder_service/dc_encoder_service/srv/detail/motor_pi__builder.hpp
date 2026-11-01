// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dc_encoder_service:srv/MotorPI.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dc_encoder_service/srv/motor_pi.hpp"


#ifndef DC_ENCODER_SERVICE__SRV__DETAIL__MOTOR_PI__BUILDER_HPP_
#define DC_ENCODER_SERVICE__SRV__DETAIL__MOTOR_PI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dc_encoder_service/srv/detail/motor_pi__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dc_encoder_service
{

namespace srv
{

namespace builder
{

class Init_MotorPI_Request_speed_cmd_back_right
{
public:
  explicit Init_MotorPI_Request_speed_cmd_back_right(::dc_encoder_service::srv::MotorPI_Request & msg)
  : msg_(msg)
  {}
  ::dc_encoder_service::srv::MotorPI_Request speed_cmd_back_right(::dc_encoder_service::srv::MotorPI_Request::_speed_cmd_back_right_type arg)
  {
    msg_.speed_cmd_back_right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dc_encoder_service::srv::MotorPI_Request msg_;
};

class Init_MotorPI_Request_speed_cmd_back_left
{
public:
  explicit Init_MotorPI_Request_speed_cmd_back_left(::dc_encoder_service::srv::MotorPI_Request & msg)
  : msg_(msg)
  {}
  Init_MotorPI_Request_speed_cmd_back_right speed_cmd_back_left(::dc_encoder_service::srv::MotorPI_Request::_speed_cmd_back_left_type arg)
  {
    msg_.speed_cmd_back_left = std::move(arg);
    return Init_MotorPI_Request_speed_cmd_back_right(msg_);
  }

private:
  ::dc_encoder_service::srv::MotorPI_Request msg_;
};

class Init_MotorPI_Request_speed_cmd_front_right
{
public:
  explicit Init_MotorPI_Request_speed_cmd_front_right(::dc_encoder_service::srv::MotorPI_Request & msg)
  : msg_(msg)
  {}
  Init_MotorPI_Request_speed_cmd_back_left speed_cmd_front_right(::dc_encoder_service::srv::MotorPI_Request::_speed_cmd_front_right_type arg)
  {
    msg_.speed_cmd_front_right = std::move(arg);
    return Init_MotorPI_Request_speed_cmd_back_left(msg_);
  }

private:
  ::dc_encoder_service::srv::MotorPI_Request msg_;
};

class Init_MotorPI_Request_speed_cmd_front_left
{
public:
  Init_MotorPI_Request_speed_cmd_front_left()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorPI_Request_speed_cmd_front_right speed_cmd_front_left(::dc_encoder_service::srv::MotorPI_Request::_speed_cmd_front_left_type arg)
  {
    msg_.speed_cmd_front_left = std::move(arg);
    return Init_MotorPI_Request_speed_cmd_front_right(msg_);
  }

private:
  ::dc_encoder_service::srv::MotorPI_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dc_encoder_service::srv::MotorPI_Request>()
{
  return dc_encoder_service::srv::builder::Init_MotorPI_Request_speed_cmd_front_left();
}

}  // namespace dc_encoder_service


namespace dc_encoder_service
{

namespace srv
{

namespace builder
{

class Init_MotorPI_Response_speed_back_right
{
public:
  explicit Init_MotorPI_Response_speed_back_right(::dc_encoder_service::srv::MotorPI_Response & msg)
  : msg_(msg)
  {}
  ::dc_encoder_service::srv::MotorPI_Response speed_back_right(::dc_encoder_service::srv::MotorPI_Response::_speed_back_right_type arg)
  {
    msg_.speed_back_right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dc_encoder_service::srv::MotorPI_Response msg_;
};

class Init_MotorPI_Response_speed_back_left
{
public:
  explicit Init_MotorPI_Response_speed_back_left(::dc_encoder_service::srv::MotorPI_Response & msg)
  : msg_(msg)
  {}
  Init_MotorPI_Response_speed_back_right speed_back_left(::dc_encoder_service::srv::MotorPI_Response::_speed_back_left_type arg)
  {
    msg_.speed_back_left = std::move(arg);
    return Init_MotorPI_Response_speed_back_right(msg_);
  }

private:
  ::dc_encoder_service::srv::MotorPI_Response msg_;
};

class Init_MotorPI_Response_speed_front_right
{
public:
  explicit Init_MotorPI_Response_speed_front_right(::dc_encoder_service::srv::MotorPI_Response & msg)
  : msg_(msg)
  {}
  Init_MotorPI_Response_speed_back_left speed_front_right(::dc_encoder_service::srv::MotorPI_Response::_speed_front_right_type arg)
  {
    msg_.speed_front_right = std::move(arg);
    return Init_MotorPI_Response_speed_back_left(msg_);
  }

private:
  ::dc_encoder_service::srv::MotorPI_Response msg_;
};

class Init_MotorPI_Response_speed_front_left
{
public:
  Init_MotorPI_Response_speed_front_left()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorPI_Response_speed_front_right speed_front_left(::dc_encoder_service::srv::MotorPI_Response::_speed_front_left_type arg)
  {
    msg_.speed_front_left = std::move(arg);
    return Init_MotorPI_Response_speed_front_right(msg_);
  }

private:
  ::dc_encoder_service::srv::MotorPI_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dc_encoder_service::srv::MotorPI_Response>()
{
  return dc_encoder_service::srv::builder::Init_MotorPI_Response_speed_front_left();
}

}  // namespace dc_encoder_service


namespace dc_encoder_service
{

namespace srv
{

namespace builder
{

class Init_MotorPI_Event_response
{
public:
  explicit Init_MotorPI_Event_response(::dc_encoder_service::srv::MotorPI_Event & msg)
  : msg_(msg)
  {}
  ::dc_encoder_service::srv::MotorPI_Event response(::dc_encoder_service::srv::MotorPI_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dc_encoder_service::srv::MotorPI_Event msg_;
};

class Init_MotorPI_Event_request
{
public:
  explicit Init_MotorPI_Event_request(::dc_encoder_service::srv::MotorPI_Event & msg)
  : msg_(msg)
  {}
  Init_MotorPI_Event_response request(::dc_encoder_service::srv::MotorPI_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MotorPI_Event_response(msg_);
  }

private:
  ::dc_encoder_service::srv::MotorPI_Event msg_;
};

class Init_MotorPI_Event_info
{
public:
  Init_MotorPI_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorPI_Event_request info(::dc_encoder_service::srv::MotorPI_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MotorPI_Event_request(msg_);
  }

private:
  ::dc_encoder_service::srv::MotorPI_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dc_encoder_service::srv::MotorPI_Event>()
{
  return dc_encoder_service::srv::builder::Init_MotorPI_Event_info();
}

}  // namespace dc_encoder_service

#endif  // DC_ENCODER_SERVICE__SRV__DETAIL__MOTOR_PI__BUILDER_HPP_
