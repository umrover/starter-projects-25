// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mrover:msg/LED.idl
// generated code does not contain a copyright notice
#include "mrover/msg/detail/led__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mrover/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrover/msg/detail/led__struct.h"
#include "mrover/msg/detail/led__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _LED__ros_msg_type = mrover__msg__LED;

static bool _LED__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LED__ros_msg_type * ros_message = static_cast<const _LED__ros_msg_type *>(untyped_ros_message);
  // Field name: red
  {
    cdr << (ros_message->red ? true : false);
  }

  // Field name: green
  {
    cdr << (ros_message->green ? true : false);
  }

  // Field name: blue
  {
    cdr << (ros_message->blue ? true : false);
  }

  // Field name: is_blinking
  {
    cdr << (ros_message->is_blinking ? true : false);
  }

  return true;
}

static bool _LED__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LED__ros_msg_type * ros_message = static_cast<_LED__ros_msg_type *>(untyped_ros_message);
  // Field name: red
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->red = tmp ? true : false;
  }

  // Field name: green
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->green = tmp ? true : false;
  }

  // Field name: blue
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->blue = tmp ? true : false;
  }

  // Field name: is_blinking
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_blinking = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrover
size_t get_serialized_size_mrover__msg__LED(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LED__ros_msg_type * ros_message = static_cast<const _LED__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name red
  {
    size_t item_size = sizeof(ros_message->red);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name green
  {
    size_t item_size = sizeof(ros_message->green);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue
  {
    size_t item_size = sizeof(ros_message->blue);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_blinking
  {
    size_t item_size = sizeof(ros_message->is_blinking);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LED__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mrover__msg__LED(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrover
size_t max_serialized_size_mrover__msg__LED(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: red
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: green
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: blue
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_blinking
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrover__msg__LED;
    is_plain =
      (
      offsetof(DataType, is_blinking) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _LED__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mrover__msg__LED(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LED = {
  "mrover::msg",
  "LED",
  _LED__cdr_serialize,
  _LED__cdr_deserialize,
  _LED__get_serialized_size,
  _LED__max_serialized_size
};

static rosidl_message_type_support_t _LED__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LED,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrover, msg, LED)() {
  return &_LED__type_support;
}

#if defined(__cplusplus)
}
#endif
