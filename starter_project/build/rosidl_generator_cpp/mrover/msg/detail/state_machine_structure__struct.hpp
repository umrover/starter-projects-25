// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrover:msg/StateMachineStructure.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__STATE_MACHINE_STRUCTURE__STRUCT_HPP_
#define MROVER__MSG__DETAIL__STATE_MACHINE_STRUCTURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'transitions'
#include "mrover/msg/detail/state_machine_transition__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrover__msg__StateMachineStructure __attribute__((deprecated))
#else
# define DEPRECATED__mrover__msg__StateMachineStructure __declspec(deprecated)
#endif

namespace mrover
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StateMachineStructure_
{
  using Type = StateMachineStructure_<ContainerAllocator>;

  explicit StateMachineStructure_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->machine_name = "";
    }
  }

  explicit StateMachineStructure_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : machine_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->machine_name = "";
    }
  }

  // field types and members
  using _machine_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _machine_name_type machine_name;
  using _transitions_type =
    std::vector<mrover::msg::StateMachineTransition_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrover::msg::StateMachineTransition_<ContainerAllocator>>>;
  _transitions_type transitions;

  // setters for named parameter idiom
  Type & set__machine_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->machine_name = _arg;
    return *this;
  }
  Type & set__transitions(
    const std::vector<mrover::msg::StateMachineTransition_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrover::msg::StateMachineTransition_<ContainerAllocator>>> & _arg)
  {
    this->transitions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrover::msg::StateMachineStructure_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrover::msg::StateMachineStructure_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrover::msg::StateMachineStructure_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrover::msg::StateMachineStructure_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrover::msg::StateMachineStructure_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::StateMachineStructure_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrover::msg::StateMachineStructure_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::StateMachineStructure_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrover::msg::StateMachineStructure_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrover::msg::StateMachineStructure_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrover__msg__StateMachineStructure
    std::shared_ptr<mrover::msg::StateMachineStructure_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrover__msg__StateMachineStructure
    std::shared_ptr<mrover::msg::StateMachineStructure_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StateMachineStructure_ & other) const
  {
    if (this->machine_name != other.machine_name) {
      return false;
    }
    if (this->transitions != other.transitions) {
      return false;
    }
    return true;
  }
  bool operator!=(const StateMachineStructure_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StateMachineStructure_

// alias to use template instance with default allocator
using StateMachineStructure =
  mrover::msg::StateMachineStructure_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__STATE_MACHINE_STRUCTURE__STRUCT_HPP_
