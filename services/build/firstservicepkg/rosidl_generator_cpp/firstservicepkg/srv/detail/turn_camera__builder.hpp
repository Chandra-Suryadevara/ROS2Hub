// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from firstservicepkg:srv/TurnCamera.idl
// generated code does not contain a copyright notice

#ifndef FIRSTSERVICEPKG__SRV__DETAIL__TURN_CAMERA__BUILDER_HPP_
#define FIRSTSERVICEPKG__SRV__DETAIL__TURN_CAMERA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "firstservicepkg/srv/detail/turn_camera__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace firstservicepkg
{

namespace srv
{

namespace builder
{

class Init_TurnCamera_Request_degree_turn
{
public:
  Init_TurnCamera_Request_degree_turn()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::firstservicepkg::srv::TurnCamera_Request degree_turn(::firstservicepkg::srv::TurnCamera_Request::_degree_turn_type arg)
  {
    msg_.degree_turn = std::move(arg);
    return std::move(msg_);
  }

private:
  ::firstservicepkg::srv::TurnCamera_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::firstservicepkg::srv::TurnCamera_Request>()
{
  return firstservicepkg::srv::builder::Init_TurnCamera_Request_degree_turn();
}

}  // namespace firstservicepkg


namespace firstservicepkg
{

namespace srv
{

namespace builder
{

class Init_TurnCamera_Response_camera_image
{
public:
  Init_TurnCamera_Response_camera_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::firstservicepkg::srv::TurnCamera_Response camera_image(::firstservicepkg::srv::TurnCamera_Response::_camera_image_type arg)
  {
    msg_.camera_image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::firstservicepkg::srv::TurnCamera_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::firstservicepkg::srv::TurnCamera_Response>()
{
  return firstservicepkg::srv::builder::Init_TurnCamera_Response_camera_image();
}

}  // namespace firstservicepkg

#endif  // FIRSTSERVICEPKG__SRV__DETAIL__TURN_CAMERA__BUILDER_HPP_
