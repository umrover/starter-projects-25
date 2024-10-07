// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrover:msg/GPSWaypoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrover/msg/detail/gps_waypoint__rosidl_typesupport_introspection_c.h"
#include "mrover/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrover/msg/detail/gps_waypoint__functions.h"
#include "mrover/msg/detail/gps_waypoint__struct.h"


// Include directives for member types
// Member `type`
#include "mrover/msg/waypoint_type.h"
// Member `type`
#include "mrover/msg/detail/waypoint_type__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrover__msg__GPSWaypoint__rosidl_typesupport_introspection_c__GPSWaypoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrover__msg__GPSWaypoint__init(message_memory);
}

void mrover__msg__GPSWaypoint__rosidl_typesupport_introspection_c__GPSWaypoint_fini_function(void * message_memory)
{
  mrover__msg__GPSWaypoint__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mrover__msg__GPSWaypoint__rosidl_typesupport_introspection_c__GPSWaypoint_message_member_array[4] = {
  {
    "tag_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover__msg__GPSWaypoint, tag_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "latitude_degrees",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover__msg__GPSWaypoint, latitude_degrees),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longitude_degrees",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover__msg__GPSWaypoint, longitude_degrees),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover__msg__GPSWaypoint, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrover__msg__GPSWaypoint__rosidl_typesupport_introspection_c__GPSWaypoint_message_members = {
  "mrover__msg",  // message namespace
  "GPSWaypoint",  // message name
  4,  // number of fields
  sizeof(mrover__msg__GPSWaypoint),
  mrover__msg__GPSWaypoint__rosidl_typesupport_introspection_c__GPSWaypoint_message_member_array,  // message members
  mrover__msg__GPSWaypoint__rosidl_typesupport_introspection_c__GPSWaypoint_init_function,  // function to initialize message memory (memory has to be allocated)
  mrover__msg__GPSWaypoint__rosidl_typesupport_introspection_c__GPSWaypoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrover__msg__GPSWaypoint__rosidl_typesupport_introspection_c__GPSWaypoint_message_type_support_handle = {
  0,
  &mrover__msg__GPSWaypoint__rosidl_typesupport_introspection_c__GPSWaypoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrover
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrover, msg, GPSWaypoint)() {
  mrover__msg__GPSWaypoint__rosidl_typesupport_introspection_c__GPSWaypoint_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrover, msg, WaypointType)();
  if (!mrover__msg__GPSWaypoint__rosidl_typesupport_introspection_c__GPSWaypoint_message_type_support_handle.typesupport_identifier) {
    mrover__msg__GPSWaypoint__rosidl_typesupport_introspection_c__GPSWaypoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrover__msg__GPSWaypoint__rosidl_typesupport_introspection_c__GPSWaypoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
