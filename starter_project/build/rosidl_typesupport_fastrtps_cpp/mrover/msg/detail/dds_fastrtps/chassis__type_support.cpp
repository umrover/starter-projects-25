// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mrover:msg/Chassis.idl
// generated code does not contain a copyright notice
#include "mrover/msg/detail/chassis__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mrover/msg/detail/chassis__struct.hpp"

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
  const mrover::msg::Chassis & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: omega_r
  cdr << ros_message.omega_r;
  // Member: omega_l
  cdr << ros_message.omega_l;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrover
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mrover::msg::Chassis & ros_message)
{
  // Member: omega_r
  cdr >> ros_message.omega_r;

  // Member: omega_l
  cdr >> ros_message.omega_l;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrover
get_serialized_size(
  const mrover::msg::Chassis & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: omega_r
  {
    size_t item_size = sizeof(ros_message.omega_r);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: omega_l
  {
    size_t item_size = sizeof(ros_message.omega_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrover
max_serialized_size_Chassis(
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


  // Member: omega_r
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: omega_l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrover::msg::Chassis;
    is_plain =
      (
      offsetof(DataType, omega_l) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Chassis__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mrover::msg::Chassis *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Chassis__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mrover::msg::Chassis *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Chassis__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mrover::msg::Chassis *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Chassis__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Chassis(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Chassis__callbacks = {
  "mrover::msg",
  "Chassis",
  _Chassis__cdr_serialize,
  _Chassis__cdr_deserialize,
  _Chassis__get_serialized_size,
  _Chassis__max_serialized_size
};

static rosidl_message_type_support_t _Chassis__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Chassis__callbacks,
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
get_message_type_support_handle<mrover::msg::Chassis>()
{
  return &mrover::msg::typesupport_fastrtps_cpp::_Chassis__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrover, msg, Chassis)() {
  return &mrover::msg::typesupport_fastrtps_cpp::_Chassis__handle;
}

#ifdef __cplusplus
}
#endif
