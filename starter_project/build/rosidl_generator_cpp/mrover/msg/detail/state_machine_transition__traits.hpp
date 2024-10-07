// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrover:msg/StateMachineTransition.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__STATE_MACHINE_TRANSITION__TRAITS_HPP_
#define MROVER__MSG__DETAIL__STATE_MACHINE_TRANSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrover/msg/detail/state_machine_transition__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrover
{

namespace msg
{

inline void to_flow_style_yaml(
  const StateMachineTransition & msg,
  std::ostream & out)
{
  out << "{";
  // member: origin
  {
    out << "origin: ";
    rosidl_generator_traits::value_to_yaml(msg.origin, out);
    out << ", ";
  }

  // member: destinations
  {
    if (msg.destinations.size() == 0) {
      out << "destinations: []";
    } else {
      out << "destinations: [";
      size_t pending_items = msg.destinations.size();
      for (auto item : msg.destinations) {
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
  const StateMachineTransition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: origin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin: ";
    rosidl_generator_traits::value_to_yaml(msg.origin, out);
    out << "\n";
  }

  // member: destinations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.destinations.size() == 0) {
      out << "destinations: []\n";
    } else {
      out << "destinations:\n";
      for (auto item : msg.destinations) {
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

inline std::string to_yaml(const StateMachineTransition & msg, bool use_flow_style = false)
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
  const mrover::msg::StateMachineTransition & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrover::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrover::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrover::msg::StateMachineTransition & msg)
{
  return mrover::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrover::msg::StateMachineTransition>()
{
  return "mrover::msg::StateMachineTransition";
}

template<>
inline const char * name<mrover::msg::StateMachineTransition>()
{
  return "mrover/msg/StateMachineTransition";
}

template<>
struct has_fixed_size<mrover::msg::StateMachineTransition>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrover::msg::StateMachineTransition>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrover::msg::StateMachineTransition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MROVER__MSG__DETAIL__STATE_MACHINE_TRANSITION__TRAITS_HPP_
