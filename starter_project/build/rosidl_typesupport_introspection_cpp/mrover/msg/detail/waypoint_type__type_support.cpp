// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mrover:msg/WaypointType.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mrover/msg/detail/waypoint_type__struct.hpp"
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

void WaypointType_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mrover::msg::WaypointType(_init);
}

void WaypointType_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mrover::msg::WaypointType *>(message_memory);
  typed_message->~WaypointType();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WaypointType_message_member_array[1] = {
  {
    "val",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover::msg::WaypointType, val),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WaypointType_message_members = {
  "mrover::msg",  // message namespace
  "WaypointType",  // message name
  1,  // number of fields
  sizeof(mrover::msg::WaypointType),
  WaypointType_message_member_array,  // message members
  WaypointType_init_function,  // function to initialize message memory (memory has to be allocated)
  WaypointType_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WaypointType_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WaypointType_message_members,
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
get_message_type_support_handle<mrover::msg::WaypointType>()
{
  return &::mrover::msg::rosidl_typesupport_introspection_cpp::WaypointType_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrover, msg, WaypointType)() {
  return &::mrover::msg::rosidl_typesupport_introspection_cpp::WaypointType_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
