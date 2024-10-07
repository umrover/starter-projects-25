// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrover:msg/ImageTargets.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__IMAGE_TARGETS__BUILDER_HPP_
#define MROVER__MSG__DETAIL__IMAGE_TARGETS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrover/msg/detail/image_targets__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrover
{

namespace msg
{

namespace builder
{

class Init_ImageTargets_targets
{
public:
  Init_ImageTargets_targets()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrover::msg::ImageTargets targets(::mrover::msg::ImageTargets::_targets_type arg)
  {
    msg_.targets = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrover::msg::ImageTargets msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrover::msg::ImageTargets>()
{
  return mrover::msg::builder::Init_ImageTargets_targets();
}

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__IMAGE_TARGETS__BUILDER_HPP_
