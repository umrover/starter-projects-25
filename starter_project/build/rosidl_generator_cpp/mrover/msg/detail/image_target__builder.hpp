// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrover:msg/ImageTarget.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__IMAGE_TARGET__BUILDER_HPP_
#define MROVER__MSG__DETAIL__IMAGE_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrover/msg/detail/image_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrover
{

namespace msg
{

namespace builder
{

class Init_ImageTarget_bearing
{
public:
  explicit Init_ImageTarget_bearing(::mrover::msg::ImageTarget & msg)
  : msg_(msg)
  {}
  ::mrover::msg::ImageTarget bearing(::mrover::msg::ImageTarget::_bearing_type arg)
  {
    msg_.bearing = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrover::msg::ImageTarget msg_;
};

class Init_ImageTarget_name
{
public:
  Init_ImageTarget_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageTarget_bearing name(::mrover::msg::ImageTarget::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ImageTarget_bearing(msg_);
  }

private:
  ::mrover::msg::ImageTarget msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrover::msg::ImageTarget>()
{
  return mrover::msg::builder::Init_ImageTarget_name();
}

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__IMAGE_TARGET__BUILDER_HPP_
