// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrover:msg/IK.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__IK__TRAITS_HPP_
#define MROVER__MSG__DETAIL__IK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrover/msg/detail/ik__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace mrover
{

namespace msg
{

inline void to_flow_style_yaml(
  const IK & msg,
  std::ostream & out)
{
  out << "{";
  // member: target
  {
    out << "target: ";
    to_flow_style_yaml(msg.target, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IK & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target:\n";
    to_block_style_yaml(msg.target, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IK & msg, bool use_flow_style = false)
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
  const mrover::msg::IK & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrover::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrover::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrover::msg::IK & msg)
{
  return mrover::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrover::msg::IK>()
{
  return "mrover::msg::IK";
}

template<>
inline const char * name<mrover::msg::IK>()
{
  return "mrover/msg/IK";
}

template<>
struct has_fixed_size<mrover::msg::IK>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<mrover::msg::IK>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<mrover::msg::IK>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MROVER__MSG__DETAIL__IK__TRAITS_HPP_
