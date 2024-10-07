// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrover:srv/EnableAuton.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrover/srv/detail/enable_auton__rosidl_typesupport_introspection_c.h"
#include "mrover/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrover/srv/detail/enable_auton__functions.h"
#include "mrover/srv/detail/enable_auton__struct.h"


// Include directives for member types
// Member `waypoints`
#include "mrover/msg/gps_waypoint.h"
// Member `waypoints`
#include "mrover/msg/detail/gps_waypoint__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrover__srv__EnableAuton_Request__rosidl_typesupport_introspection_c__EnableAuton_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrover__srv__EnableAuton_Request__init(message_memory);
}

void mrover__srv__EnableAuton_Request__rosidl_typesupport_introspection_c__EnableAuton_Request_fini_function(void * message_memory)
{
  mrover__srv__EnableAuton_Request__fini(message_memory);
}

size_t mrover__srv__EnableAuton_Request__rosidl_typesupport_introspection_c__size_function__EnableAuton_Request__waypoints(
  const void * untyped_member)
{
  const mrover__msg__GPSWaypoint__Sequence * member =
    (const mrover__msg__GPSWaypoint__Sequence *)(untyped_member);
  return member->size;
}

const void * mrover__srv__EnableAuton_Request__rosidl_typesupport_introspection_c__get_const_function__EnableAuton_Request__waypoints(
  const void * untyped_member, size_t index)
{
  const mrover__msg__GPSWaypoint__Sequence * member =
    (const mrover__msg__GPSWaypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrover__srv__EnableAuton_Request__rosidl_typesupport_introspection_c__get_function__EnableAuton_Request__waypoints(
  void * untyped_member, size_t index)
{
  mrover__msg__GPSWaypoint__Sequence * member =
    (mrover__msg__GPSWaypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrover__srv__EnableAuton_Request__rosidl_typesupport_introspection_c__fetch_function__EnableAuton_Request__waypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mrover__msg__GPSWaypoint * item =
    ((const mrover__msg__GPSWaypoint *)
    mrover__srv__EnableAuton_Request__rosidl_typesupport_introspection_c__get_const_function__EnableAuton_Request__waypoints(untyped_member, index));
  mrover__msg__GPSWaypoint * value =
    (mrover__msg__GPSWaypoint *)(untyped_value);
  *value = *item;
}

void mrover__srv__EnableAuton_Request__rosidl_typesupport_introspection_c__assign_function__EnableAuton_Request__waypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mrover__msg__GPSWaypoint * item =
    ((mrover__msg__GPSWaypoint *)
    mrover__srv__EnableAuton_Request__rosidl_typesupport_introspection_c__get_function__EnableAuton_Request__waypoints(untyped_member, index));
  const mrover__msg__GPSWaypoint * value =
    (const mrover__msg__GPSWaypoint *)(untyped_value);
  *item = *value;
}

bool mrover__srv__EnableAuton_Request__rosidl_typesupport_introspection_c__resize_function__EnableAuton_Request__waypoints(
  void * untyped_member, size_t size)
{
  mrover__msg__GPSWaypoint__Sequence * member =
    (mrover__msg__GPSWaypoint__Sequence *)(untyped_member);
  mrover__msg__GPSWaypoint__Sequence__fini(member);
  return mrover__msg__GPSWaypoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mrover__srv__EnableAuton_Request__rosidl_typesupport_introspection_c__EnableAuton_Request_message_member_array[2] = {
  {
    "enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover__srv__EnableAuton_Request, enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover__srv__EnableAuton_Request, waypoints),  // bytes offset in struct
    NULL,  // default value
    mrover__srv__EnableAuton_Request__rosidl_typesupport_introspection_c__size_function__EnableAuton_Request__waypoints,  // size() function pointer
    mrover__srv__EnableAuton_Request__rosidl_typesupport_introspection_c__get_const_function__EnableAuton_Request__waypoints,  // get_const(index) function pointer
    mrover__srv__EnableAuton_Request__rosidl_typesupport_introspection_c__get_function__EnableAuton_Request__waypoints,  // get(index) function pointer
    mrover__srv__EnableAuton_Request__rosidl_typesupport_introspection_c__fetch_function__EnableAuton_Request__waypoints,  // fetch(index, &value) function pointer
    mrover__srv__EnableAuton_Request__rosidl_typesupport_introspection_c__assign_function__EnableAuton_Request__waypoints,  // assign(index, value) function pointer
    mrover__srv__EnableAuton_Request__rosidl_typesupport_introspection_c__resize_function__EnableAuton_Request__waypoints  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrover__srv__EnableAuton_Request__rosidl_typesupport_introspection_c__EnableAuton_Request_message_members = {
  "mrover__srv",  // message namespace
  "EnableAuton_Request",  // message name
  2,  // number of fields
  sizeof(mrover__srv__EnableAuton_Request),
  mrover__srv__EnableAuton_Request__rosidl_typesupport_introspection_c__EnableAuton_Request_message_member_array,  // message members
  mrover__srv__EnableAuton_Request__rosidl_typesupport_introspection_c__EnableAuton_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  mrover__srv__EnableAuton_Request__rosidl_typesupport_introspection_c__EnableAuton_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrover__srv__EnableAuton_Request__rosidl_typesupport_introspection_c__EnableAuton_Request_message_type_support_handle = {
  0,
  &mrover__srv__EnableAuton_Request__rosidl_typesupport_introspection_c__EnableAuton_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrover
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrover, srv, EnableAuton_Request)() {
  mrover__srv__EnableAuton_Request__rosidl_typesupport_introspection_c__EnableAuton_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrover, msg, GPSWaypoint)();
  if (!mrover__srv__EnableAuton_Request__rosidl_typesupport_introspection_c__EnableAuton_Request_message_type_support_handle.typesupport_identifier) {
    mrover__srv__EnableAuton_Request__rosidl_typesupport_introspection_c__EnableAuton_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrover__srv__EnableAuton_Request__rosidl_typesupport_introspection_c__EnableAuton_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mrover/srv/detail/enable_auton__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mrover/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mrover/srv/detail/enable_auton__functions.h"
// already included above
// #include "mrover/srv/detail/enable_auton__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void mrover__srv__EnableAuton_Response__rosidl_typesupport_introspection_c__EnableAuton_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrover__srv__EnableAuton_Response__init(message_memory);
}

void mrover__srv__EnableAuton_Response__rosidl_typesupport_introspection_c__EnableAuton_Response_fini_function(void * message_memory)
{
  mrover__srv__EnableAuton_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mrover__srv__EnableAuton_Response__rosidl_typesupport_introspection_c__EnableAuton_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover__srv__EnableAuton_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrover__srv__EnableAuton_Response__rosidl_typesupport_introspection_c__EnableAuton_Response_message_members = {
  "mrover__srv",  // message namespace
  "EnableAuton_Response",  // message name
  1,  // number of fields
  sizeof(mrover__srv__EnableAuton_Response),
  mrover__srv__EnableAuton_Response__rosidl_typesupport_introspection_c__EnableAuton_Response_message_member_array,  // message members
  mrover__srv__EnableAuton_Response__rosidl_typesupport_introspection_c__EnableAuton_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  mrover__srv__EnableAuton_Response__rosidl_typesupport_introspection_c__EnableAuton_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrover__srv__EnableAuton_Response__rosidl_typesupport_introspection_c__EnableAuton_Response_message_type_support_handle = {
  0,
  &mrover__srv__EnableAuton_Response__rosidl_typesupport_introspection_c__EnableAuton_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrover
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrover, srv, EnableAuton_Response)() {
  if (!mrover__srv__EnableAuton_Response__rosidl_typesupport_introspection_c__EnableAuton_Response_message_type_support_handle.typesupport_identifier) {
    mrover__srv__EnableAuton_Response__rosidl_typesupport_introspection_c__EnableAuton_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrover__srv__EnableAuton_Response__rosidl_typesupport_introspection_c__EnableAuton_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mrover/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "mrover/srv/detail/enable_auton__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers mrover__srv__detail__enable_auton__rosidl_typesupport_introspection_c__EnableAuton_service_members = {
  "mrover__srv",  // service namespace
  "EnableAuton",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // mrover__srv__detail__enable_auton__rosidl_typesupport_introspection_c__EnableAuton_Request_message_type_support_handle,
  NULL  // response message
  // mrover__srv__detail__enable_auton__rosidl_typesupport_introspection_c__EnableAuton_Response_message_type_support_handle
};

static rosidl_service_type_support_t mrover__srv__detail__enable_auton__rosidl_typesupport_introspection_c__EnableAuton_service_type_support_handle = {
  0,
  &mrover__srv__detail__enable_auton__rosidl_typesupport_introspection_c__EnableAuton_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrover, srv, EnableAuton_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrover, srv, EnableAuton_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrover
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrover, srv, EnableAuton)() {
  if (!mrover__srv__detail__enable_auton__rosidl_typesupport_introspection_c__EnableAuton_service_type_support_handle.typesupport_identifier) {
    mrover__srv__detail__enable_auton__rosidl_typesupport_introspection_c__EnableAuton_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)mrover__srv__detail__enable_auton__rosidl_typesupport_introspection_c__EnableAuton_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrover, srv, EnableAuton_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrover, srv, EnableAuton_Response)()->data;
  }

  return &mrover__srv__detail__enable_auton__rosidl_typesupport_introspection_c__EnableAuton_service_type_support_handle;
}
