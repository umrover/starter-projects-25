// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mrover:msg/GPSWaypoint.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mrover/msg/detail/gps_waypoint__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mrover
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void GPSWaypoint_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mrover::msg::GPSWaypoint(_init);
}

void GPSWaypoint_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mrover::msg::GPSWaypoint *>(message_memory);
  typed_message->~GPSWaypoint();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GPSWaypoint_message_member_array[4] = {
  {
    "tag_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover::msg::GPSWaypoint, tag_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "latitude_degrees",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover::msg::GPSWaypoint, latitude_degrees),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "longitude_degrees",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover::msg::GPSWaypoint, longitude_degrees),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mrover::msg::WaypointType>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover::msg::GPSWaypoint, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GPSWaypoint_message_members = {
  "mrover::msg",  // message namespace
  "GPSWaypoint",  // message name
  4,  // number of fields
  sizeof(mrover::msg::GPSWaypoint),
  GPSWaypoint_message_member_array,  // message members
  GPSWaypoint_init_function,  // function to initialize message memory (memory has to be allocated)
  GPSWaypoint_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GPSWaypoint_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GPSWaypoint_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mrover


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrover::msg::GPSWaypoint>()
{
  return &::mrover::msg::rosidl_typesupport_introspection_cpp::GPSWaypoint_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrover, msg, GPSWaypoint)() {
  return &::mrover::msg::rosidl_typesupport_introspection_cpp::GPSWaypoint_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
