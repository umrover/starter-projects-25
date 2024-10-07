// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrover:msg/StateMachineStructure.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrover/msg/detail/state_machine_structure__rosidl_typesupport_introspection_c.h"
#include "mrover/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrover/msg/detail/state_machine_structure__functions.h"
#include "mrover/msg/detail/state_machine_structure__struct.h"


// Include directives for member types
// Member `machine_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `transitions`
#include "mrover/msg/state_machine_transition.h"
// Member `transitions`
#include "mrover/msg/detail/state_machine_transition__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrover__msg__StateMachineStructure__rosidl_typesupport_introspection_c__StateMachineStructure_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrover__msg__StateMachineStructure__init(message_memory);
}

void mrover__msg__StateMachineStructure__rosidl_typesupport_introspection_c__StateMachineStructure_fini_function(void * message_memory)
{
  mrover__msg__StateMachineStructure__fini(message_memory);
}

size_t mrover__msg__StateMachineStructure__rosidl_typesupport_introspection_c__size_function__StateMachineStructure__transitions(
  const void * untyped_member)
{
  const mrover__msg__StateMachineTransition__Sequence * member =
    (const mrover__msg__StateMachineTransition__Sequence *)(untyped_member);
  return member->size;
}

const void * mrover__msg__StateMachineStructure__rosidl_typesupport_introspection_c__get_const_function__StateMachineStructure__transitions(
  const void * untyped_member, size_t index)
{
  const mrover__msg__StateMachineTransition__Sequence * member =
    (const mrover__msg__StateMachineTransition__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrover__msg__StateMachineStructure__rosidl_typesupport_introspection_c__get_function__StateMachineStructure__transitions(
  void * untyped_member, size_t index)
{
  mrover__msg__StateMachineTransition__Sequence * member =
    (mrover__msg__StateMachineTransition__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrover__msg__StateMachineStructure__rosidl_typesupport_introspection_c__fetch_function__StateMachineStructure__transitions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mrover__msg__StateMachineTransition * item =
    ((const mrover__msg__StateMachineTransition *)
    mrover__msg__StateMachineStructure__rosidl_typesupport_introspection_c__get_const_function__StateMachineStructure__transitions(untyped_member, index));
  mrover__msg__StateMachineTransition * value =
    (mrover__msg__StateMachineTransition *)(untyped_value);
  *value = *item;
}

void mrover__msg__StateMachineStructure__rosidl_typesupport_introspection_c__assign_function__StateMachineStructure__transitions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mrover__msg__StateMachineTransition * item =
    ((mrover__msg__StateMachineTransition *)
    mrover__msg__StateMachineStructure__rosidl_typesupport_introspection_c__get_function__StateMachineStructure__transitions(untyped_member, index));
  const mrover__msg__StateMachineTransition * value =
    (const mrover__msg__StateMachineTransition *)(untyped_value);
  *item = *value;
}

bool mrover__msg__StateMachineStructure__rosidl_typesupport_introspection_c__resize_function__StateMachineStructure__transitions(
  void * untyped_member, size_t size)
{
  mrover__msg__StateMachineTransition__Sequence * member =
    (mrover__msg__StateMachineTransition__Sequence *)(untyped_member);
  mrover__msg__StateMachineTransition__Sequence__fini(member);
  return mrover__msg__StateMachineTransition__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mrover__msg__StateMachineStructure__rosidl_typesupport_introspection_c__StateMachineStructure_message_member_array[2] = {
  {
    "machine_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover__msg__StateMachineStructure, machine_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transitions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover__msg__StateMachineStructure, transitions),  // bytes offset in struct
    NULL,  // default value
    mrover__msg__StateMachineStructure__rosidl_typesupport_introspection_c__size_function__StateMachineStructure__transitions,  // size() function pointer
    mrover__msg__StateMachineStructure__rosidl_typesupport_introspection_c__get_const_function__StateMachineStructure__transitions,  // get_const(index) function pointer
    mrover__msg__StateMachineStructure__rosidl_typesupport_introspection_c__get_function__StateMachineStructure__transitions,  // get(index) function pointer
    mrover__msg__StateMachineStructure__rosidl_typesupport_introspection_c__fetch_function__StateMachineStructure__transitions,  // fetch(index, &value) function pointer
    mrover__msg__StateMachineStructure__rosidl_typesupport_introspection_c__assign_function__StateMachineStructure__transitions,  // assign(index, value) function pointer
    mrover__msg__StateMachineStructure__rosidl_typesupport_introspection_c__resize_function__StateMachineStructure__transitions  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrover__msg__StateMachineStructure__rosidl_typesupport_introspection_c__StateMachineStructure_message_members = {
  "mrover__msg",  // message namespace
  "StateMachineStructure",  // message name
  2,  // number of fields
  sizeof(mrover__msg__StateMachineStructure),
  mrover__msg__StateMachineStructure__rosidl_typesupport_introspection_c__StateMachineStructure_message_member_array,  // message members
  mrover__msg__StateMachineStructure__rosidl_typesupport_introspection_c__StateMachineStructure_init_function,  // function to initialize message memory (memory has to be allocated)
  mrover__msg__StateMachineStructure__rosidl_typesupport_introspection_c__StateMachineStructure_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrover__msg__StateMachineStructure__rosidl_typesupport_introspection_c__StateMachineStructure_message_type_support_handle = {
  0,
  &mrover__msg__StateMachineStructure__rosidl_typesupport_introspection_c__StateMachineStructure_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrover
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrover, msg, StateMachineStructure)() {
  mrover__msg__StateMachineStructure__rosidl_typesupport_introspection_c__StateMachineStructure_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrover, msg, StateMachineTransition)();
  if (!mrover__msg__StateMachineStructure__rosidl_typesupport_introspection_c__StateMachineStructure_message_type_support_handle.typesupport_identifier) {
    mrover__msg__StateMachineStructure__rosidl_typesupport_introspection_c__StateMachineStructure_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrover__msg__StateMachineStructure__rosidl_typesupport_introspection_c__StateMachineStructure_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
