// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mrover:msg/LED.idl
// generated code does not contain a copyright notice
#include "mrover/msg/detail/led__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mrover/msg/detail/led__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace mrover
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrover
cdr_serialize(
  const mrover::msg::LED & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: red
  cdr << (ros_message.red ? true : false);
  // Member: green
  cdr << (ros_message.green ? true : false);
  // Member: blue
  cdr << (ros_message.blue ? true : false);
  // Member: is_blinking
  cdr << (ros_message.is_blinking ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrover
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mrover::msg::LED & ros_message)
{
  // Member: red
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.red = tmp ? true : false;
  }

  // Member: green
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.green = tmp ? true : false;
  }

  // Member: blue
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.blue = tmp ? true : false;
  }

  // Member: is_blinking
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_blinking = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrover
get_serialized_size(
  const mrover::msg::LED & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: red
  {
    size_t item_size = sizeof(ros_message.red);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: green
  {
    size_t item_size = sizeof(ros_message.green);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blue
  {
    size_t item_size = sizeof(ros_message.blue);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_blinking
  {
    size_t item_size = sizeof(ros_message.is_blinking);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrover
max_serialized_size_LED(
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


  // Member: red
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: green
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: blue
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_blinking
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
    using DataType = mrover::msg::LED;
    is_plain =
      (
      offsetof(DataType, is_blinking) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _LED__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mrover::msg::LED *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LED__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mrover::msg::LED *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LED__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mrover::msg::LED *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LED__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LED(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LED__callbacks = {
  "mrover::msg",
  "LED",
  _LED__cdr_serialize,
  _LED__cdr_deserialize,
  _LED__get_serialized_size,
  _LED__max_serialized_size
};

static rosidl_message_type_support_t _LED__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LED__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mrover

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mrover
const rosidl_message_type_support_t *
get_message_type_support_handle<mrover::msg::LED>()
{
  return &mrover::msg::typesupport_fastrtps_cpp::_LED__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrover, msg, LED)() {
  return &mrover::msg::typesupport_fastrtps_cpp::_LED__handle;
}

#ifdef __cplusplus
}
#endif
