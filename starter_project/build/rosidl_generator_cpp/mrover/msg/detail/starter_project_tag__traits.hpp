// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrover:msg/StarterProjectTag.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__STARTER_PROJECT_TAG__TRAITS_HPP_
#define MROVER__MSG__DETAIL__STARTER_PROJECT_TAG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrover/msg/detail/starter_project_tag__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrover
{

namespace msg
{

inline void to_flow_style_yaml(
  const StarterProjectTag & msg,
  std::ostream & out)
{
  out << "{";
  // member: tag_id
  {
    out << "tag_id: ";
    rosidl_generator_traits::value_to_yaml(msg.tag_id, out);
    out << ", ";
  }

  // member: x_tag_center_pixel
  {
    out << "x_tag_center_pixel: ";
    rosidl_generator_traits::value_to_yaml(msg.x_tag_center_pixel, out);
    out << ", ";
  }

  // member: y_tag_center_pixel
  {
    out << "y_tag_center_pixel: ";
    rosidl_generator_traits::value_to_yaml(msg.y_tag_center_pixel, out);
    out << ", ";
  }

  // member: closeness_metric
  {
    out << "closeness_metric: ";
    rosidl_generator_traits::value_to_yaml(msg.closeness_metric, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StarterProjectTag & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tag_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tag_id: ";
    rosidl_generator_traits::value_to_yaml(msg.tag_id, out);
    out << "\n";
  }

  // member: x_tag_center_pixel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_tag_center_pixel: ";
    rosidl_generator_traits::value_to_yaml(msg.x_tag_center_pixel, out);
    out << "\n";
  }

  // member: y_tag_center_pixel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_tag_center_pixel: ";
    rosidl_generator_traits::value_to_yaml(msg.y_tag_center_pixel, out);
    out << "\n";
  }

  // member: closeness_metric
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "closeness_metric: ";
    rosidl_generator_traits::value_to_yaml(msg.closeness_metric, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StarterProjectTag & msg, bool use_flow_style = false)
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
  const mrover::msg::StarterProjectTag & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrover::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrover::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrover::msg::StarterProjectTag & msg)
{
  return mrover::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrover::msg::StarterProjectTag>()
{
  return "mrover::msg::StarterProjectTag";
}

template<>
inline const char * name<mrover::msg::StarterProjectTag>()
{
  return "mrover/msg/StarterProjectTag";
}

template<>
struct has_fixed_size<mrover::msg::StarterProjectTag>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mrover::msg::StarterProjectTag>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mrover::msg::StarterProjectTag>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MROVER__MSG__DETAIL__STARTER_PROJECT_TAG__TRAITS_HPP_
