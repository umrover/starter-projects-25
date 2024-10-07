// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mrover:msg/ImageTarget.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mrover/msg/detail/image_target__struct.hpp"
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

void ImageTarget_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mrover::msg::ImageTarget(_init);
}

void ImageTarget_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mrover::msg::ImageTarget *>(message_memory);
  typed_message->~ImageTarget();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ImageTarget_message_member_array[2] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover::msg::ImageTarget, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bearing",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover::msg::ImageTarget, bearing),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ImageTarget_message_members = {
  "mrover::msg",  // message namespace
  "ImageTarget",  // message name
  2,  // number of fields
  sizeof(mrover::msg::ImageTarget),
  ImageTarget_message_member_array,  // message members
  ImageTarget_init_function,  // function to initialize message memory (memory has to be allocated)
  ImageTarget_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ImageTarget_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ImageTarget_message_members,
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
get_message_type_support_handle<mrover::msg::ImageTarget>()
{
  return &::mrover::msg::rosidl_typesupport_introspection_cpp::ImageTarget_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrover, msg, ImageTarget)() {
  return &::mrover::msg::rosidl_typesupport_introspection_cpp::ImageTarget_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
