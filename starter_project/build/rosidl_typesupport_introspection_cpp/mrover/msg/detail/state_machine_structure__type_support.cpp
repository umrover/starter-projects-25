// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mrover:msg/StateMachineStructure.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mrover/msg/detail/state_machine_structure__struct.hpp"
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

void StateMachineStructure_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mrover::msg::StateMachineStructure(_init);
}

void StateMachineStructure_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mrover::msg::StateMachineStructure *>(message_memory);
  typed_message->~StateMachineStructure();
}

size_t size_function__StateMachineStructure__transitions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mrover::msg::StateMachineTransition> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StateMachineStructure__transitions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mrover::msg::StateMachineTransition> *>(untyped_member);
  return &member[index];
}

void * get_function__StateMachineStructure__transitions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mrover::msg::StateMachineTransition> *>(untyped_member);
  return &member[index];
}

void fetch_function__StateMachineStructure__transitions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mrover::msg::StateMachineTransition *>(
    get_const_function__StateMachineStructure__transitions(untyped_member, index));
  auto & value = *reinterpret_cast<mrover::msg::StateMachineTransition *>(untyped_value);
  value = item;
}

void assign_function__StateMachineStructure__transitions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mrover::msg::StateMachineTransition *>(
    get_function__StateMachineStructure__transitions(untyped_member, index));
  const auto & value = *reinterpret_cast<const mrover::msg::StateMachineTransition *>(untyped_value);
  item = value;
}

void resize_function__StateMachineStructure__transitions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mrover::msg::StateMachineTransition> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StateMachineStructure_message_member_array[2] = {
  {
    "machine_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover::msg::StateMachineStructure, machine_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "transitions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mrover::msg::StateMachineTransition>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover::msg::StateMachineStructure, transitions),  // bytes offset in struct
    nullptr,  // default value
    size_function__StateMachineStructure__transitions,  // size() function pointer
    get_const_function__StateMachineStructure__transitions,  // get_const(index) function pointer
    get_function__StateMachineStructure__transitions,  // get(index) function pointer
    fetch_function__StateMachineStructure__transitions,  // fetch(index, &value) function pointer
    assign_function__StateMachineStructure__transitions,  // assign(index, value) function pointer
    resize_function__StateMachineStructure__transitions  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StateMachineStructure_message_members = {
  "mrover::msg",  // message namespace
  "StateMachineStructure",  // message name
  2,  // number of fields
  sizeof(mrover::msg::StateMachineStructure),
  StateMachineStructure_message_member_array,  // message members
  StateMachineStructure_init_function,  // function to initialize message memory (memory has to be allocated)
  StateMachineStructure_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StateMachineStructure_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StateMachineStructure_message_members,
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
get_message_type_support_handle<mrover::msg::StateMachineStructure>()
{
  return &::mrover::msg::rosidl_typesupport_introspection_cpp::StateMachineStructure_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrover, msg, StateMachineStructure)() {
  return &::mrover::msg::rosidl_typesupport_introspection_cpp::StateMachineStructure_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
