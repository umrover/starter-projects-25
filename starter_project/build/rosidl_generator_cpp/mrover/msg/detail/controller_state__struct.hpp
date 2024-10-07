// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrover:msg/ControllerState.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__CONTROLLER_STATE__STRUCT_HPP_
#define MROVER__MSG__DETAIL__CONTROLLER_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrover__msg__ControllerState __attribute__((deprecated))
#else
# define DEPRECATED__mrover__msg__ControllerState __declspec(deprecated)
#endif

namespace mrover
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControllerState_
{
  using Type = ControllerState_<ContainerAllocator>;

  explicit ControllerState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ControllerState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _name_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _name_type name;
  using _state_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _state_type state;
  using _error_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _error_type error;
  using _limit_hit_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _limit_hit_type limit_hit;

  // setters for named parameter idiom
  Type & set__name(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__state(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__error(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__limit_hit(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->limit_hit = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrover::msg::ControllerState_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrover::msg::ControllerState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrover::msg::ControllerState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrover::msg::ControllerState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrover::msg::ControllerState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::ControllerState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrover::msg::ControllerState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::ControllerState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrover::msg::ControllerState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrover::msg::ControllerState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrover__msg__ControllerState
    std::shared_ptr<mrover::msg::ControllerState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrover__msg__ControllerState
    std::shared_ptr<mrover::msg::ControllerState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControllerState_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->limit_hit != other.limit_hit) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControllerState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControllerState_

// alias to use template instance with default allocator
using ControllerState =
  mrover::msg::ControllerState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__CONTROLLER_STATE__STRUCT_HPP_
