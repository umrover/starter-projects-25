// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrover:msg/StateMachineStructure.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__STATE_MACHINE_STRUCTURE__BUILDER_HPP_
#define MROVER__MSG__DETAIL__STATE_MACHINE_STRUCTURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrover/msg/detail/state_machine_structure__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrover
{

namespace msg
{

namespace builder
{

class Init_StateMachineStructure_transitions
{
public:
  explicit Init_StateMachineStructure_transitions(::mrover::msg::StateMachineStructure & msg)
  : msg_(msg)
  {}
  ::mrover::msg::StateMachineStructure transitions(::mrover::msg::StateMachineStructure::_transitions_type arg)
  {
    msg_.transitions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrover::msg::StateMachineStructure msg_;
};

class Init_StateMachineStructure_machine_name
{
public:
  Init_StateMachineStructure_machine_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StateMachineStructure_transitions machine_name(::mrover::msg::StateMachineStructure::_machine_name_type arg)
  {
    msg_.machine_name = std::move(arg);
    return Init_StateMachineStructure_transitions(msg_);
  }

private:
  ::mrover::msg::StateMachineStructure msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrover::msg::StateMachineStructure>()
{
  return mrover::msg::builder::Init_StateMachineStructure_machine_name();
}

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__STATE_MACHINE_STRUCTURE__BUILDER_HPP_
