// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrover:msg/StateMachineStateUpdate.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__STATE_MACHINE_STATE_UPDATE__TRAITS_HPP_
#define MROVER__MSG__DETAIL__STATE_MACHINE_STATE_UPDATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrover/msg/detail/state_machine_state_update__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrover
{

namespace msg
{

inline void to_flow_style_yaml(
  const StateMachineStateUpdate & msg,
  std::ostream & out)
{
  out << "{";
  // member: state_machine_name
  {
    out << "state_machine_name: ";
    rosidl_generator_traits::value_to_yaml(msg.state_machine_name, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StateMachineStateUpdate & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state_machine_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_machine_name: ";
    rosidl_generator_traits::value_to_yaml(msg.state_machine_name, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StateMachineStateUpdate & msg, bool use_flow_style = false)
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
  const mrover::msg::StateMachineStateUpdate & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrover::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrover::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrover::msg::StateMachineStateUpdate & msg)
{
  return mrover::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrover::msg::StateMachineStateUpdate>()
{
  return "mrover::msg::StateMachineStateUpdate";
}

template<>
inline const char * name<mrover::msg::StateMachineStateUpdate>()
{
  return "mrover/msg/StateMachineStateUpdate";
}

template<>
struct has_fixed_size<mrover::msg::StateMachineStateUpdate>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrover::msg::StateMachineStateUpdate>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrover::msg::StateMachineStateUpdate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MROVER__MSG__DETAIL__STATE_MACHINE_STATE_UPDATE__TRAITS_HPP_
