// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrover:msg/Spectral.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrover/msg/detail/spectral__rosidl_typesupport_introspection_c.h"
#include "mrover/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrover/msg/detail/spectral__functions.h"
#include "mrover/msg/detail/spectral__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void mrover__msg__Spectral__rosidl_typesupport_introspection_c__Spectral_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrover__msg__Spectral__init(message_memory);
}

void mrover__msg__Spectral__rosidl_typesupport_introspection_c__Spectral_fini_function(void * message_memory)
{
  mrover__msg__Spectral__fini(message_memory);
}

size_t mrover__msg__Spectral__rosidl_typesupport_introspection_c__size_function__Spectral__data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * mrover__msg__Spectral__rosidl_typesupport_introspection_c__get_const_function__Spectral__data(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * mrover__msg__Spectral__rosidl_typesupport_introspection_c__get_function__Spectral__data(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void mrover__msg__Spectral__rosidl_typesupport_introspection_c__fetch_function__Spectral__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    mrover__msg__Spectral__rosidl_typesupport_introspection_c__get_const_function__Spectral__data(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void mrover__msg__Spectral__rosidl_typesupport_introspection_c__assign_function__Spectral__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    mrover__msg__Spectral__rosidl_typesupport_introspection_c__get_function__Spectral__data(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember mrover__msg__Spectral__rosidl_typesupport_introspection_c__Spectral_message_member_array[3] = {
  {
    "site",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover__msg__Spectral, site),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(mrover__msg__Spectral, data),  // bytes offset in struct
    NULL,  // default value
    mrover__msg__Spectral__rosidl_typesupport_introspection_c__size_function__Spectral__data,  // size() function pointer
    mrover__msg__Spectral__rosidl_typesupport_introspection_c__get_const_function__Spectral__data,  // get_const(index) function pointer
    mrover__msg__Spectral__rosidl_typesupport_introspection_c__get_function__Spectral__data,  // get(index) function pointer
    mrover__msg__Spectral__rosidl_typesupport_introspection_c__fetch_function__Spectral__data,  // fetch(index, &value) function pointer
    mrover__msg__Spectral__rosidl_typesupport_introspection_c__assign_function__Spectral__data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover__msg__Spectral, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrover__msg__Spectral__rosidl_typesupport_introspection_c__Spectral_message_members = {
  "mrover__msg",  // message namespace
  "Spectral",  // message name
  3,  // number of fields
  sizeof(mrover__msg__Spectral),
  mrover__msg__Spectral__rosidl_typesupport_introspection_c__Spectral_message_member_array,  // message members
  mrover__msg__Spectral__rosidl_typesupport_introspection_c__Spectral_init_function,  // function to initialize message memory (memory has to be allocated)
  mrover__msg__Spectral__rosidl_typesupport_introspection_c__Spectral_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrover__msg__Spectral__rosidl_typesupport_introspection_c__Spectral_message_type_support_handle = {
  0,
  &mrover__msg__Spectral__rosidl_typesupport_introspection_c__Spectral_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrover
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrover, msg, Spectral)() {
  if (!mrover__msg__Spectral__rosidl_typesupport_introspection_c__Spectral_message_type_support_handle.typesupport_identifier) {
    mrover__msg__Spectral__rosidl_typesupport_introspection_c__Spectral_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrover__msg__Spectral__rosidl_typesupport_introspection_c__Spectral_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
