// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrover:msg/CAN.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrover/msg/detail/can__rosidl_typesupport_introspection_c.h"
#include "mrover/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrover/msg/detail/can__functions.h"
#include "mrover/msg/detail/can__struct.h"


// Include directives for member types
// Member `source`
// Member `destination`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrover__msg__CAN__rosidl_typesupport_introspection_c__CAN_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrover__msg__CAN__init(message_memory);
}

void mrover__msg__CAN__rosidl_typesupport_introspection_c__CAN_fini_function(void * message_memory)
{
  mrover__msg__CAN__fini(message_memory);
}

size_t mrover__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * mrover__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrover__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrover__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    mrover__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void mrover__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    mrover__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool mrover__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mrover__msg__CAN__rosidl_typesupport_introspection_c__CAN_message_member_array[4] = {
  {
    "source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover__msg__CAN, source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "destination",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover__msg__CAN, destination),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover__msg__CAN, data),  // bytes offset in struct
    NULL,  // default value
    mrover__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__data,  // size() function pointer
    mrover__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__data,  // get_const(index) function pointer
    mrover__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__data,  // get(index) function pointer
    mrover__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__data,  // fetch(index, &value) function pointer
    mrover__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__data,  // assign(index, value) function pointer
    mrover__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__data  // resize(index) function pointer
  },
  {
    "reply_required",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover__msg__CAN, reply_required),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrover__msg__CAN__rosidl_typesupport_introspection_c__CAN_message_members = {
  "mrover__msg",  // message namespace
  "CAN",  // message name
  4,  // number of fields
  sizeof(mrover__msg__CAN),
  mrover__msg__CAN__rosidl_typesupport_introspection_c__CAN_message_member_array,  // message members
  mrover__msg__CAN__rosidl_typesupport_introspection_c__CAN_init_function,  // function to initialize message memory (memory has to be allocated)
  mrover__msg__CAN__rosidl_typesupport_introspection_c__CAN_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrover__msg__CAN__rosidl_typesupport_introspection_c__CAN_message_type_support_handle = {
  0,
  &mrover__msg__CAN__rosidl_typesupport_introspection_c__CAN_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrover
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrover, msg, CAN)() {
  if (!mrover__msg__CAN__rosidl_typesupport_introspection_c__CAN_message_type_support_handle.typesupport_identifier) {
    mrover__msg__CAN__rosidl_typesupport_introspection_c__CAN_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrover__msg__CAN__rosidl_typesupport_introspection_c__CAN_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
