// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrover:msg/Throttle.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__THROTTLE__TRAITS_HPP_
#define MROVER__MSG__DETAIL__THROTTLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrover/msg/detail/throttle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrover
{

namespace msg
{

inline void to_flow_style_yaml(
  const Throttle & msg,
  std::ostream & out)
{
  out << "{";
  // member: names
  {
    if (msg.names.size() == 0) {
      out << "names: []";
    } else {
      out << "names: [";
      size_t pending_items = msg.names.size();
      for (auto item : msg.names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: throttles
  {
    if (msg.throttles.size() == 0) {
      out << "throttles: []";
    } else {
      out << "throttles: [";
      size_t pending_items = msg.throttles.size();
      for (auto item : msg.throttles) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Throttle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.names.size() == 0) {
      out << "names: []\n";
    } else {
      out << "names:\n";
      for (auto item : msg.names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: throttles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.throttles.size() == 0) {
      out << "throttles: []\n";
    } else {
      out << "throttles:\n";
      for (auto item : msg.throttles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Throttle & msg, bool use_flow_style = false)
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
  const mrover::msg::Throttle & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrover::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrover::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrover::msg::Throttle & msg)
{
  return mrover::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrover::msg::Throttle>()
{
  return "mrover::msg::Throttle";
}

template<>
inline const char * name<mrover::msg::Throttle>()
{
  return "mrover/msg/Throttle";
}

template<>
struct has_fixed_size<mrover::msg::Throttle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrover::msg::Throttle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrover::msg::Throttle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MROVER__MSG__DETAIL__THROTTLE__TRAITS_HPP_
