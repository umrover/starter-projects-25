// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrover:msg/Velocity.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__VELOCITY__STRUCT_HPP_
#define MROVER__MSG__DETAIL__VELOCITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrover__msg__Velocity __attribute__((deprecated))
#else
# define DEPRECATED__mrover__msg__Velocity __declspec(deprecated)
#endif

namespace mrover
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Velocity_
{
  using Type = Velocity_<ContainerAllocator>;

  explicit Velocity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Velocity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _names_type names;
  using _velocities_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _velocities_type velocities;

  // setters for named parameter idiom
  Type & set__names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->names = _arg;
    return *this;
  }
  Type & set__velocities(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->velocities = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrover::msg::Velocity_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrover::msg::Velocity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrover::msg::Velocity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrover::msg::Velocity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrover::msg::Velocity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::Velocity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrover::msg::Velocity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::Velocity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrover::msg::Velocity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrover::msg::Velocity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrover__msg__Velocity
    std::shared_ptr<mrover::msg::Velocity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrover__msg__Velocity
    std::shared_ptr<mrover::msg::Velocity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Velocity_ & other) const
  {
    if (this->names != other.names) {
      return false;
    }
    if (this->velocities != other.velocities) {
      return false;
    }
    return true;
  }
  bool operator!=(const Velocity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Velocity_

// alias to use template instance with default allocator
using Velocity =
  mrover::msg::Velocity_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__VELOCITY__STRUCT_HPP_
