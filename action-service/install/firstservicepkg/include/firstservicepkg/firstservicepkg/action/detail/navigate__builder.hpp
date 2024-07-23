// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from firstservicepkg:action/Navigate.idl
// generated code does not contain a copyright notice

#ifndef FIRSTSERVICEPKG__ACTION__DETAIL__NAVIGATE__BUILDER_HPP_
#define FIRSTSERVICEPKG__ACTION__DETAIL__NAVIGATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "firstservicepkg/action/detail/navigate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace firstservicepkg
{

namespace action
{

namespace builder
{

class Init_Navigate_Goal_goal_point
{
public:
  Init_Navigate_Goal_goal_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::firstservicepkg::action::Navigate_Goal goal_point(::firstservicepkg::action::Navigate_Goal::_goal_point_type arg)
  {
    msg_.goal_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::firstservicepkg::action::Navigate_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::firstservicepkg::action::Navigate_Goal>()
{
  return firstservicepkg::action::builder::Init_Navigate_Goal_goal_point();
}

}  // namespace firstservicepkg


namespace firstservicepkg
{

namespace action
{

namespace builder
{

class Init_Navigate_Result_time_taken
{
public:
  Init_Navigate_Result_time_taken()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::firstservicepkg::action::Navigate_Result time_taken(::firstservicepkg::action::Navigate_Result::_time_taken_type arg)
  {
    msg_.time_taken = std::move(arg);
    return std::move(msg_);
  }

private:
  ::firstservicepkg::action::Navigate_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::firstservicepkg::action::Navigate_Result>()
{
  return firstservicepkg::action::builder::Init_Navigate_Result_time_taken();
}

}  // namespace firstservicepkg


namespace firstservicepkg
{

namespace action
{

namespace builder
{

class Init_Navigate_Feedback_distance_to_point
{
public:
  Init_Navigate_Feedback_distance_to_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::firstservicepkg::action::Navigate_Feedback distance_to_point(::firstservicepkg::action::Navigate_Feedback::_distance_to_point_type arg)
  {
    msg_.distance_to_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::firstservicepkg::action::Navigate_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::firstservicepkg::action::Navigate_Feedback>()
{
  return firstservicepkg::action::builder::Init_Navigate_Feedback_distance_to_point();
}

}  // namespace firstservicepkg


namespace firstservicepkg
{

namespace action
{

namespace builder
{

class Init_Navigate_SendGoal_Request_goal
{
public:
  explicit Init_Navigate_SendGoal_Request_goal(::firstservicepkg::action::Navigate_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::firstservicepkg::action::Navigate_SendGoal_Request goal(::firstservicepkg::action::Navigate_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::firstservicepkg::action::Navigate_SendGoal_Request msg_;
};

class Init_Navigate_SendGoal_Request_goal_id
{
public:
  Init_Navigate_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_SendGoal_Request_goal goal_id(::firstservicepkg::action::Navigate_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Navigate_SendGoal_Request_goal(msg_);
  }

private:
  ::firstservicepkg::action::Navigate_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::firstservicepkg::action::Navigate_SendGoal_Request>()
{
  return firstservicepkg::action::builder::Init_Navigate_SendGoal_Request_goal_id();
}

}  // namespace firstservicepkg


namespace firstservicepkg
{

namespace action
{

namespace builder
{

class Init_Navigate_SendGoal_Response_stamp
{
public:
  explicit Init_Navigate_SendGoal_Response_stamp(::firstservicepkg::action::Navigate_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::firstservicepkg::action::Navigate_SendGoal_Response stamp(::firstservicepkg::action::Navigate_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::firstservicepkg::action::Navigate_SendGoal_Response msg_;
};

class Init_Navigate_SendGoal_Response_accepted
{
public:
  Init_Navigate_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_SendGoal_Response_stamp accepted(::firstservicepkg::action::Navigate_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Navigate_SendGoal_Response_stamp(msg_);
  }

private:
  ::firstservicepkg::action::Navigate_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::firstservicepkg::action::Navigate_SendGoal_Response>()
{
  return firstservicepkg::action::builder::Init_Navigate_SendGoal_Response_accepted();
}

}  // namespace firstservicepkg


namespace firstservicepkg
{

namespace action
{

namespace builder
{

class Init_Navigate_GetResult_Request_goal_id
{
public:
  Init_Navigate_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::firstservicepkg::action::Navigate_GetResult_Request goal_id(::firstservicepkg::action::Navigate_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::firstservicepkg::action::Navigate_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::firstservicepkg::action::Navigate_GetResult_Request>()
{
  return firstservicepkg::action::builder::Init_Navigate_GetResult_Request_goal_id();
}

}  // namespace firstservicepkg


namespace firstservicepkg
{

namespace action
{

namespace builder
{

class Init_Navigate_GetResult_Response_result
{
public:
  explicit Init_Navigate_GetResult_Response_result(::firstservicepkg::action::Navigate_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::firstservicepkg::action::Navigate_GetResult_Response result(::firstservicepkg::action::Navigate_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::firstservicepkg::action::Navigate_GetResult_Response msg_;
};

class Init_Navigate_GetResult_Response_status
{
public:
  Init_Navigate_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_GetResult_Response_result status(::firstservicepkg::action::Navigate_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Navigate_GetResult_Response_result(msg_);
  }

private:
  ::firstservicepkg::action::Navigate_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::firstservicepkg::action::Navigate_GetResult_Response>()
{
  return firstservicepkg::action::builder::Init_Navigate_GetResult_Response_status();
}

}  // namespace firstservicepkg


namespace firstservicepkg
{

namespace action
{

namespace builder
{

class Init_Navigate_FeedbackMessage_feedback
{
public:
  explicit Init_Navigate_FeedbackMessage_feedback(::firstservicepkg::action::Navigate_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::firstservicepkg::action::Navigate_FeedbackMessage feedback(::firstservicepkg::action::Navigate_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::firstservicepkg::action::Navigate_FeedbackMessage msg_;
};

class Init_Navigate_FeedbackMessage_goal_id
{
public:
  Init_Navigate_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_FeedbackMessage_feedback goal_id(::firstservicepkg::action::Navigate_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Navigate_FeedbackMessage_feedback(msg_);
  }

private:
  ::firstservicepkg::action::Navigate_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::firstservicepkg::action::Navigate_FeedbackMessage>()
{
  return firstservicepkg::action::builder::Init_Navigate_FeedbackMessage_goal_id();
}

}  // namespace firstservicepkg

#endif  // FIRSTSERVICEPKG__ACTION__DETAIL__NAVIGATE__BUILDER_HPP_
