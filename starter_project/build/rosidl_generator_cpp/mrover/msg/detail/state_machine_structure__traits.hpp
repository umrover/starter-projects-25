// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrover:msg/StateMachineStructure.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__STATE_MACHINE_STRUCTURE__TRAITS_HPP_
#define MROVER__MSG__DETAIL__STATE_MACHINE_STRUCTURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrover/msg/detail/state_machine_structure__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'transitions'
#include "mrover/msg/detail/state_machine_transition__traits.hpp"

namespace mrover
{

namespace msg
{

inline void to_flow_style_yaml(
  const StateMachineStructure & msg,
  std::ostream & out)
{
  out << "{";
  // member: machine_name
  {
    out << "machine_name: ";
    rosidl_generator_traits::value_to_yaml(msg.machine_name, out);
    out << ", ";
  }

  // member: transitions
  {
    if (msg.transitions.size() == 0) {
      out << "transitions: []";
    } else {
      out << "transitions: [";
      size_t pending_items = msg.transitions.size();
      for (auto item : msg.transitions) {
        to_flow_style_yaml(item, out);
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
  const StateMachineStructure & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: machine_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "machine_name: ";
    rosidl_generator_traits::value_to_yaml(msg.machine_name, out);
    out << "\n";
  }

  // member: transitions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.transitions.size() == 0) {
      out << "transitions: []\n";
    } else {
      out << "transitions:\n";
      for (auto item : msg.transitions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StateMachineStructure & msg, bool use_flow_style = false)
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
  const mrover::msg::StateMachineStructure & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrover::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrover::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrover::msg::StateMachineStructure & msg)
{
  return mrover::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrover::msg::StateMachineStructure>()
{
  return "mrover::msg::StateMachineStructure";
}

template<>
inline const char * name<mrover::msg::StateMachineStructure>()
{
  return "mrover/msg/StateMachineStructure";
}

template<>
struct has_fixed_size<mrover::msg::StateMachineStructure>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrover::msg::StateMachineStructure>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrover::msg::StateMachineStructure>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MROVER__MSG__DETAIL__STATE_MACHINE_STRUCTURE__TRAITS_HPP_
