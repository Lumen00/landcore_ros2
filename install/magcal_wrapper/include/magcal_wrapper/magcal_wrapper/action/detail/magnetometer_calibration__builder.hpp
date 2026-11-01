// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from magcal_wrapper:action/MagnetometerCalibration.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "magcal_wrapper/action/magnetometer_calibration.hpp"


#ifndef MAGCAL_WRAPPER__ACTION__DETAIL__MAGNETOMETER_CALIBRATION__BUILDER_HPP_
#define MAGCAL_WRAPPER__ACTION__DETAIL__MAGNETOMETER_CALIBRATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "magcal_wrapper/action/detail/magnetometer_calibration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace magcal_wrapper
{

namespace action
{

namespace builder
{

class Init_MagnetometerCalibration_Goal_start
{
public:
  Init_MagnetometerCalibration_Goal_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::magcal_wrapper::action::MagnetometerCalibration_Goal start(::magcal_wrapper::action::MagnetometerCalibration_Goal::_start_type arg)
  {
    msg_.start = std::move(arg);
    return std::move(msg_);
  }

private:
  ::magcal_wrapper::action::MagnetometerCalibration_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::magcal_wrapper::action::MagnetometerCalibration_Goal>()
{
  return magcal_wrapper::action::builder::Init_MagnetometerCalibration_Goal_start();
}

}  // namespace magcal_wrapper


namespace magcal_wrapper
{

namespace action
{

namespace builder
{

class Init_MagnetometerCalibration_Result_fit_error
{
public:
  explicit Init_MagnetometerCalibration_Result_fit_error(::magcal_wrapper::action::MagnetometerCalibration_Result & msg)
  : msg_(msg)
  {}
  ::magcal_wrapper::action::MagnetometerCalibration_Result fit_error(::magcal_wrapper::action::MagnetometerCalibration_Result::_fit_error_type arg)
  {
    msg_.fit_error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::magcal_wrapper::action::MagnetometerCalibration_Result msg_;
};

class Init_MagnetometerCalibration_Result_soft_iron
{
public:
  explicit Init_MagnetometerCalibration_Result_soft_iron(::magcal_wrapper::action::MagnetometerCalibration_Result & msg)
  : msg_(msg)
  {}
  Init_MagnetometerCalibration_Result_fit_error soft_iron(::magcal_wrapper::action::MagnetometerCalibration_Result::_soft_iron_type arg)
  {
    msg_.soft_iron = std::move(arg);
    return Init_MagnetometerCalibration_Result_fit_error(msg_);
  }

private:
  ::magcal_wrapper::action::MagnetometerCalibration_Result msg_;
};

class Init_MagnetometerCalibration_Result_hard_iron_z
{
public:
  explicit Init_MagnetometerCalibration_Result_hard_iron_z(::magcal_wrapper::action::MagnetometerCalibration_Result & msg)
  : msg_(msg)
  {}
  Init_MagnetometerCalibration_Result_soft_iron hard_iron_z(::magcal_wrapper::action::MagnetometerCalibration_Result::_hard_iron_z_type arg)
  {
    msg_.hard_iron_z = std::move(arg);
    return Init_MagnetometerCalibration_Result_soft_iron(msg_);
  }

private:
  ::magcal_wrapper::action::MagnetometerCalibration_Result msg_;
};

class Init_MagnetometerCalibration_Result_hard_iron_y
{
public:
  explicit Init_MagnetometerCalibration_Result_hard_iron_y(::magcal_wrapper::action::MagnetometerCalibration_Result & msg)
  : msg_(msg)
  {}
  Init_MagnetometerCalibration_Result_hard_iron_z hard_iron_y(::magcal_wrapper::action::MagnetometerCalibration_Result::_hard_iron_y_type arg)
  {
    msg_.hard_iron_y = std::move(arg);
    return Init_MagnetometerCalibration_Result_hard_iron_z(msg_);
  }

private:
  ::magcal_wrapper::action::MagnetometerCalibration_Result msg_;
};

class Init_MagnetometerCalibration_Result_hard_iron_x
{
public:
  explicit Init_MagnetometerCalibration_Result_hard_iron_x(::magcal_wrapper::action::MagnetometerCalibration_Result & msg)
  : msg_(msg)
  {}
  Init_MagnetometerCalibration_Result_hard_iron_y hard_iron_x(::magcal_wrapper::action::MagnetometerCalibration_Result::_hard_iron_x_type arg)
  {
    msg_.hard_iron_x = std::move(arg);
    return Init_MagnetometerCalibration_Result_hard_iron_y(msg_);
  }

private:
  ::magcal_wrapper::action::MagnetometerCalibration_Result msg_;
};

class Init_MagnetometerCalibration_Result_success
{
public:
  Init_MagnetometerCalibration_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MagnetometerCalibration_Result_hard_iron_x success(::magcal_wrapper::action::MagnetometerCalibration_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MagnetometerCalibration_Result_hard_iron_x(msg_);
  }

private:
  ::magcal_wrapper::action::MagnetometerCalibration_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::magcal_wrapper::action::MagnetometerCalibration_Result>()
{
  return magcal_wrapper::action::builder::Init_MagnetometerCalibration_Result_success();
}

}  // namespace magcal_wrapper


namespace magcal_wrapper
{

namespace action
{

namespace builder
{

class Init_MagnetometerCalibration_Feedback_status
{
public:
  explicit Init_MagnetometerCalibration_Feedback_status(::magcal_wrapper::action::MagnetometerCalibration_Feedback & msg)
  : msg_(msg)
  {}
  ::magcal_wrapper::action::MagnetometerCalibration_Feedback status(::magcal_wrapper::action::MagnetometerCalibration_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::magcal_wrapper::action::MagnetometerCalibration_Feedback msg_;
};

class Init_MagnetometerCalibration_Feedback_progress
{
public:
  Init_MagnetometerCalibration_Feedback_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MagnetometerCalibration_Feedback_status progress(::magcal_wrapper::action::MagnetometerCalibration_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return Init_MagnetometerCalibration_Feedback_status(msg_);
  }

private:
  ::magcal_wrapper::action::MagnetometerCalibration_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::magcal_wrapper::action::MagnetometerCalibration_Feedback>()
{
  return magcal_wrapper::action::builder::Init_MagnetometerCalibration_Feedback_progress();
}

}  // namespace magcal_wrapper


namespace magcal_wrapper
{

namespace action
{

namespace builder
{

class Init_MagnetometerCalibration_SendGoal_Request_goal
{
public:
  explicit Init_MagnetometerCalibration_SendGoal_Request_goal(::magcal_wrapper::action::MagnetometerCalibration_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::magcal_wrapper::action::MagnetometerCalibration_SendGoal_Request goal(::magcal_wrapper::action::MagnetometerCalibration_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::magcal_wrapper::action::MagnetometerCalibration_SendGoal_Request msg_;
};

class Init_MagnetometerCalibration_SendGoal_Request_goal_id
{
public:
  Init_MagnetometerCalibration_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MagnetometerCalibration_SendGoal_Request_goal goal_id(::magcal_wrapper::action::MagnetometerCalibration_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MagnetometerCalibration_SendGoal_Request_goal(msg_);
  }

private:
  ::magcal_wrapper::action::MagnetometerCalibration_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::magcal_wrapper::action::MagnetometerCalibration_SendGoal_Request>()
{
  return magcal_wrapper::action::builder::Init_MagnetometerCalibration_SendGoal_Request_goal_id();
}

}  // namespace magcal_wrapper


namespace magcal_wrapper
{

namespace action
{

namespace builder
{

class Init_MagnetometerCalibration_SendGoal_Response_stamp
{
public:
  explicit Init_MagnetometerCalibration_SendGoal_Response_stamp(::magcal_wrapper::action::MagnetometerCalibration_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::magcal_wrapper::action::MagnetometerCalibration_SendGoal_Response stamp(::magcal_wrapper::action::MagnetometerCalibration_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::magcal_wrapper::action::MagnetometerCalibration_SendGoal_Response msg_;
};

class Init_MagnetometerCalibration_SendGoal_Response_accepted
{
public:
  Init_MagnetometerCalibration_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MagnetometerCalibration_SendGoal_Response_stamp accepted(::magcal_wrapper::action::MagnetometerCalibration_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MagnetometerCalibration_SendGoal_Response_stamp(msg_);
  }

private:
  ::magcal_wrapper::action::MagnetometerCalibration_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::magcal_wrapper::action::MagnetometerCalibration_SendGoal_Response>()
{
  return magcal_wrapper::action::builder::Init_MagnetometerCalibration_SendGoal_Response_accepted();
}

}  // namespace magcal_wrapper


namespace magcal_wrapper
{

namespace action
{

namespace builder
{

class Init_MagnetometerCalibration_SendGoal_Event_response
{
public:
  explicit Init_MagnetometerCalibration_SendGoal_Event_response(::magcal_wrapper::action::MagnetometerCalibration_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::magcal_wrapper::action::MagnetometerCalibration_SendGoal_Event response(::magcal_wrapper::action::MagnetometerCalibration_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::magcal_wrapper::action::MagnetometerCalibration_SendGoal_Event msg_;
};

class Init_MagnetometerCalibration_SendGoal_Event_request
{
public:
  explicit Init_MagnetometerCalibration_SendGoal_Event_request(::magcal_wrapper::action::MagnetometerCalibration_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_MagnetometerCalibration_SendGoal_Event_response request(::magcal_wrapper::action::MagnetometerCalibration_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MagnetometerCalibration_SendGoal_Event_response(msg_);
  }

private:
  ::magcal_wrapper::action::MagnetometerCalibration_SendGoal_Event msg_;
};

class Init_MagnetometerCalibration_SendGoal_Event_info
{
public:
  Init_MagnetometerCalibration_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MagnetometerCalibration_SendGoal_Event_request info(::magcal_wrapper::action::MagnetometerCalibration_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MagnetometerCalibration_SendGoal_Event_request(msg_);
  }

private:
  ::magcal_wrapper::action::MagnetometerCalibration_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::magcal_wrapper::action::MagnetometerCalibration_SendGoal_Event>()
{
  return magcal_wrapper::action::builder::Init_MagnetometerCalibration_SendGoal_Event_info();
}

}  // namespace magcal_wrapper


namespace magcal_wrapper
{

namespace action
{

namespace builder
{

class Init_MagnetometerCalibration_GetResult_Request_goal_id
{
public:
  Init_MagnetometerCalibration_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::magcal_wrapper::action::MagnetometerCalibration_GetResult_Request goal_id(::magcal_wrapper::action::MagnetometerCalibration_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::magcal_wrapper::action::MagnetometerCalibration_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::magcal_wrapper::action::MagnetometerCalibration_GetResult_Request>()
{
  return magcal_wrapper::action::builder::Init_MagnetometerCalibration_GetResult_Request_goal_id();
}

}  // namespace magcal_wrapper


namespace magcal_wrapper
{

namespace action
{

namespace builder
{

class Init_MagnetometerCalibration_GetResult_Response_result
{
public:
  explicit Init_MagnetometerCalibration_GetResult_Response_result(::magcal_wrapper::action::MagnetometerCalibration_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::magcal_wrapper::action::MagnetometerCalibration_GetResult_Response result(::magcal_wrapper::action::MagnetometerCalibration_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::magcal_wrapper::action::MagnetometerCalibration_GetResult_Response msg_;
};

class Init_MagnetometerCalibration_GetResult_Response_status
{
public:
  Init_MagnetometerCalibration_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MagnetometerCalibration_GetResult_Response_result status(::magcal_wrapper::action::MagnetometerCalibration_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MagnetometerCalibration_GetResult_Response_result(msg_);
  }

private:
  ::magcal_wrapper::action::MagnetometerCalibration_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::magcal_wrapper::action::MagnetometerCalibration_GetResult_Response>()
{
  return magcal_wrapper::action::builder::Init_MagnetometerCalibration_GetResult_Response_status();
}

}  // namespace magcal_wrapper


namespace magcal_wrapper
{

namespace action
{

namespace builder
{

class Init_MagnetometerCalibration_GetResult_Event_response
{
public:
  explicit Init_MagnetometerCalibration_GetResult_Event_response(::magcal_wrapper::action::MagnetometerCalibration_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::magcal_wrapper::action::MagnetometerCalibration_GetResult_Event response(::magcal_wrapper::action::MagnetometerCalibration_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::magcal_wrapper::action::MagnetometerCalibration_GetResult_Event msg_;
};

class Init_MagnetometerCalibration_GetResult_Event_request
{
public:
  explicit Init_MagnetometerCalibration_GetResult_Event_request(::magcal_wrapper::action::MagnetometerCalibration_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_MagnetometerCalibration_GetResult_Event_response request(::magcal_wrapper::action::MagnetometerCalibration_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MagnetometerCalibration_GetResult_Event_response(msg_);
  }

private:
  ::magcal_wrapper::action::MagnetometerCalibration_GetResult_Event msg_;
};

class Init_MagnetometerCalibration_GetResult_Event_info
{
public:
  Init_MagnetometerCalibration_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MagnetometerCalibration_GetResult_Event_request info(::magcal_wrapper::action::MagnetometerCalibration_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MagnetometerCalibration_GetResult_Event_request(msg_);
  }

private:
  ::magcal_wrapper::action::MagnetometerCalibration_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::magcal_wrapper::action::MagnetometerCalibration_GetResult_Event>()
{
  return magcal_wrapper::action::builder::Init_MagnetometerCalibration_GetResult_Event_info();
}

}  // namespace magcal_wrapper


namespace magcal_wrapper
{

namespace action
{

namespace builder
{

class Init_MagnetometerCalibration_FeedbackMessage_feedback
{
public:
  explicit Init_MagnetometerCalibration_FeedbackMessage_feedback(::magcal_wrapper::action::MagnetometerCalibration_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::magcal_wrapper::action::MagnetometerCalibration_FeedbackMessage feedback(::magcal_wrapper::action::MagnetometerCalibration_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::magcal_wrapper::action::MagnetometerCalibration_FeedbackMessage msg_;
};

class Init_MagnetometerCalibration_FeedbackMessage_goal_id
{
public:
  Init_MagnetometerCalibration_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MagnetometerCalibration_FeedbackMessage_feedback goal_id(::magcal_wrapper::action::MagnetometerCalibration_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MagnetometerCalibration_FeedbackMessage_feedback(msg_);
  }

private:
  ::magcal_wrapper::action::MagnetometerCalibration_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::magcal_wrapper::action::MagnetometerCalibration_FeedbackMessage>()
{
  return magcal_wrapper::action::builder::Init_MagnetometerCalibration_FeedbackMessage_goal_id();
}

}  // namespace magcal_wrapper

#endif  // MAGCAL_WRAPPER__ACTION__DETAIL__MAGNETOMETER_CALIBRATION__BUILDER_HPP_
