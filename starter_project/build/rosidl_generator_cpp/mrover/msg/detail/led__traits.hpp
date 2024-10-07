// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrover:msg/LED.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__LED__TRAITS_HPP_
#define MROVER__MSG__DETAIL__LED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrover/msg/detail/led__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrover
{

namespace msg
{

inline void to_flow_style_yaml(
  const LED & msg,
  std::ostream & out)
{
  out << "{";
  // member: red
  {
    out << "red: ";
    rosidl_generator_traits::value_to_yaml(msg.red, out);
    out << ", ";
  }

  // member: green
  {
    out << "green: ";
    rosidl_generator_traits::value_to_yaml(msg.green, out);
    out << ", ";
  }

  // member: blue
  {
    out << "blue: ";
    rosidl_generator_traits::value_to_yaml(msg.blue, out);
    out << ", ";
  }

  // member: is_blinking
  {
    out << "is_blinking: ";
    rosidl_generator_traits::value_to_yaml(msg.is_blinking, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LED & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: red
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red: ";
    rosidl_generator_traits::value_to_yaml(msg.red, out);
    out << "\n";
  }

  // member: green
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "green: ";
    rosidl_generator_traits::value_to_yaml(msg.green, out);
    out << "\n";
  }

  // member: blue
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue: ";
    rosidl_generator_traits::value_to_yaml(msg.blue, out);
    out << "\n";
  }

  // member: is_blinking
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_blinking: ";
    rosidl_generator_traits::value_to_yaml(msg.is_blinking, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LED & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mrover

namespace rosidl_generator_traits
{

[[deprecated("use mrover::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrover::msg::LED & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrover::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrover::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrover::msg::LED & msg)
{
  return mrover::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrover::msg::LED>()
{
  return "mrover::msg::LED";
}

template<>
inline const char * name<mrover::msg::LED>()
{
  return "mrover/msg/LED";
}

template<>
struct has_fixed_size<mrover::msg::LED>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mrover::msg::LED>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mrover::msg::LED>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MROVER__MSG__DETAIL__LED__TRAITS_HPP_
