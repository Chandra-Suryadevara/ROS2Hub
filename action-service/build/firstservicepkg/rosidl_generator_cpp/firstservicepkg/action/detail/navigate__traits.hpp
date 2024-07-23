// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from firstservicepkg:action/Navigate.idl
// generated code does not contain a copyright notice

#ifndef FIRSTSERVICEPKG__ACTION__DETAIL__NAVIGATE__TRAITS_HPP_
#define FIRSTSERVICEPKG__ACTION__DETAIL__NAVIGATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "firstservicepkg/action/detail/navigate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'goal_point'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace firstservicepkg
{

namespace action
{

inline void to_flow_style_yaml(
  const Navigate_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_point
  {
    out << "goal_point: ";
    to_flow_style_yaml(msg.goal_point, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Navigate_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_point:\n";
    to_block_style_yaml(msg.goal_point, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Navigate_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace firstservicepkg

namespace rosidl_generator_traits
{

[[deprecated("use firstservicepkg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const firstservicepkg::action::Navigate_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  firstservicepkg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use firstservicepkg::action::to_yaml() instead")]]
inline std::string to_yaml(const firstservicepkg::action::Navigate_Goal & msg)
{
  return firstservicepkg::action::to_yaml(msg);
}

template<>
inline const char * data_type<firstservicepkg::action::Navigate_Goal>()
{
  return "firstservicepkg::action::Navigate_Goal";
}

template<>
inline const char * name<firstservicepkg::action::Navigate_Goal>()
{
  return "firstservicepkg/action/Navigate_Goal";
}

template<>
struct has_fixed_size<firstservicepkg::action::Navigate_Goal>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<firstservicepkg::action::Navigate_Goal>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<firstservicepkg::action::Navigate_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace firstservicepkg
{

namespace action
{

inline void to_flow_style_yaml(
  const Navigate_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: time_taken
  {
    out << "time_taken: ";
    rosidl_generator_traits::value_to_yaml(msg.time_taken, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Navigate_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time_taken
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_taken: ";
    rosidl_generator_traits::value_to_yaml(msg.time_taken, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Navigate_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace firstservicepkg

namespace rosidl_generator_traits
{

[[deprecated("use firstservicepkg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const firstservicepkg::action::Navigate_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  firstservicepkg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use firstservicepkg::action::to_yaml() instead")]]
inline std::string to_yaml(const firstservicepkg::action::Navigate_Result & msg)
{
  return firstservicepkg::action::to_yaml(msg);
}

template<>
inline const char * data_type<firstservicepkg::action::Navigate_Result>()
{
  return "firstservicepkg::action::Navigate_Result";
}

template<>
inline const char * name<firstservicepkg::action::Navigate_Result>()
{
  return "firstservicepkg/action/Navigate_Result";
}

template<>
struct has_fixed_size<firstservicepkg::action::Navigate_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<firstservicepkg::action::Navigate_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<firstservicepkg::action::Navigate_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace firstservicepkg
{

namespace action
{

inline void to_flow_style_yaml(
  const Navigate_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance_to_point
  {
    out << "distance_to_point: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_point, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Navigate_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance_to_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_to_point: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_point, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Navigate_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace firstservicepkg

namespace rosidl_generator_traits
{

[[deprecated("use firstservicepkg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const firstservicepkg::action::Navigate_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  firstservicepkg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use firstservicepkg::action::to_yaml() instead")]]
inline std::string to_yaml(const firstservicepkg::action::Navigate_Feedback & msg)
{
  return firstservicepkg::action::to_yaml(msg);
}

template<>
inline const char * data_type<firstservicepkg::action::Navigate_Feedback>()
{
  return "firstservicepkg::action::Navigate_Feedback";
}

template<>
inline const char * name<firstservicepkg::action::Navigate_Feedback>()
{
  return "firstservicepkg/action/Navigate_Feedback";
}

template<>
struct has_fixed_size<firstservicepkg::action::Navigate_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<firstservicepkg::action::Navigate_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<firstservicepkg::action::Navigate_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "firstservicepkg/action/detail/navigate__traits.hpp"

namespace firstservicepkg
{

namespace action
{

inline void to_flow_style_yaml(
  const Navigate_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Navigate_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Navigate_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace firstservicepkg

namespace rosidl_generator_traits
{

[[deprecated("use firstservicepkg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const firstservicepkg::action::Navigate_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  firstservicepkg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use firstservicepkg::action::to_yaml() instead")]]
inline std::string to_yaml(const firstservicepkg::action::Navigate_SendGoal_Request & msg)
{
  return firstservicepkg::action::to_yaml(msg);
}

template<>
inline const char * data_type<firstservicepkg::action::Navigate_SendGoal_Request>()
{
  return "firstservicepkg::action::Navigate_SendGoal_Request";
}

template<>
inline const char * name<firstservicepkg::action::Navigate_SendGoal_Request>()
{
  return "firstservicepkg/action/Navigate_SendGoal_Request";
}

template<>
struct has_fixed_size<firstservicepkg::action::Navigate_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<firstservicepkg::action::Navigate_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<firstservicepkg::action::Navigate_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<firstservicepkg::action::Navigate_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<firstservicepkg::action::Navigate_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace firstservicepkg
{

namespace action
{

inline void to_flow_style_yaml(
  const Navigate_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Navigate_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Navigate_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace firstservicepkg

namespace rosidl_generator_traits
{

[[deprecated("use firstservicepkg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const firstservicepkg::action::Navigate_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  firstservicepkg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use firstservicepkg::action::to_yaml() instead")]]
inline std::string to_yaml(const firstservicepkg::action::Navigate_SendGoal_Response & msg)
{
  return firstservicepkg::action::to_yaml(msg);
}

template<>
inline const char * data_type<firstservicepkg::action::Navigate_SendGoal_Response>()
{
  return "firstservicepkg::action::Navigate_SendGoal_Response";
}

template<>
inline const char * name<firstservicepkg::action::Navigate_SendGoal_Response>()
{
  return "firstservicepkg/action/Navigate_SendGoal_Response";
}

template<>
struct has_fixed_size<firstservicepkg::action::Navigate_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<firstservicepkg::action::Navigate_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<firstservicepkg::action::Navigate_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<firstservicepkg::action::Navigate_SendGoal>()
{
  return "firstservicepkg::action::Navigate_SendGoal";
}

template<>
inline const char * name<firstservicepkg::action::Navigate_SendGoal>()
{
  return "firstservicepkg/action/Navigate_SendGoal";
}

template<>
struct has_fixed_size<firstservicepkg::action::Navigate_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<firstservicepkg::action::Navigate_SendGoal_Request>::value &&
    has_fixed_size<firstservicepkg::action::Navigate_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<firstservicepkg::action::Navigate_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<firstservicepkg::action::Navigate_SendGoal_Request>::value &&
    has_bounded_size<firstservicepkg::action::Navigate_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<firstservicepkg::action::Navigate_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<firstservicepkg::action::Navigate_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<firstservicepkg::action::Navigate_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace firstservicepkg
{

namespace action
{

inline void to_flow_style_yaml(
  const Navigate_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Navigate_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Navigate_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace firstservicepkg

namespace rosidl_generator_traits
{

[[deprecated("use firstservicepkg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const firstservicepkg::action::Navigate_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  firstservicepkg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use firstservicepkg::action::to_yaml() instead")]]
inline std::string to_yaml(const firstservicepkg::action::Navigate_GetResult_Request & msg)
{
  return firstservicepkg::action::to_yaml(msg);
}

template<>
inline const char * data_type<firstservicepkg::action::Navigate_GetResult_Request>()
{
  return "firstservicepkg::action::Navigate_GetResult_Request";
}

template<>
inline const char * name<firstservicepkg::action::Navigate_GetResult_Request>()
{
  return "firstservicepkg/action/Navigate_GetResult_Request";
}

template<>
struct has_fixed_size<firstservicepkg::action::Navigate_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<firstservicepkg::action::Navigate_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<firstservicepkg::action::Navigate_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "firstservicepkg/action/detail/navigate__traits.hpp"

namespace firstservicepkg
{

namespace action
{

inline void to_flow_style_yaml(
  const Navigate_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Navigate_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Navigate_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace firstservicepkg

namespace rosidl_generator_traits
{

[[deprecated("use firstservicepkg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const firstservicepkg::action::Navigate_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  firstservicepkg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use firstservicepkg::action::to_yaml() instead")]]
inline std::string to_yaml(const firstservicepkg::action::Navigate_GetResult_Response & msg)
{
  return firstservicepkg::action::to_yaml(msg);
}

template<>
inline const char * data_type<firstservicepkg::action::Navigate_GetResult_Response>()
{
  return "firstservicepkg::action::Navigate_GetResult_Response";
}

template<>
inline const char * name<firstservicepkg::action::Navigate_GetResult_Response>()
{
  return "firstservicepkg/action/Navigate_GetResult_Response";
}

template<>
struct has_fixed_size<firstservicepkg::action::Navigate_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<firstservicepkg::action::Navigate_Result>::value> {};

template<>
struct has_bounded_size<firstservicepkg::action::Navigate_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<firstservicepkg::action::Navigate_Result>::value> {};

template<>
struct is_message<firstservicepkg::action::Navigate_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<firstservicepkg::action::Navigate_GetResult>()
{
  return "firstservicepkg::action::Navigate_GetResult";
}

template<>
inline const char * name<firstservicepkg::action::Navigate_GetResult>()
{
  return "firstservicepkg/action/Navigate_GetResult";
}

template<>
struct has_fixed_size<firstservicepkg::action::Navigate_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<firstservicepkg::action::Navigate_GetResult_Request>::value &&
    has_fixed_size<firstservicepkg::action::Navigate_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<firstservicepkg::action::Navigate_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<firstservicepkg::action::Navigate_GetResult_Request>::value &&
    has_bounded_size<firstservicepkg::action::Navigate_GetResult_Response>::value
  >
{
};

template<>
struct is_service<firstservicepkg::action::Navigate_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<firstservicepkg::action::Navigate_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<firstservicepkg::action::Navigate_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "firstservicepkg/action/detail/navigate__traits.hpp"

namespace firstservicepkg
{

namespace action
{

inline void to_flow_style_yaml(
  const Navigate_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Navigate_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Navigate_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace firstservicepkg

namespace rosidl_generator_traits
{

[[deprecated("use firstservicepkg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const firstservicepkg::action::Navigate_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  firstservicepkg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use firstservicepkg::action::to_yaml() instead")]]
inline std::string to_yaml(const firstservicepkg::action::Navigate_FeedbackMessage & msg)
{
  return firstservicepkg::action::to_yaml(msg);
}

template<>
inline const char * data_type<firstservicepkg::action::Navigate_FeedbackMessage>()
{
  return "firstservicepkg::action::Navigate_FeedbackMessage";
}

template<>
inline const char * name<firstservicepkg::action::Navigate_FeedbackMessage>()
{
  return "firstservicepkg/action/Navigate_FeedbackMessage";
}

template<>
struct has_fixed_size<firstservicepkg::action::Navigate_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<firstservicepkg::action::Navigate_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<firstservicepkg::action::Navigate_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<firstservicepkg::action::Navigate_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<firstservicepkg::action::Navigate_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<firstservicepkg::action::Navigate>
  : std::true_type
{
};

template<>
struct is_action_goal<firstservicepkg::action::Navigate_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<firstservicepkg::action::Navigate_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<firstservicepkg::action::Navigate_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // FIRSTSERVICEPKG__ACTION__DETAIL__NAVIGATE__TRAITS_HPP_