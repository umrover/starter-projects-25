// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mrover:msg/HeaterData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mrover/msg/detail/heater_data__struct.hpp"
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

void HeaterData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mrover::msg::HeaterData(_init);
}

void HeaterData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mrover::msg::HeaterData *>(message_memory);
  typed_message->~HeaterData();
}

size_t size_function__HeaterData__state(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__HeaterData__state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__HeaterData__state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__HeaterData__state(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember HeaterData_message_member_array[1] = {
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover::msg::HeaterData, state),  // bytes offset in struct
    nullptr,  // default value
    size_function__HeaterData__state,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__HeaterData__state,  // fetch(index, &value) function pointer
    assign_function__HeaterData__state,  // assign(index, value) function pointer
    resize_function__HeaterData__state  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers HeaterData_message_members = {
  "mrover::msg",  // message namespace
  "HeaterData",  // message name
  1,  // number of fields
  sizeof(mrover::msg::HeaterData),
  HeaterData_message_member_array,  // message members
  HeaterData_init_function,  // function to initialize message memory (memory has to be allocated)
  HeaterData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t HeaterData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &HeaterData_message_members,
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
get_message_type_support_handle<mrover::msg::HeaterData>()
{
  return &::mrover::msg::rosidl_typesupport_introspection_cpp::HeaterData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrover, msg, HeaterData)() {
  return &::mrover::msg::rosidl_typesupport_introspection_cpp::HeaterData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
