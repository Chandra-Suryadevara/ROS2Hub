// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from firstservicepkg:srv/CameraAngle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "firstservicepkg/srv/detail/camera_angle__rosidl_typesupport_introspection_c.h"
#include "firstservicepkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "firstservicepkg/srv/detail/camera_angle__functions.h"
#include "firstservicepkg/srv/detail/camera_angle__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void firstservicepkg__srv__CameraAngle_Request__rosidl_typesupport_introspection_c__CameraAngle_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  firstservicepkg__srv__CameraAngle_Request__init(message_memory);
}

void firstservicepkg__srv__CameraAngle_Request__rosidl_typesupport_introspection_c__CameraAngle_Request_fini_function(void * message_memory)
{
  firstservicepkg__srv__CameraAngle_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember firstservicepkg__srv__CameraAngle_Request__rosidl_typesupport_introspection_c__CameraAngle_Request_message_member_array[1] = {
  {
    "number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(firstservicepkg__srv__CameraAngle_Request, number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers firstservicepkg__srv__CameraAngle_Request__rosidl_typesupport_introspection_c__CameraAngle_Request_message_members = {
  "firstservicepkg__srv",  // message namespace
  "CameraAngle_Request",  // message name
  1,  // number of fields
  sizeof(firstservicepkg__srv__CameraAngle_Request),
  firstservicepkg__srv__CameraAngle_Request__rosidl_typesupport_introspection_c__CameraAngle_Request_message_member_array,  // message members
  firstservicepkg__srv__CameraAngle_Request__rosidl_typesupport_introspection_c__CameraAngle_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  firstservicepkg__srv__CameraAngle_Request__rosidl_typesupport_introspection_c__CameraAngle_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t firstservicepkg__srv__CameraAngle_Request__rosidl_typesupport_introspection_c__CameraAngle_Request_message_type_support_handle = {
  0,
  &firstservicepkg__srv__CameraAngle_Request__rosidl_typesupport_introspection_c__CameraAngle_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_firstservicepkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, firstservicepkg, srv, CameraAngle_Request)() {
  if (!firstservicepkg__srv__CameraAngle_Request__rosidl_typesupport_introspection_c__CameraAngle_Request_message_type_support_handle.typesupport_identifier) {
    firstservicepkg__srv__CameraAngle_Request__rosidl_typesupport_introspection_c__CameraAngle_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &firstservicepkg__srv__CameraAngle_Request__rosidl_typesupport_introspection_c__CameraAngle_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "firstservicepkg/srv/detail/camera_angle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "firstservicepkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "firstservicepkg/srv/detail/camera_angle__functions.h"
// already included above
// #include "firstservicepkg/srv/detail/camera_angle__struct.h"


// Include directives for member types
// Member `camera_image`
#include "sensor_msgs/msg/image.h"
// Member `camera_image`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void firstservicepkg__srv__CameraAngle_Response__rosidl_typesupport_introspection_c__CameraAngle_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  firstservicepkg__srv__CameraAngle_Response__init(message_memory);
}

void firstservicepkg__srv__CameraAngle_Response__rosidl_typesupport_introspection_c__CameraAngle_Response_fini_function(void * message_memory)
{
  firstservicepkg__srv__CameraAngle_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember firstservicepkg__srv__CameraAngle_Response__rosidl_typesupport_introspection_c__CameraAngle_Response_message_member_array[1] = {
  {
    "camera_image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(firstservicepkg__srv__CameraAngle_Response, camera_image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers firstservicepkg__srv__CameraAngle_Response__rosidl_typesupport_introspection_c__CameraAngle_Response_message_members = {
  "firstservicepkg__srv",  // message namespace
  "CameraAngle_Response",  // message name
  1,  // number of fields
  sizeof(firstservicepkg__srv__CameraAngle_Response),
  firstservicepkg__srv__CameraAngle_Response__rosidl_typesupport_introspection_c__CameraAngle_Response_message_member_array,  // message members
  firstservicepkg__srv__CameraAngle_Response__rosidl_typesupport_introspection_c__CameraAngle_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  firstservicepkg__srv__CameraAngle_Response__rosidl_typesupport_introspection_c__CameraAngle_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t firstservicepkg__srv__CameraAngle_Response__rosidl_typesupport_introspection_c__CameraAngle_Response_message_type_support_handle = {
  0,
  &firstservicepkg__srv__CameraAngle_Response__rosidl_typesupport_introspection_c__CameraAngle_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_firstservicepkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, firstservicepkg, srv, CameraAngle_Response)() {
  firstservicepkg__srv__CameraAngle_Response__rosidl_typesupport_introspection_c__CameraAngle_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!firstservicepkg__srv__CameraAngle_Response__rosidl_typesupport_introspection_c__CameraAngle_Response_message_type_support_handle.typesupport_identifier) {
    firstservicepkg__srv__CameraAngle_Response__rosidl_typesupport_introspection_c__CameraAngle_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &firstservicepkg__srv__CameraAngle_Response__rosidl_typesupport_introspection_c__CameraAngle_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "firstservicepkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "firstservicepkg/srv/detail/camera_angle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers firstservicepkg__srv__detail__camera_angle__rosidl_typesupport_introspection_c__CameraAngle_service_members = {
  "firstservicepkg__srv",  // service namespace
  "CameraAngle",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // firstservicepkg__srv__detail__camera_angle__rosidl_typesupport_introspection_c__CameraAngle_Request_message_type_support_handle,
  NULL  // response message
  // firstservicepkg__srv__detail__camera_angle__rosidl_typesupport_introspection_c__CameraAngle_Response_message_type_support_handle
};

static rosidl_service_type_support_t firstservicepkg__srv__detail__camera_angle__rosidl_typesupport_introspection_c__CameraAngle_service_type_support_handle = {
  0,
  &firstservicepkg__srv__detail__camera_angle__rosidl_typesupport_introspection_c__CameraAngle_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, firstservicepkg, srv, CameraAngle_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, firstservicepkg, srv, CameraAngle_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_firstservicepkg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, firstservicepkg, srv, CameraAngle)() {
  if (!firstservicepkg__srv__detail__camera_angle__rosidl_typesupport_introspection_c__CameraAngle_service_type_support_handle.typesupport_identifier) {
    firstservicepkg__srv__detail__camera_angle__rosidl_typesupport_introspection_c__CameraAngle_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)firstservicepkg__srv__detail__camera_angle__rosidl_typesupport_introspection_c__CameraAngle_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, firstservicepkg, srv, CameraAngle_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, firstservicepkg, srv, CameraAngle_Response)()->data;
  }

  return &firstservicepkg__srv__detail__camera_angle__rosidl_typesupport_introspection_c__CameraAngle_service_type_support_handle;
}
