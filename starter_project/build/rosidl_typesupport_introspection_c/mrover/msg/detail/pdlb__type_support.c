// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrover:msg/PDLB.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrover/msg/detail/pdlb__rosidl_typesupport_introspection_c.h"
#include "mrover/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrover/msg/detail/pdlb__functions.h"
#include "mrover/msg/detail/pdlb__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void mrover__msg__PDLB__rosidl_typesupport_introspection_c__PDLB_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrover__msg__PDLB__init(message_memory);
}

void mrover__msg__PDLB__rosidl_typesupport_introspection_c__PDLB_fini_function(void * message_memory)
{
  mrover__msg__PDLB__fini(message_memory);
}

size_t mrover__msg__PDLB__rosidl_typesupport_introspection_c__size_function__PDLB__temperatures(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * mrover__msg__PDLB__rosidl_typesupport_introspection_c__get_const_function__PDLB__temperatures(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * mrover__msg__PDLB__rosidl_typesupport_introspection_c__get_function__PDLB__temperatures(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void mrover__msg__PDLB__rosidl_typesupport_introspection_c__fetch_function__PDLB__temperatures(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    mrover__msg__PDLB__rosidl_typesupport_introspection_c__get_const_function__PDLB__temperatures(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void mrover__msg__PDLB__rosidl_typesupport_introspection_c__assign_function__PDLB__temperatures(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    mrover__msg__PDLB__rosidl_typesupport_introspection_c__get_function__PDLB__temperatures(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t mrover__msg__PDLB__rosidl_typesupport_introspection_c__size_function__PDLB__currents(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * mrover__msg__PDLB__rosidl_typesupport_introspection_c__get_const_function__PDLB__currents(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * mrover__msg__PDLB__rosidl_typesupport_introspection_c__get_function__PDLB__currents(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void mrover__msg__PDLB__rosidl_typesupport_introspection_c__fetch_function__PDLB__currents(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    mrover__msg__PDLB__rosidl_typesupport_introspection_c__get_const_function__PDLB__currents(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void mrover__msg__PDLB__rosidl_typesupport_introspection_c__assign_function__PDLB__currents(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    mrover__msg__PDLB__rosidl_typesupport_introspection_c__get_function__PDLB__currents(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember mrover__msg__PDLB__rosidl_typesupport_introspection_c__PDLB_message_member_array[2] = {
  {
    "temperatures",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(mrover__msg__PDLB, temperatures),  // bytes offset in struct
    NULL,  // default value
    mrover__msg__PDLB__rosidl_typesupport_introspection_c__size_function__PDLB__temperatures,  // size() function pointer
    mrover__msg__PDLB__rosidl_typesupport_introspection_c__get_const_function__PDLB__temperatures,  // get_const(index) function pointer
    mrover__msg__PDLB__rosidl_typesupport_introspection_c__get_function__PDLB__temperatures,  // get(index) function pointer
    mrover__msg__PDLB__rosidl_typesupport_introspection_c__fetch_function__PDLB__temperatures,  // fetch(index, &value) function pointer
    mrover__msg__PDLB__rosidl_typesupport_introspection_c__assign_function__PDLB__temperatures,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "currents",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(mrover__msg__PDLB, currents),  // bytes offset in struct
    NULL,  // default value
    mrover__msg__PDLB__rosidl_typesupport_introspection_c__size_function__PDLB__currents,  // size() function pointer
    mrover__msg__PDLB__rosidl_typesupport_introspection_c__get_const_function__PDLB__currents,  // get_const(index) function pointer
    mrover__msg__PDLB__rosidl_typesupport_introspection_c__get_function__PDLB__currents,  // get(index) function pointer
    mrover__msg__PDLB__rosidl_typesupport_introspection_c__fetch_function__PDLB__currents,  // fetch(index, &value) function pointer
    mrover__msg__PDLB__rosidl_typesupport_introspection_c__assign_function__PDLB__currents,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrover__msg__PDLB__rosidl_typesupport_introspection_c__PDLB_message_members = {
  "mrover__msg",  // message namespace
  "PDLB",  // message name
  2,  // number of fields
  sizeof(mrover__msg__PDLB),
  mrover__msg__PDLB__rosidl_typesupport_introspection_c__PDLB_message_member_array,  // message members
  mrover__msg__PDLB__rosidl_typesupport_introspection_c__PDLB_init_function,  // function to initialize message memory (memory has to be allocated)
  mrover__msg__PDLB__rosidl_typesupport_introspection_c__PDLB_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrover__msg__PDLB__rosidl_typesupport_introspection_c__PDLB_message_type_support_handle = {
  0,
  &mrover__msg__PDLB__rosidl_typesupport_introspection_c__PDLB_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrover
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrover, msg, PDLB)() {
  if (!mrover__msg__PDLB__rosidl_typesupport_introspection_c__PDLB_message_type_support_handle.typesupport_identifier) {
    mrover__msg__PDLB__rosidl_typesupport_introspection_c__PDLB_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrover__msg__PDLB__rosidl_typesupport_introspection_c__PDLB_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
