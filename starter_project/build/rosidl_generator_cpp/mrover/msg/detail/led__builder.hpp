// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrover:msg/LED.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__LED__BUILDER_HPP_
#define MROVER__MSG__DETAIL__LED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrover/msg/detail/led__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrover
{

namespace msg
{

namespace builder
{

class Init_LED_is_blinking
{
public:
  explicit Init_LED_is_blinking(::mrover::msg::LED & msg)
  : msg_(msg)
  {}
  ::mrover::msg::LED is_blinking(::mrover::msg::LED::_is_blinking_type arg)
  {
    msg_.is_blinking = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrover::msg::LED msg_;
};

class Init_LED_blue
{
public:
  explicit Init_LED_blue(::mrover::msg::LED & msg)
  : msg_(msg)
  {}
  Init_LED_is_blinking blue(::mrover::msg::LED::_blue_type arg)
  {
    msg_.blue = std::move(arg);
    return Init_LED_is_blinking(msg_);
  }

private:
  ::mrover::msg::LED msg_;
};

class Init_LED_green
{
public:
  explicit Init_LED_green(::mrover::msg::LED & msg)
  : msg_(msg)
  {}
  Init_LED_blue green(::mrover::msg::LED::_green_type arg)
  {
    msg_.green = std::move(arg);
    return Init_LED_blue(msg_);
  }

private:
  ::mrover::msg::LED msg_;
};

class Init_LED_red
{
public:
  Init_LED_red()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LED_green red(::mrover::msg::LED::_red_type arg)
  {
    msg_.red = std::move(arg);
    return Init_LED_green(msg_);
  }

private:
  ::mrover::msg::LED msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrover::msg::LED>()
{
  return mrover::msg::builder::Init_LED_red();
}

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__LED__BUILDER_HPP_
