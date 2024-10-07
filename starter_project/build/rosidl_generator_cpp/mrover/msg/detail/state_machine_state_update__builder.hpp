// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrover:msg/StateMachineStateUpdate.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__STATE_MACHINE_STATE_UPDATE__BUILDER_HPP_
#define MROVER__MSG__DETAIL__STATE_MACHINE_STATE_UPDATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrover/msg/detail/state_machine_state_update__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrover
{

namespace msg
{

namespace builder
{

class Init_StateMachineStateUpdate_state
{
public:
  explicit Init_StateMachineStateUpdate_state(::mrover::msg::StateMachineStateUpdate & msg)
  : msg_(msg)
  {}
  ::mrover::msg::StateMachineStateUpdate state(::mrover::msg::StateMachineStateUpdate::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrover::msg::StateMachineStateUpdate msg_;
};

class Init_StateMachineStateUpdate_state_machine_name
{
public:
  Init_StateMachineStateUpdate_state_machine_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StateMachineStateUpdate_state state_machine_name(::mrover::msg::StateMachineStateUpdate::_state_machine_name_type arg)
  {
    msg_.state_machine_name = std::move(arg);
    return Init_StateMachineStateUpdate_state(msg_);
  }

private:
  ::mrover::msg::StateMachineStateUpdate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrover::msg::StateMachineStateUpdate>()
{
  return mrover::msg::builder::Init_StateMachineStateUpdate_state_machine_name();
}

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__STATE_MACHINE_STATE_UPDATE__BUILDER_HPP_
