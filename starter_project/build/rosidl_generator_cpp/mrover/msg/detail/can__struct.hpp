// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrover:msg/CAN.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__CAN__STRUCT_HPP_
#define MROVER__MSG__DETAIL__CAN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrover__msg__CAN __attribute__((deprecated))
#else
# define DEPRECATED__mrover__msg__CAN __declspec(deprecated)
#endif

namespace mrover
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CAN_
{
  using Type = CAN_<ContainerAllocator>;

  explicit CAN_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source = "";
      this->destination = "";
      this->reply_required = false;
    }
  }

  explicit CAN_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : source(_alloc),
    destination(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source = "";
      this->destination = "";
      this->reply_required = false;
    }
  }

  // field types and members
  using _source_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _source_type source;
  using _destination_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _destination_type destination;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;
  using _reply_required_type =
    bool;
  _reply_required_type reply_required;

  // setters for named parameter idiom
  Type & set__source(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__destination(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->destination = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__reply_required(
    const bool & _arg)
  {
    this->reply_required = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrover::msg::CAN_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrover::msg::CAN_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrover::msg::CAN_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrover::msg::CAN_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrover::msg::CAN_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::CAN_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrover::msg::CAN_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::CAN_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrover::msg::CAN_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrover::msg::CAN_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrover__msg__CAN
    std::shared_ptr<mrover::msg::CAN_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrover__msg__CAN
    std::shared_ptr<mrover::msg::CAN_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CAN_ & other) const
  {
    if (this->source != other.source) {
      return false;
    }
    if (this->destination != other.destination) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->reply_required != other.reply_required) {
      return false;
    }
    return true;
  }
  bool operator!=(const CAN_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CAN_

// alias to use template instance with default allocator
using CAN =
  mrover::msg::CAN_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__CAN__STRUCT_HPP_
