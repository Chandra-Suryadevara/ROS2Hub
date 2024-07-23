// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from firstservicepkg:srv/CameraAngle.idl
// generated code does not contain a copyright notice

#ifndef FIRSTSERVICEPKG__SRV__DETAIL__CAMERA_ANGLE__STRUCT_HPP_
#define FIRSTSERVICEPKG__SRV__DETAIL__CAMERA_ANGLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__firstservicepkg__srv__CameraAngle_Request __attribute__((deprecated))
#else
# define DEPRECATED__firstservicepkg__srv__CameraAngle_Request __declspec(deprecated)
#endif

namespace firstservicepkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CameraAngle_Request_
{
  using Type = CameraAngle_Request_<ContainerAllocator>;

  explicit CameraAngle_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->number = 0.0f;
    }
  }

  explicit CameraAngle_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->number = 0.0f;
    }
  }

  // field types and members
  using _number_type =
    float;
  _number_type number;

  // setters for named parameter idiom
  Type & set__number(
    const float & _arg)
  {
    this->number = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    firstservicepkg::srv::CameraAngle_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const firstservicepkg::srv::CameraAngle_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<firstservicepkg::srv::CameraAngle_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<firstservicepkg::srv::CameraAngle_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      firstservicepkg::srv::CameraAngle_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<firstservicepkg::srv::CameraAngle_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      firstservicepkg::srv::CameraAngle_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<firstservicepkg::srv::CameraAngle_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<firstservicepkg::srv::CameraAngle_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<firstservicepkg::srv::CameraAngle_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__firstservicepkg__srv__CameraAngle_Request
    std::shared_ptr<firstservicepkg::srv::CameraAngle_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__firstservicepkg__srv__CameraAngle_Request
    std::shared_ptr<firstservicepkg::srv::CameraAngle_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraAngle_Request_ & other) const
  {
    if (this->number != other.number) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraAngle_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraAngle_Request_

// alias to use template instance with default allocator
using CameraAngle_Request =
  firstservicepkg::srv::CameraAngle_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace firstservicepkg


// Include directives for member types
// Member 'camera_image'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__firstservicepkg__srv__CameraAngle_Response __attribute__((deprecated))
#else
# define DEPRECATED__firstservicepkg__srv__CameraAngle_Response __declspec(deprecated)
#endif

namespace firstservicepkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CameraAngle_Response_
{
  using Type = CameraAngle_Response_<ContainerAllocator>;

  explicit CameraAngle_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : camera_image(_init)
  {
    (void)_init;
  }

  explicit CameraAngle_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : camera_image(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _camera_image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _camera_image_type camera_image;

  // setters for named parameter idiom
  Type & set__camera_image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->camera_image = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    firstservicepkg::srv::CameraAngle_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const firstservicepkg::srv::CameraAngle_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<firstservicepkg::srv::CameraAngle_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<firstservicepkg::srv::CameraAngle_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      firstservicepkg::srv::CameraAngle_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<firstservicepkg::srv::CameraAngle_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      firstservicepkg::srv::CameraAngle_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<firstservicepkg::srv::CameraAngle_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<firstservicepkg::srv::CameraAngle_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<firstservicepkg::srv::CameraAngle_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__firstservicepkg__srv__CameraAngle_Response
    std::shared_ptr<firstservicepkg::srv::CameraAngle_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__firstservicepkg__srv__CameraAngle_Response
    std::shared_ptr<firstservicepkg::srv::CameraAngle_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraAngle_Response_ & other) const
  {
    if (this->camera_image != other.camera_image) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraAngle_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraAngle_Response_

// alias to use template instance with default allocator
using CameraAngle_Response =
  firstservicepkg::srv::CameraAngle_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace firstservicepkg

namespace firstservicepkg
{

namespace srv
{

struct CameraAngle
{
  using Request = firstservicepkg::srv::CameraAngle_Request;
  using Response = firstservicepkg::srv::CameraAngle_Response;
};

}  // namespace srv

}  // namespace firstservicepkg

#endif  // FIRSTSERVICEPKG__SRV__DETAIL__CAMERA_ANGLE__STRUCT_HPP_