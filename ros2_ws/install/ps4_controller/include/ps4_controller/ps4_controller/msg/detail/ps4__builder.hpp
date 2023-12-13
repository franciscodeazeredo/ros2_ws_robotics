// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ps4_controller:msg/PS4.idl
// generated code does not contain a copyright notice

#ifndef PS4_CONTROLLER__MSG__DETAIL__PS4__BUILDER_HPP_
#define PS4_CONTROLLER__MSG__DETAIL__PS4__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ps4_controller/msg/detail/ps4__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ps4_controller
{

namespace msg
{

namespace builder
{

class Init_PS4_numpad
{
public:
  explicit Init_PS4_numpad(::ps4_controller::msg::PS4 & msg)
  : msg_(msg)
  {}
  ::ps4_controller::msg::PS4 numpad(::ps4_controller::msg::PS4::_numpad_type arg)
  {
    msg_.numpad = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ps4_controller::msg::PS4 msg_;
};

class Init_PS4_buttons
{
public:
  explicit Init_PS4_buttons(::ps4_controller::msg::PS4 & msg)
  : msg_(msg)
  {}
  Init_PS4_numpad buttons(::ps4_controller::msg::PS4::_buttons_type arg)
  {
    msg_.buttons = std::move(arg);
    return Init_PS4_numpad(msg_);
  }

private:
  ::ps4_controller::msg::PS4 msg_;
};

class Init_PS4_axes
{
public:
  Init_PS4_axes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PS4_buttons axes(::ps4_controller::msg::PS4::_axes_type arg)
  {
    msg_.axes = std::move(arg);
    return Init_PS4_buttons(msg_);
  }

private:
  ::ps4_controller::msg::PS4 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ps4_controller::msg::PS4>()
{
  return ps4_controller::msg::builder::Init_PS4_axes();
}

}  // namespace ps4_controller

#endif  // PS4_CONTROLLER__MSG__DETAIL__PS4__BUILDER_HPP_
