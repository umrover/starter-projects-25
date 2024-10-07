// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrover:msg/ImageTarget.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__IMAGE_TARGET__TRAITS_HPP_
#define MROVER__MSG__DETAIL__IMAGE_TARGET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrover/msg/detail/image_target__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrover
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImageTarget & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: bearing
  {
    out << "bearing: ";
    rosidl_generator_traits::value_to_yaml(msg.bearing, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImageTarget & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: bearing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bearing: ";
    rosidl_generator_traits::value_to_yaml(msg.bearing, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImageTarget & msg, bool use_flow_style = false)
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
  const mrover::msg::ImageTarget & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrover::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrover::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrover::msg::ImageTarget & msg)
{
  return mrover::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrover::msg::ImageTarget>()
{
  return "mrover::msg::ImageTarget";
}

template<>
inline const char * name<mrover::msg::ImageTarget>()
{
  return "mrover/msg/ImageTarget";
}

template<>
struct has_fixed_size<mrover::msg::ImageTarget>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrover::msg::ImageTarget>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrover::msg::ImageTarget>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MROVER__MSG__DETAIL__IMAGE_TARGET__TRAITS_HPP_
