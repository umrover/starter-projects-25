// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrover:msg/RTKStatus.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__RTK_STATUS__TRAITS_HPP_
#define MROVER__MSG__DETAIL__RTK_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrover/msg/detail/rtk_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrover
{

namespace msg
{

inline void to_flow_style_yaml(
  const RTKStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: fix_type
  {
    out << "fix_type: ";
    rosidl_generator_traits::value_to_yaml(msg.fix_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RTKStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fix_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fix_type: ";
    rosidl_generator_traits::value_to_yaml(msg.fix_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RTKStatus & msg, bool use_flow_style = false)
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
  const mrover::msg::RTKStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrover::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrover::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrover::msg::RTKStatus & msg)
{
  return mrover::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrover::msg::RTKStatus>()
{
  return "mrover::msg::RTKStatus";
}

template<>
inline const char * name<mrover::msg::RTKStatus>()
{
  return "mrover/msg/RTKStatus";
}

template<>
struct has_fixed_size<mrover::msg::RTKStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mrover::msg::RTKStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mrover::msg::RTKStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MROVER__MSG__DETAIL__RTK_STATUS__TRAITS_HPP_
