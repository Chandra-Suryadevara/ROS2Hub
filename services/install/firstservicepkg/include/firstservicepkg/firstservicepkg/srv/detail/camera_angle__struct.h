// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from firstservicepkg:srv/CameraAngle.idl
// generated code does not contain a copyright notice

#ifndef FIRSTSERVICEPKG__SRV__DETAIL__CAMERA_ANGLE__STRUCT_H_
#define FIRSTSERVICEPKG__SRV__DETAIL__CAMERA_ANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CameraAngle in the package firstservicepkg.
typedef struct firstservicepkg__srv__CameraAngle_Request
{
  /// REQUEST
  float number;
} firstservicepkg__srv__CameraAngle_Request;

// Struct for a sequence of firstservicepkg__srv__CameraAngle_Request.
typedef struct firstservicepkg__srv__CameraAngle_Request__Sequence
{
  firstservicepkg__srv__CameraAngle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} firstservicepkg__srv__CameraAngle_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'camera_image'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in srv/CameraAngle in the package firstservicepkg.
typedef struct firstservicepkg__srv__CameraAngle_Response
{
  sensor_msgs__msg__Image camera_image;
} firstservicepkg__srv__CameraAngle_Response;

// Struct for a sequence of firstservicepkg__srv__CameraAngle_Response.
typedef struct firstservicepkg__srv__CameraAngle_Response__Sequence
{
  firstservicepkg__srv__CameraAngle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} firstservicepkg__srv__CameraAngle_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FIRSTSERVICEPKG__SRV__DETAIL__CAMERA_ANGLE__STRUCT_H_
