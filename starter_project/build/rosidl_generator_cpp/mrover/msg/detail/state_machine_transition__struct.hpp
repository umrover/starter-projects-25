// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrover:msg/StateMachineTransition.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__STATE_MACHINE_TRANSITION__STRUCT_HPP_
#define MROVER__MSG__DETAIL__STATE_MACHINE_TRANSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrover__msg__StateMachineTransition __attribute__((deprecated))
#else
# define DEPRECATED__mrover__msg__StateMachineTransition __declspec(deprecated)
#endif

namespace mrover
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StateMachineTransition_
{
  using Type = StateMachineTransition_<ContainerAllocator>;

  explicit StateMachineTransition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->origin = "";
    }
  }

  explicit StateMachineTransition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : origin(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->origin = "";
    }
  }

  // field types and members
  using _origin_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _origin_type origin;
  using _destinations_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _destinations_type destinations;

  // setters for named parameter idiom
  Type & set__origin(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->origin = _arg;
    return *this;
  }
  Type & set__destinations(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->destinations = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrover::msg::StateMachineTransition_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrover::msg::StateMachineTransition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrover::msg::StateMachineTransition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrover::msg::StateMachineTransition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrover::msg::StateMachineTransition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::StateMachineTransition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrover::msg::StateMachineTransition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::StateMachineTransition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrover::msg::StateMachineTransition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrover::msg::StateMachineTransition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrover__msg__StateMachineTransition
    std::shared_ptr<mrover::msg::StateMachineTransition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrover__msg__StateMachineTransition
    std::shared_ptr<mrover::msg::StateMachineTransition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StateMachineTransition_ & other) const
  {
    if (this->origin != other.origin) {
      return false;
    }
    if (this->destinations != other.destinations) {
      return false;
    }
    return true;
  }
  bool operator!=(const StateMachineTransition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StateMachineTransition_

// alias to use template instance with default allocator
using StateMachineTransition =
  mrover::msg::StateMachineTransition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__STATE_MACHINE_TRANSITION__STRUCT_HPP_
