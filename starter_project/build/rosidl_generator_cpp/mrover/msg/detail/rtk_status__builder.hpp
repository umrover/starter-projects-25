// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrover:msg/RTKStatus.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__RTK_STATUS__BUILDER_HPP_
#define MROVER__MSG__DETAIL__RTK_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrover/msg/detail/rtk_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrover
{

namespace msg
{

namespace builder
{

class Init_RTKStatus_fix_type
{
public:
  Init_RTKStatus_fix_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrover::msg::RTKStatus fix_type(::mrover::msg::RTKStatus::_fix_type_type arg)
  {
    msg_.fix_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrover::msg::RTKStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrover::msg::RTKStatus>()
{
  return mrover::msg::builder::Init_RTKStatus_fix_type();
}

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__RTK_STATUS__BUILDER_HPP_
