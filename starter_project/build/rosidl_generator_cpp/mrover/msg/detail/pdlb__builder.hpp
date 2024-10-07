// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrover:msg/PDLB.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__PDLB__BUILDER_HPP_
#define MROVER__MSG__DETAIL__PDLB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrover/msg/detail/pdlb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrover
{

namespace msg
{

namespace builder
{

class Init_PDLB_currents
{
public:
  explicit Init_PDLB_currents(::mrover::msg::PDLB & msg)
  : msg_(msg)
  {}
  ::mrover::msg::PDLB currents(::mrover::msg::PDLB::_currents_type arg)
  {
    msg_.currents = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrover::msg::PDLB msg_;
};

class Init_PDLB_temperatures
{
public:
  Init_PDLB_temperatures()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PDLB_currents temperatures(::mrover::msg::PDLB::_temperatures_type arg)
  {
    msg_.temperatures = std::move(arg);
    return Init_PDLB_currents(msg_);
  }

private:
  ::mrover::msg::PDLB msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrover::msg::PDLB>()
{
  return mrover::msg::builder::Init_PDLB_temperatures();
}

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__PDLB__BUILDER_HPP_
