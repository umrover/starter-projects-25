// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrover:msg/ScienceThermistors.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrover/msg/detail/science_thermistors__rosidl_typesupport_introspection_c.h"
#include "mrover/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrover/msg/detail/science_thermistors__functions.h"
#include "mrover/msg/detail/science_thermistors__struct.h"


// Include directives for member types
// Member `temps`
#include "sensor_msgs/msg/temperature.h"
// Member `temps`
#include "sensor_msgs/msg/detail/temperature__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrover__msg__ScienceThermistors__rosidl_typesupport_introspection_c__ScienceThermistors_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrover__msg__ScienceThermistors__init(message_memory);
}

void mrover__msg__ScienceThermistors__rosidl_typesupport_introspection_c__ScienceThermistors_fini_function(void * message_memory)
{
  mrover__msg__ScienceThermistors__fini(message_memory);
}

size_t mrover__msg__ScienceThermistors__rosidl_typesupport_introspection_c__size_function__ScienceThermistors__temps(
  const void * untyped_member)
{
  const sensor_msgs__msg__Temperature__Sequence * member =
    (const sensor_msgs__msg__Temperature__Sequence *)(untyped_member);
  return member->size;
}

const void * mrover__msg__ScienceThermistors__rosidl_typesupport_introspection_c__get_const_function__ScienceThermistors__temps(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__Temperature__Sequence * member =
    (const sensor_msgs__msg__Temperature__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrover__msg__ScienceThermistors__rosidl_typesupport_introspection_c__get_function__ScienceThermistors__temps(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__Temperature__Sequence * member =
    (sensor_msgs__msg__Temperature__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrover__msg__ScienceThermistors__rosidl_typesupport_introspection_c__fetch_function__ScienceThermistors__temps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const sensor_msgs__msg__Temperature * item =
    ((const sensor_msgs__msg__Temperature *)
    mrover__msg__ScienceThermistors__rosidl_typesupport_introspection_c__get_const_function__ScienceThermistors__temps(untyped_member, index));
  sensor_msgs__msg__Temperature * value =
    (sensor_msgs__msg__Temperature *)(untyped_value);
  *value = *item;
}

void mrover__msg__ScienceThermistors__rosidl_typesupport_introspection_c__assign_function__ScienceThermistors__temps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  sensor_msgs__msg__Temperature * item =
    ((sensor_msgs__msg__Temperature *)
    mrover__msg__ScienceThermistors__rosidl_typesupport_introspection_c__get_function__ScienceThermistors__temps(untyped_member, index));
  const sensor_msgs__msg__Temperature * value =
    (const sensor_msgs__msg__Temperature *)(untyped_value);
  *item = *value;
}

bool mrover__msg__ScienceThermistors__rosidl_typesupport_introspection_c__resize_function__ScienceThermistors__temps(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__Temperature__Sequence * member =
    (sensor_msgs__msg__Temperature__Sequence *)(untyped_member);
  sensor_msgs__msg__Temperature__Sequence__fini(member);
  return sensor_msgs__msg__Temperature__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mrover__msg__ScienceThermistors__rosidl_typesupport_introspection_c__ScienceThermistors_message_member_array[1] = {
  {
    "temps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrover__msg__ScienceThermistors, temps),  // bytes offset in struct
    NULL,  // default value
    mrover__msg__ScienceThermistors__rosidl_typesupport_introspection_c__size_function__ScienceThermistors__temps,  // size() function pointer
    mrover__msg__ScienceThermistors__rosidl_typesupport_introspection_c__get_const_function__ScienceThermistors__temps,  // get_const(index) function pointer
    mrover__msg__ScienceThermistors__rosidl_typesupport_introspection_c__get_function__ScienceThermistors__temps,  // get(index) function pointer
    mrover__msg__ScienceThermistors__rosidl_typesupport_introspection_c__fetch_function__ScienceThermistors__temps,  // fetch(index, &value) function pointer
    mrover__msg__ScienceThermistors__rosidl_typesupport_introspection_c__assign_function__ScienceThermistors__temps,  // assign(index, value) function pointer
    mrover__msg__ScienceThermistors__rosidl_typesupport_introspection_c__resize_function__ScienceThermistors__temps  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrover__msg__ScienceThermistors__rosidl_typesupport_introspection_c__ScienceThermistors_message_members = {
  "mrover__msg",  // message namespace
  "ScienceThermistors",  // message name
  1,  // number of fields
  sizeof(mrover__msg__ScienceThermistors),
  mrover__msg__ScienceThermistors__rosidl_typesupport_introspection_c__ScienceThermistors_message_member_array,  // message members
  mrover__msg__ScienceThermistors__rosidl_typesupport_introspection_c__ScienceThermistors_init_function,  // function to initialize message memory (memory has to be allocated)
  mrover__msg__ScienceThermistors__rosidl_typesupport_introspection_c__ScienceThermistors_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrover__msg__ScienceThermistors__rosidl_typesupport_introspection_c__ScienceThermistors_message_type_support_handle = {
  0,
  &mrover__msg__ScienceThermistors__rosidl_typesupport_introspection_c__ScienceThermistors_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrover
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrover, msg, ScienceThermistors)() {
  mrover__msg__ScienceThermistors__rosidl_typesupport_introspection_c__ScienceThermistors_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Temperature)();
  if (!mrover__msg__ScienceThermistors__rosidl_typesupport_introspection_c__ScienceThermistors_message_type_support_handle.typesupport_identifier) {
    mrover__msg__ScienceThermistors__rosidl_typesupport_introspection_c__ScienceThermistors_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrover__msg__ScienceThermistors__rosidl_typesupport_introspection_c__ScienceThermistors_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
