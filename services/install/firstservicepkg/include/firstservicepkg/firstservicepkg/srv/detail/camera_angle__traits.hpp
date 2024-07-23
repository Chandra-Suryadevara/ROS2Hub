// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from firstservicepkg:srv/CameraAngle.idl
// generated code does not contain a copyright notice

#ifndef FIRSTSERVICEPKG__SRV__DETAIL__CAMERA_ANGLE__TRAITS_HPP_
#define FIRSTSERVICEPKG__SRV__DETAIL__CAMERA_ANGLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "firstservicepkg/srv/detail/camera_angle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace firstservicepkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const CameraAngle_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: number
  {
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraAngle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraAngle_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace firstservicepkg

namespace rosidl_generator_traits
{

[[deprecated("use firstservicepkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const firstservicepkg::srv::CameraAngle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  firstservicepkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use firstservicepkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const firstservicepkg::srv::CameraAngle_Request & msg)
{
  return firstservicepkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<firstservicepkg::srv::CameraAngle_Request>()
{
  return "firstservicepkg::srv::CameraAngle_Request";
}

template<>
inline const char * name<firstservicepkg::srv::CameraAngle_Request>()
{
  return "firstservicepkg/srv/CameraAngle_Request";
}

template<>
struct has_fixed_size<firstservicepkg::srv::CameraAngle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<firstservicepkg::srv::CameraAngle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<firstservicepkg::srv::CameraAngle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'camera_image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace firstservicepkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const CameraAngle_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: camera_image
  {
    out << "camera_image: ";
    to_flow_style_yaml(msg.camera_image, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraAngle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: camera_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_image:\n";
    to_block_style_yaml(msg.camera_image, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraAngle_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace firstservicepkg

namespace rosidl_generator_traits
{

[[deprecated("use firstservicepkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const firstservicepkg::srv::CameraAngle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  firstservicepkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use firstservicepkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const firstservicepkg::srv::CameraAngle_Response & msg)
{
  return firstservicepkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<firstservicepkg::srv::CameraAngle_Response>()
{
  return "firstservicepkg::srv::CameraAngle_Response";
}

template<>
inline const char * name<firstservicepkg::srv::CameraAngle_Response>()
{
  return "firstservicepkg/srv/CameraAngle_Response";
}

template<>
struct has_fixed_size<firstservicepkg::srv::CameraAngle_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<firstservicepkg::srv::CameraAngle_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<firstservicepkg::srv::CameraAngle_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<firstservicepkg::srv::CameraAngle>()
{
  return "firstservicepkg::srv::CameraAngle";
}

template<>
inline const char * name<firstservicepkg::srv::CameraAngle>()
{
  return "firstservicepkg/srv/CameraAngle";
}

template<>
struct has_fixed_size<firstservicepkg::srv::CameraAngle>
  : std::integral_constant<
    bool,
    has_fixed_size<firstservicepkg::srv::CameraAngle_Request>::value &&
    has_fixed_size<firstservicepkg::srv::CameraAngle_Response>::value
  >
{
};

template<>
struct has_bounded_size<firstservicepkg::srv::CameraAngle>
  : std::integral_constant<
    bool,
    has_bounded_size<firstservicepkg::srv::CameraAngle_Request>::value &&
    has_bounded_size<firstservicepkg::srv::CameraAngle_Response>::value
  >
{
};

template<>
struct is_service<firstservicepkg::srv::CameraAngle>
  : std::true_type
{
};

template<>
struct is_service_request<firstservicepkg::srv::CameraAngle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<firstservicepkg::srv::CameraAngle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FIRSTSERVICEPKG__SRV__DETAIL__CAMERA_ANGLE__TRAITS_HPP_
