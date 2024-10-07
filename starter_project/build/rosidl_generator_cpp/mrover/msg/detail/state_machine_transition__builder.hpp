// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrover:msg/StateMachineTransition.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__STATE_MACHINE_TRANSITION__BUILDER_HPP_
#define MROVER__MSG__DETAIL__STATE_MACHINE_TRANSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrover/msg/detail/state_machine_transition__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrover
{

namespace msg
{

namespace builder
{

class Init_StateMachineTransition_destinations
{
public:
  explicit Init_StateMachineTransition_destinations(::mrover::msg::StateMachineTransition & msg)
  : msg_(msg)
  {}
  ::mrover::msg::StateMachineTransition destinations(::mrover::msg::StateMachineTransition::_destinations_type arg)
  {
    msg_.destinations = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrover::msg::StateMachineTransition msg_;
};

class Init_StateMachineTransition_origin
{
public:
  Init_StateMachineTransition_origin()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StateMachineTransition_destinations origin(::mrover::msg::StateMachineTransition::_origin_type arg)
  {
    msg_.origin = std::move(arg);
    return Init_StateMachineTransition_destinations(msg_);
  }

private:
  ::mrover::msg::StateMachineTransition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrover::msg::StateMachineTransition>()
{
  return mrover::msg::builder::Init_StateMachineTransition_origin();
}

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__STATE_MACHINE_TRANSITION__BUILDER_HPP_
