// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrover:msg/IK.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__IK__BUILDER_HPP_
#define MROVER__MSG__DETAIL__IK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrover/msg/detail/ik__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrover
{

namespace msg
{

namespace builder
{

class Init_IK_target
{
public:
  Init_IK_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrover::msg::IK target(::mrover::msg::IK::_target_type arg)
  {
    msg_.target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrover::msg::IK msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrover::msg::IK>()
{
  return mrover::msg::builder::Init_IK_target();
}

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__IK__BUILDER_HPP_
