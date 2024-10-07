// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrover:msg/PDLB.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__PDLB__TRAITS_HPP_
#define MROVER__MSG__DETAIL__PDLB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrover/msg/detail/pdlb__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrover
{

namespace msg
{

inline void to_flow_style_yaml(
  const PDLB & msg,
  std::ostream & out)
{
  out << "{";
  // member: temperatures
  {
    if (msg.temperatures.size() == 0) {
      out << "temperatures: []";
    } else {
      out << "temperatures: [";
      size_t pending_items = msg.temperatures.size();
      for (auto item : msg.temperatures) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: currents
  {
    if (msg.currents.size() == 0) {
      out << "currents: []";
    } else {
      out << "currents: [";
      size_t pending_items = msg.currents.size();
      for (auto item : msg.currents) {
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
  const PDLB & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: temperatures
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.temperatures.size() == 0) {
      out << "temperatures: []\n";
    } else {
      out << "temperatures:\n";
      for (auto item : msg.temperatures) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: currents
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.currents.size() == 0) {
      out << "currents: []\n";
    } else {
      out << "currents:\n";
      for (auto item : msg.currents) {
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

inline std::string to_yaml(const PDLB & msg, bool use_flow_style = false)
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
  const mrover::msg::PDLB & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrover::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrover::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrover::msg::PDLB & msg)
{
  return mrover::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrover::msg::PDLB>()
{
  return "mrover::msg::PDLB";
}

template<>
inline const char * name<mrover::msg::PDLB>()
{
  return "mrover/msg/PDLB";
}

template<>
struct has_fixed_size<mrover::msg::PDLB>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mrover::msg::PDLB>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mrover::msg::PDLB>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MROVER__MSG__DETAIL__PDLB__TRAITS_HPP_
