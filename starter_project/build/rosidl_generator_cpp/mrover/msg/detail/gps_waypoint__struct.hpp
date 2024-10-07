// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrover:msg/GPSWaypoint.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__GPS_WAYPOINT__STRUCT_HPP_
#define MROVER__MSG__DETAIL__GPS_WAYPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'type'
#include "mrover/msg/detail/waypoint_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrover__msg__GPSWaypoint __attribute__((deprecated))
#else
# define DEPRECATED__mrover__msg__GPSWaypoint __declspec(deprecated)
#endif

namespace mrover
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GPSWaypoint_
{
  using Type = GPSWaypoint_<ContainerAllocator>;

  explicit GPSWaypoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tag_id = 0;
      this->latitude_degrees = 0.0;
      this->longitude_degrees = 0.0;
    }
  }

  explicit GPSWaypoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tag_id = 0;
      this->latitude_degrees = 0.0;
      this->longitude_degrees = 0.0;
    }
  }

  // field types and members
  using _tag_id_type =
    int8_t;
  _tag_id_type tag_id;
  using _latitude_degrees_type =
    double;
  _latitude_degrees_type latitude_degrees;
  using _longitude_degrees_type =
    double;
  _longitude_degrees_type longitude_degrees;
  using _type_type =
    mrover::msg::WaypointType_<ContainerAllocator>;
  _type_type type;

  // setters for named parameter idiom
  Type & set__tag_id(
    const int8_t & _arg)
  {
    this->tag_id = _arg;
    return *this;
  }
  Type & set__latitude_degrees(
    const double & _arg)
  {
    this->latitude_degrees = _arg;
    return *this;
  }
  Type & set__longitude_degrees(
    const double & _arg)
  {
    this->longitude_degrees = _arg;
    return *this;
  }
  Type & set__type(
    const mrover::msg::WaypointType_<ContainerAllocator> & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrover::msg::GPSWaypoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrover::msg::GPSWaypoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrover::msg::GPSWaypoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrover::msg::GPSWaypoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrover::msg::GPSWaypoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::GPSWaypoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrover::msg::GPSWaypoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::GPSWaypoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrover::msg::GPSWaypoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrover::msg::GPSWaypoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrover__msg__GPSWaypoint
    std::shared_ptr<mrover::msg::GPSWaypoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrover__msg__GPSWaypoint
    std::shared_ptr<mrover::msg::GPSWaypoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GPSWaypoint_ & other) const
  {
    if (this->tag_id != other.tag_id) {
      return false;
    }
    if (this->latitude_degrees != other.latitude_degrees) {
      return false;
    }
    if (this->longitude_degrees != other.longitude_degrees) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const GPSWaypoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GPSWaypoint_

// alias to use template instance with default allocator
using GPSWaypoint =
  mrover::msg::GPSWaypoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__GPS_WAYPOINT__STRUCT_HPP_
