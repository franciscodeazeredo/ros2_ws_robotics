// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ps4_controller:msg/Ps4Controller.idl
// generated code does not contain a copyright notice

#ifndef PS4_CONTROLLER__MSG__DETAIL__PS4_CONTROLLER__STRUCT_HPP_
#define PS4_CONTROLLER__MSG__DETAIL__PS4_CONTROLLER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ps4_controller__msg__Ps4Controller __attribute__((deprecated))
#else
# define DEPRECATED__ps4_controller__msg__Ps4Controller __declspec(deprecated)
#endif

namespace ps4_controller
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Ps4Controller_
{
  using Type = Ps4Controller_<ContainerAllocator>;

  explicit Ps4Controller_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Ps4Controller_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _axes_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _axes_type axes;
  using _buttons_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _buttons_type buttons;
  using _numpad_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _numpad_type numpad;

  // setters for named parameter idiom
  Type & set__axes(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->axes = _arg;
    return *this;
  }
  Type & set__buttons(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->buttons = _arg;
    return *this;
  }
  Type & set__numpad(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->numpad = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ps4_controller::msg::Ps4Controller_<ContainerAllocator> *;
  using ConstRawPtr =
    const ps4_controller::msg::Ps4Controller_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ps4_controller::msg::Ps4Controller_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ps4_controller::msg::Ps4Controller_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ps4_controller::msg::Ps4Controller_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ps4_controller::msg::Ps4Controller_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ps4_controller::msg::Ps4Controller_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ps4_controller::msg::Ps4Controller_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ps4_controller::msg::Ps4Controller_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ps4_controller::msg::Ps4Controller_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ps4_controller__msg__Ps4Controller
    std::shared_ptr<ps4_controller::msg::Ps4Controller_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ps4_controller__msg__Ps4Controller
    std::shared_ptr<ps4_controller::msg::Ps4Controller_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ps4Controller_ & other) const
  {
    if (this->axes != other.axes) {
      return false;
    }
    if (this->buttons != other.buttons) {
      return false;
    }
    if (this->numpad != other.numpad) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ps4Controller_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ps4Controller_

// alias to use template instance with default allocator
using Ps4Controller =
  ps4_controller::msg::Ps4Controller_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ps4_controller

#endif  // PS4_CONTROLLER__MSG__DETAIL__PS4_CONTROLLER__STRUCT_HPP_
