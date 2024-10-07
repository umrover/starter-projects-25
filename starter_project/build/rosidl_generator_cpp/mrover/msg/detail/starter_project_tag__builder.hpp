// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrover:msg/StarterProjectTag.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__STARTER_PROJECT_TAG__BUILDER_HPP_
#define MROVER__MSG__DETAIL__STARTER_PROJECT_TAG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrover/msg/detail/starter_project_tag__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrover
{

namespace msg
{

namespace builder
{

class Init_StarterProjectTag_closeness_metric
{
public:
  explicit Init_StarterProjectTag_closeness_metric(::mrover::msg::StarterProjectTag & msg)
  : msg_(msg)
  {}
  ::mrover::msg::StarterProjectTag closeness_metric(::mrover::msg::StarterProjectTag::_closeness_metric_type arg)
  {
    msg_.closeness_metric = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrover::msg::StarterProjectTag msg_;
};

class Init_StarterProjectTag_y_tag_center_pixel
{
public:
  explicit Init_StarterProjectTag_y_tag_center_pixel(::mrover::msg::StarterProjectTag & msg)
  : msg_(msg)
  {}
  Init_StarterProjectTag_closeness_metric y_tag_center_pixel(::mrover::msg::StarterProjectTag::_y_tag_center_pixel_type arg)
  {
    msg_.y_tag_center_pixel = std::move(arg);
    return Init_StarterProjectTag_closeness_metric(msg_);
  }

private:
  ::mrover::msg::StarterProjectTag msg_;
};

class Init_StarterProjectTag_x_tag_center_pixel
{
public:
  explicit Init_StarterProjectTag_x_tag_center_pixel(::mrover::msg::StarterProjectTag & msg)
  : msg_(msg)
  {}
  Init_StarterProjectTag_y_tag_center_pixel x_tag_center_pixel(::mrover::msg::StarterProjectTag::_x_tag_center_pixel_type arg)
  {
    msg_.x_tag_center_pixel = std::move(arg);
    return Init_StarterProjectTag_y_tag_center_pixel(msg_);
  }

private:
  ::mrover::msg::StarterProjectTag msg_;
};

class Init_StarterProjectTag_tag_id
{
public:
  Init_StarterProjectTag_tag_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StarterProjectTag_x_tag_center_pixel tag_id(::mrover::msg::StarterProjectTag::_tag_id_type arg)
  {
    msg_.tag_id = std::move(arg);
    return Init_StarterProjectTag_x_tag_center_pixel(msg_);
  }

private:
  ::mrover::msg::StarterProjectTag msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrover::msg::StarterProjectTag>()
{
  return mrover::msg::builder::Init_StarterProjectTag_tag_id();
}

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__STARTER_PROJECT_TAG__BUILDER_HPP_
