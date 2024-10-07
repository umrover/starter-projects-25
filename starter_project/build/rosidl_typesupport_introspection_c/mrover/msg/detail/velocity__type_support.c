// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrover:msg/Velocity.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrover/msg/detail/velocity__rosidl_typesupport_introspection_c.h"
#include "mrover/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrover/msg/detail/velocity__functions.h"
#include "mrover/msg/detail/velocity__struct.h"


// Include directives for member types
// Member `names`
#include "rosidl_runtime_c/string_functions.h"
// Member `velocities`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrover__msg__Velocity__rosidl_typesupport_introspection_c__Velocity_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrover__msg__Velocity__init(message_memory);
}

void mrover__msg__Velocity__rosidl_typesupport_introspection_c__Velocity_fini_function(void * message_memory)
{
  mrover__msg__Velocity__fini(message_memory);
}

size_t mrover__msg__Velocity__rosidl_typesupport_introspection_c__size_function__Velocity__names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * mrover__msg__Velocity__rosidl_typesupport_introspection_c__get_const_function__Velocity__names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrover__msg__Velocity__rosidl_typesupport_introspection_c__get_function__Velocity__names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrover__msg__Velocity__rosidl_typesupport_introspection_c__fetch_function__Velocity__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    mrover__msg__Velocity__rosidl_typesupport_introspection_c__get_const_function__Velocity__names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void mrover__msg__Velocity__rosidl_typesupport_introspection_c__assign_function__Velocity__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    mrover__msg__Velocity__rosidl_typesupport_introspection_c__get_function__Velocity__names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool mrover__msg__Velocity__rosidl_typesupport_introspection_c__resize_function__Velocity__names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t mrover__msg__Velocity__rosidl_typesupport_introspection_c__size_function__Velocity__velocities(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * mrover__msg__Velocity__rosidl_typesupport_introspection_c__get_const_function__Velocity__velocities(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrover__msg__Velocity__rosidl_typesupport_introspection_c__get_function__Velocity__velocities(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrover__msg__Velocity__rosidl_typesupport_introspection_c__fetch_function__Velocity__velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    mrover__msg__Velocity__rosidl_typesupport_introspection_c__get_const_function__Velocity__velocities(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void mrover__msg__Velocity__rosidl_typesupport_introspection_c__assign_function__Velocity__velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    mrover__msg__Velocity__rosidl_typesupport_introspection_c__get_function__Velocity__velocities(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool mrover__msg__Velocity__rosidl_typesupport_introspection_c__resize_function__Velocity__velocities(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mrover__msg__Velocity__rosidl_typesupport_introspection_c__Velocity_message_member_array[2] = {
  {
    "names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover__msg__Velocity, names),  // bytes offset in struct
    NULL,  // default value
    mrover__msg__Velocity__rosidl_typesupport_introspection_c__size_function__Velocity__names,  // size() function pointer
    mrover__msg__Velocity__rosidl_typesupport_introspection_c__get_const_function__Velocity__names,  // get_const(index) function pointer
    mrover__msg__Velocity__rosidl_typesupport_introspection_c__get_function__Velocity__names,  // get(index) function pointer
    mrover__msg__Velocity__rosidl_typesupport_introspection_c__fetch_function__Velocity__names,  // fetch(index, &value) function pointer
    mrover__msg__Velocity__rosidl_typesupport_introspection_c__assign_function__Velocity__names,  // assign(index, value) function pointer
    mrover__msg__Velocity__rosidl_typesupport_introspection_c__resize_function__Velocity__names  // resize(index) function pointer
  },
  {
    "velocities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover__msg__Velocity, velocities),  // bytes offset in struct
    NULL,  // default value
    mrover__msg__Velocity__rosidl_typesupport_introspection_c__size_function__Velocity__velocities,  // size() function pointer
    mrover__msg__Velocity__rosidl_typesupport_introspection_c__get_const_function__Velocity__velocities,  // get_const(index) function pointer
    mrover__msg__Velocity__rosidl_typesupport_introspection_c__get_function__Velocity__velocities,  // get(index) function pointer
    mrover__msg__Velocity__rosidl_typesupport_introspection_c__fetch_function__Velocity__velocities,  // fetch(index, &value) function pointer
    mrover__msg__Velocity__rosidl_typesupport_introspection_c__assign_function__Velocity__velocities,  // assign(index, value) function pointer
    mrover__msg__Velocity__rosidl_typesupport_introspection_c__resize_function__Velocity__velocities  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrover__msg__Velocity__rosidl_typesupport_introspection_c__Velocity_message_members = {
  "mrover__msg",  // message namespace
  "Velocity",  // message name
  2,  // number of fields
  sizeof(mrover__msg__Velocity),
  mrover__msg__Velocity__rosidl_typesupport_introspection_c__Velocity_message_member_array,  // message members
  mrover__msg__Velocity__rosidl_typesupport_introspection_c__Velocity_init_function,  // function to initialize message memory (memory has to be allocated)
  mrover__msg__Velocity__rosidl_typesupport_introspection_c__Velocity_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrover__msg__Velocity__rosidl_typesupport_introspection_c__Velocity_message_type_support_handle = {
  0,
  &mrover__msg__Velocity__rosidl_typesupport_introspection_c__Velocity_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrover
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrover, msg, Velocity)() {
  if (!mrover__msg__Velocity__rosidl_typesupport_introspection_c__Velocity_message_type_support_handle.typesupport_identifier) {
    mrover__msg__Velocity__rosidl_typesupport_introspection_c__Velocity_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrover__msg__Velocity__rosidl_typesupport_introspection_c__Velocity_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
