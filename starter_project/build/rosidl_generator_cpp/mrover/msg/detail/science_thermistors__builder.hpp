// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrover:msg/ScienceThermistors.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__SCIENCE_THERMISTORS__BUILDER_HPP_
#define MROVER__MSG__DETAIL__SCIENCE_THERMISTORS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrover/msg/detail/science_thermistors__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrover
{

namespace msg
{

namespace builder
{

class Init_ScienceThermistors_temps
{
public:
  Init_ScienceThermistors_temps()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrover::msg::ScienceThermistors temps(::mrover::msg::ScienceThermistors::_temps_type arg)
  {
    msg_.temps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrover::msg::ScienceThermistors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrover::msg::ScienceThermistors>()
{
  return mrover::msg::builder::Init_ScienceThermistors_temps();
}

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__SCIENCE_THERMISTORS__BUILDER_HPP_
