// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrover:msg/StateMachineStateUpdate.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__STATE_MACHINE_STATE_UPDATE__STRUCT_HPP_
#define MROVER__MSG__DETAIL__STATE_MACHINE_STATE_UPDATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrover__msg__StateMachineStateUpdate __attribute__((deprecated))
#else
# define DEPRECATED__mrover__msg__StateMachineStateUpdate __declspec(deprecated)
#endif

namespace mrover
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StateMachineStateUpdate_
{
  using Type = StateMachineStateUpdate_<ContainerAllocator>;

  explicit StateMachineStateUpdate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state_machine_name = "";
      this->state = "";
    }
  }

  explicit StateMachineStateUpdate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state_machine_name(_alloc),
    state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state_machine_name = "";
      this->state = "";
    }
  }

  // field types and members
  using _state_machine_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_machine_name_type state_machine_name;
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state_machine_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state_machine_name = _arg;
    return *this;
  }
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrover::msg::StateMachineStateUpdate_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrover::msg::StateMachineStateUpdate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrover::msg::StateMachineStateUpdate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrover::msg::StateMachineStateUpdate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrover::msg::StateMachineStateUpdate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::StateMachineStateUpdate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrover::msg::StateMachineStateUpdate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::StateMachineStateUpdate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrover::msg::StateMachineStateUpdate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrover::msg::StateMachineStateUpdate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrover__msg__StateMachineStateUpdate
    std::shared_ptr<mrover::msg::StateMachineStateUpdate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrover__msg__StateMachineStateUpdate
    std::shared_ptr<mrover::msg::StateMachineStateUpdate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StateMachineStateUpdate_ & other) const
  {
    if (this->state_machine_name != other.state_machine_name) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const StateMachineStateUpdate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StateMachineStateUpdate_

// alias to use template instance with default allocator
using StateMachineStateUpdate =
  mrover::msg::StateMachineStateUpdate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__STATE_MACHINE_STATE_UPDATE__STRUCT_HPP_
