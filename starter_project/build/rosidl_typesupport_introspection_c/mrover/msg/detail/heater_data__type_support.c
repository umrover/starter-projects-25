// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrover:msg/HeaterData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrover/msg/detail/heater_data__rosidl_typesupport_introspection_c.h"
#include "mrover/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrover/msg/detail/heater_data__functions.h"
#include "mrover/msg/detail/heater_data__struct.h"


// Include directives for member types
// Member `state`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrover__msg__HeaterData__rosidl_typesupport_introspection_c__HeaterData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrover__msg__HeaterData__init(message_memory);
}

void mrover__msg__HeaterData__rosidl_typesupport_introspection_c__HeaterData_fini_function(void * message_memory)
{
  mrover__msg__HeaterData__fini(message_memory);
}

size_t mrover__msg__HeaterData__rosidl_typesupport_introspection_c__size_function__HeaterData__state(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * mrover__msg__HeaterData__rosidl_typesupport_introspection_c__get_const_function__HeaterData__state(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrover__msg__HeaterData__rosidl_typesupport_introspection_c__get_function__HeaterData__state(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrover__msg__HeaterData__rosidl_typesupport_introspection_c__fetch_function__HeaterData__state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    mrover__msg__HeaterData__rosidl_typesupport_introspection_c__get_const_function__HeaterData__state(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void mrover__msg__HeaterData__rosidl_typesupport_introspection_c__assign_function__HeaterData__state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    mrover__msg__HeaterData__rosidl_typesupport_introspection_c__get_function__HeaterData__state(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool mrover__msg__HeaterData__rosidl_typesupport_introspection_c__resize_function__HeaterData__state(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mrover__msg__HeaterData__rosidl_typesupport_introspection_c__HeaterData_message_member_array[1] = {
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover__msg__HeaterData, state),  // bytes offset in struct
    NULL,  // default value
    mrover__msg__HeaterData__rosidl_typesupport_introspection_c__size_function__HeaterData__state,  // size() function pointer
    mrover__msg__HeaterData__rosidl_typesupport_introspection_c__get_const_function__HeaterData__state,  // get_const(index) function pointer
    mrover__msg__HeaterData__rosidl_typesupport_introspection_c__get_function__HeaterData__state,  // get(index) function pointer
    mrover__msg__HeaterData__rosidl_typesupport_introspection_c__fetch_function__HeaterData__state,  // fetch(index, &value) function pointer
    mrover__msg__HeaterData__rosidl_typesupport_introspection_c__assign_function__HeaterData__state,  // assign(index, value) function pointer
    mrover__msg__HeaterData__rosidl_typesupport_introspection_c__resize_function__HeaterData__state  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrover__msg__HeaterData__rosidl_typesupport_introspection_c__HeaterData_message_members = {
  "mrover__msg",  // message namespace
  "HeaterData",  // message name
  1,  // number of fields
  sizeof(mrover__msg__HeaterData),
  mrover__msg__HeaterData__rosidl_typesupport_introspection_c__HeaterData_message_member_array,  // message members
  mrover__msg__HeaterData__rosidl_typesupport_introspection_c__HeaterData_init_function,  // function to initialize message memory (memory has to be allocated)
  mrover__msg__HeaterData__rosidl_typesupport_introspection_c__HeaterData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrover__msg__HeaterData__rosidl_typesupport_introspection_c__HeaterData_message_type_support_handle = {
  0,
  &mrover__msg__HeaterData__rosidl_typesupport_introspection_c__HeaterData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrover
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrover, msg, HeaterData)() {
  if (!mrover__msg__HeaterData__rosidl_typesupport_introspection_c__HeaterData_message_type_support_handle.typesupport_identifier) {
    mrover__msg__HeaterData__rosidl_typesupport_introspection_c__HeaterData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrover__msg__HeaterData__rosidl_typesupport_introspection_c__HeaterData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
