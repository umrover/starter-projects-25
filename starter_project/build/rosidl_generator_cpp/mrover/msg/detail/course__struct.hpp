// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrover:msg/Course.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__COURSE__STRUCT_HPP_
#define MROVER__MSG__DETAIL__COURSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'waypoints'
#include "mrover/msg/detail/waypoint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrover__msg__Course __attribute__((deprecated))
#else
# define DEPRECATED__mrover__msg__Course __declspec(deprecated)
#endif

namespace mrover
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Course_
{
  using Type = Course_<ContainerAllocator>;

  explicit Course_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Course_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _waypoints_type =
    std::vector<mrover::msg::Waypoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrover::msg::Waypoint_<ContainerAllocator>>>;
  _waypoints_type waypoints;

  // setters for named parameter idiom
  Type & set__waypoints(
    const std::vector<mrover::msg::Waypoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrover::msg::Waypoint_<ContainerAllocator>>> & _arg)
  {
    this->waypoints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrover::msg::Course_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrover::msg::Course_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrover::msg::Course_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrover::msg::Course_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrover::msg::Course_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::Course_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrover::msg::Course_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::Course_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrover::msg::Course_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrover::msg::Course_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrover__msg__Course
    std::shared_ptr<mrover::msg::Course_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrover__msg__Course
    std::shared_ptr<mrover::msg::Course_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Course_ & other) const
  {
    if (this->waypoints != other.waypoints) {
      return false;
    }
    return true;
  }
  bool operator!=(const Course_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Course_

// alias to use template instance with default allocator
using Course =
  mrover::msg::Course_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__COURSE__STRUCT_HPP_
