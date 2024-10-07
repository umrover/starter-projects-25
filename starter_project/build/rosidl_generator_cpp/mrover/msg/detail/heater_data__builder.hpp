// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrover:msg/HeaterData.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__HEATER_DATA__BUILDER_HPP_
#define MROVER__MSG__DETAIL__HEATER_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrover/msg/detail/heater_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrover
{

namespace msg
{

namespace builder
{

class Init_HeaterData_state
{
public:
  Init_HeaterData_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrover::msg::HeaterData state(::mrover::msg::HeaterData::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrover::msg::HeaterData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrover::msg::HeaterData>()
{
  return mrover::msg::builder::Init_HeaterData_state();
}

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__HEATER_DATA__BUILDER_HPP_
