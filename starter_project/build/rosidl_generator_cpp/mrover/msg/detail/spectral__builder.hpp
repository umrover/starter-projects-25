// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrover:msg/Spectral.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__SPECTRAL__BUILDER_HPP_
#define MROVER__MSG__DETAIL__SPECTRAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrover/msg/detail/spectral__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrover
{

namespace msg
{

namespace builder
{

class Init_Spectral_error
{
public:
  explicit Init_Spectral_error(::mrover::msg::Spectral & msg)
  : msg_(msg)
  {}
  ::mrover::msg::Spectral error(::mrover::msg::Spectral::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrover::msg::Spectral msg_;
};

class Init_Spectral_data
{
public:
  explicit Init_Spectral_data(::mrover::msg::Spectral & msg)
  : msg_(msg)
  {}
  Init_Spectral_error data(::mrover::msg::Spectral::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_Spectral_error(msg_);
  }

private:
  ::mrover::msg::Spectral msg_;
};

class Init_Spectral_site
{
public:
  Init_Spectral_site()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Spectral_data site(::mrover::msg::Spectral::_site_type arg)
  {
    msg_.site = std::move(arg);
    return Init_Spectral_data(msg_);
  }

private:
  ::mrover::msg::Spectral msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrover::msg::Spectral>()
{
  return mrover::msg::builder::Init_Spectral_site();
}

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__SPECTRAL__BUILDER_HPP_
