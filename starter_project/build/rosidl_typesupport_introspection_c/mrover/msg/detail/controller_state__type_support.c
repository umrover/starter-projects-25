// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrover:msg/ControllerState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrover/msg/detail/controller_state__rosidl_typesupport_introspection_c.h"
#include "mrover/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrover/msg/detail/controller_state__functions.h"
#include "mrover/msg/detail/controller_state__struct.h"


// Include directives for member types
// Member `name`
// Member `state`
// Member `error`
#include "rosidl_runtime_c/string_functions.h"
// Member `limit_hit`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrover__msg__ControllerState__rosidl_typesupport_introspection_c__ControllerState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrover__msg__ControllerState__init(message_memory);
}

void mrover__msg__ControllerState__rosidl_typesupport_introspection_c__ControllerState_fini_function(void * message_memory)
{
  mrover__msg__ControllerState__fini(message_memory);
}

size_t mrover__msg__ControllerState__rosidl_typesupport_introspection_c__size_function__ControllerState__name(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * mrover__msg__ControllerState__rosidl_typesupport_introspection_c__get_const_function__ControllerState__name(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrover__msg__ControllerState__rosidl_typesupport_introspection_c__get_function__ControllerState__name(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrover__msg__ControllerState__rosidl_typesupport_introspection_c__fetch_function__ControllerState__name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__get_const_function__ControllerState__name(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void mrover__msg__ControllerState__rosidl_typesupport_introspection_c__assign_function__ControllerState__name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__get_function__ControllerState__name(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool mrover__msg__ControllerState__rosidl_typesupport_introspection_c__resize_function__ControllerState__name(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t mrover__msg__ControllerState__rosidl_typesupport_introspection_c__size_function__ControllerState__state(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * mrover__msg__ControllerState__rosidl_typesupport_introspection_c__get_const_function__ControllerState__state(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrover__msg__ControllerState__rosidl_typesupport_introspection_c__get_function__ControllerState__state(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrover__msg__ControllerState__rosidl_typesupport_introspection_c__fetch_function__ControllerState__state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__get_const_function__ControllerState__state(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void mrover__msg__ControllerState__rosidl_typesupport_introspection_c__assign_function__ControllerState__state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__get_function__ControllerState__state(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool mrover__msg__ControllerState__rosidl_typesupport_introspection_c__resize_function__ControllerState__state(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t mrover__msg__ControllerState__rosidl_typesupport_introspection_c__size_function__ControllerState__error(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * mrover__msg__ControllerState__rosidl_typesupport_introspection_c__get_const_function__ControllerState__error(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrover__msg__ControllerState__rosidl_typesupport_introspection_c__get_function__ControllerState__error(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrover__msg__ControllerState__rosidl_typesupport_introspection_c__fetch_function__ControllerState__error(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__get_const_function__ControllerState__error(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void mrover__msg__ControllerState__rosidl_typesupport_introspection_c__assign_function__ControllerState__error(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__get_function__ControllerState__error(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool mrover__msg__ControllerState__rosidl_typesupport_introspection_c__resize_function__ControllerState__error(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t mrover__msg__ControllerState__rosidl_typesupport_introspection_c__size_function__ControllerState__limit_hit(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * mrover__msg__ControllerState__rosidl_typesupport_introspection_c__get_const_function__ControllerState__limit_hit(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrover__msg__ControllerState__rosidl_typesupport_introspection_c__get_function__ControllerState__limit_hit(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrover__msg__ControllerState__rosidl_typesupport_introspection_c__fetch_function__ControllerState__limit_hit(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__get_const_function__ControllerState__limit_hit(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void mrover__msg__ControllerState__rosidl_typesupport_introspection_c__assign_function__ControllerState__limit_hit(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__get_function__ControllerState__limit_hit(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool mrover__msg__ControllerState__rosidl_typesupport_introspection_c__resize_function__ControllerState__limit_hit(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mrover__msg__ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_member_array[4] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover__msg__ControllerState, name),  // bytes offset in struct
    NULL,  // default value
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__size_function__ControllerState__name,  // size() function pointer
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__get_const_function__ControllerState__name,  // get_const(index) function pointer
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__get_function__ControllerState__name,  // get(index) function pointer
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__fetch_function__ControllerState__name,  // fetch(index, &value) function pointer
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__assign_function__ControllerState__name,  // assign(index, value) function pointer
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__resize_function__ControllerState__name  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover__msg__ControllerState, state),  // bytes offset in struct
    NULL,  // default value
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__size_function__ControllerState__state,  // size() function pointer
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__get_const_function__ControllerState__state,  // get_const(index) function pointer
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__get_function__ControllerState__state,  // get(index) function pointer
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__fetch_function__ControllerState__state,  // fetch(index, &value) function pointer
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__assign_function__ControllerState__state,  // assign(index, value) function pointer
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__resize_function__ControllerState__state  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover__msg__ControllerState, error),  // bytes offset in struct
    NULL,  // default value
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__size_function__ControllerState__error,  // size() function pointer
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__get_const_function__ControllerState__error,  // get_const(index) function pointer
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__get_function__ControllerState__error,  // get(index) function pointer
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__fetch_function__ControllerState__error,  // fetch(index, &value) function pointer
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__assign_function__ControllerState__error,  // assign(index, value) function pointer
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__resize_function__ControllerState__error  // resize(index) function pointer
  },
  {
    "limit_hit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover__msg__ControllerState, limit_hit),  // bytes offset in struct
    NULL,  // default value
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__size_function__ControllerState__limit_hit,  // size() function pointer
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__get_const_function__ControllerState__limit_hit,  // get_const(index) function pointer
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__get_function__ControllerState__limit_hit,  // get(index) function pointer
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__fetch_function__ControllerState__limit_hit,  // fetch(index, &value) function pointer
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__assign_function__ControllerState__limit_hit,  // assign(index, value) function pointer
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__resize_function__ControllerState__limit_hit  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrover__msg__ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_members = {
  "mrover__msg",  // message namespace
  "ControllerState",  // message name
  4,  // number of fields
  sizeof(mrover__msg__ControllerState),
  mrover__msg__ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_member_array,  // message members
  mrover__msg__ControllerState__rosidl_typesupport_introspection_c__ControllerState_init_function,  // function to initialize message memory (memory has to be allocated)
  mrover__msg__ControllerState__rosidl_typesupport_introspection_c__ControllerState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrover__msg__ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_type_support_handle = {
  0,
  &mrover__msg__ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrover
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrover, msg, ControllerState)() {
  if (!mrover__msg__ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_type_support_handle.typesupport_identifier) {
    mrover__msg__ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrover__msg__ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
