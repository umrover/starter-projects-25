// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrover:msg/GPSPointList.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__GPS_POINT_LIST__STRUCT_HPP_
#define MROVER__MSG__DETAIL__GPS_POINT_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'points'
#include "mrover/msg/detail/gps_waypoint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrover__msg__GPSPointList __attribute__((deprecated))
#else
# define DEPRECATED__mrover__msg__GPSPointList __declspec(deprecated)
#endif

namespace mrover
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GPSPointList_
{
  using Type = GPSPointList_<ContainerAllocator>;

  explicit GPSPointList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GPSPointList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _points_type =
    std::vector<mrover::msg::GPSWaypoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrover::msg::GPSWaypoint_<ContainerAllocator>>>;
  _points_type points;

  // setters for named parameter idiom
  Type & set__points(
    const std::vector<mrover::msg::GPSWaypoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrover::msg::GPSWaypoint_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrover::msg::GPSPointList_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrover::msg::GPSPointList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrover::msg::GPSPointList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrover::msg::GPSPointList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrover::msg::GPSPointList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::GPSPointList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrover::msg::GPSPointList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::GPSPointList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrover::msg::GPSPointList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrover::msg::GPSPointList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrover__msg__GPSPointList
    std::shared_ptr<mrover::msg::GPSPointList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrover__msg__GPSPointList
    std::shared_ptr<mrover::msg::GPSPointList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GPSPointList_ & other) const
  {
    if (this->points != other.points) {
      return false;
    }
    return true;
  }
  bool operator!=(const GPSPointList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GPSPointList_

// alias to use template instance with default allocator
using GPSPointList =
  mrover::msg::GPSPointList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__GPS_POINT_LIST__STRUCT_HPP_
