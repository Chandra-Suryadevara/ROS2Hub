// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from firstservicepkg:srv/CameraAngle.idl
// generated code does not contain a copyright notice

#ifndef FIRSTSERVICEPKG__SRV__DETAIL__CAMERA_ANGLE__BUILDER_HPP_
#define FIRSTSERVICEPKG__SRV__DETAIL__CAMERA_ANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "firstservicepkg/srv/detail/camera_angle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace firstservicepkg
{

namespace srv
{

namespace builder
{

class Init_CameraAngle_Request_number
{
public:
  Init_CameraAngle_Request_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::firstservicepkg::srv::CameraAngle_Request number(::firstservicepkg::srv::CameraAngle_Request::_number_type arg)
  {
    msg_.number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::firstservicepkg::srv::CameraAngle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::firstservicepkg::srv::CameraAngle_Request>()
{
  return firstservicepkg::srv::builder::Init_CameraAngle_Request_number();
}

}  // namespace firstservicepkg


namespace firstservicepkg
{

namespace srv
{

namespace builder
{

class Init_CameraAngle_Response_camera_image
{
public:
  Init_CameraAngle_Response_camera_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::firstservicepkg::srv::CameraAngle_Response camera_image(::firstservicepkg::srv::CameraAngle_Response::_camera_image_type arg)
  {
    msg_.camera_image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::firstservicepkg::srv::CameraAngle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::firstservicepkg::srv::CameraAngle_Response>()
{
  return firstservicepkg::srv::builder::Init_CameraAngle_Response_camera_image();
}

}  // namespace firstservicepkg

#endif  // FIRSTSERVICEPKG__SRV__DETAIL__CAMERA_ANGLE__BUILDER_HPP_
