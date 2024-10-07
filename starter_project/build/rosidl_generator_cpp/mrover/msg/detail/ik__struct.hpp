// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrover:msg/IK.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__IK__STRUCT_HPP_
#define MROVER__MSG__DETAIL__IK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrover__msg__IK __attribute__((deprecated))
#else
# define DEPRECATED__mrover__msg__IK __declspec(deprecated)
#endif

namespace mrover
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IK_
{
  using Type = IK_<ContainerAllocator>;

  explicit IK_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_init)
  {
    (void)_init;
  }

  explicit IK_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _target_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _target_type target;

  // setters for named parameter idiom
  Type & set__target(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->target = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrover::msg::IK_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrover::msg::IK_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrover::msg::IK_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrover::msg::IK_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrover::msg::IK_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::IK_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrover::msg::IK_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::IK_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrover::msg::IK_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrover::msg::IK_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrover__msg__IK
    std::shared_ptr<mrover::msg::IK_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrover__msg__IK
    std::shared_ptr<mrover::msg::IK_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IK_ & other) const
  {
    if (this->target != other.target) {
      return false;
    }
    return true;
  }
  bool operator!=(const IK_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IK_

// alias to use template instance with default allocator
using IK =
  mrover::msg::IK_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__IK__STRUCT_HPP_
