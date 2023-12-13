// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
#define TUTORIAL_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
{

namespace msg
{

namespace builder
{

class Init_Num_numpad
{
public:
  explicit Init_Num_numpad(::tutorial_interfaces::msg::Num & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::msg::Num numpad(::tutorial_interfaces::msg::Num::_numpad_type arg)
  {
    msg_.numpad = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::msg::Num msg_;
};

class Init_Num_buttons
{
public:
  explicit Init_Num_buttons(::tutorial_interfaces::msg::Num & msg)
  : msg_(msg)
  {}
  Init_Num_numpad buttons(::tutorial_interfaces::msg::Num::_buttons_type arg)
  {
    msg_.buttons = std::move(arg);
    return Init_Num_numpad(msg_);
  }

private:
  ::tutorial_interfaces::msg::Num msg_;
};

class Init_Num_axes
{
public:
  Init_Num_axes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Num_buttons axes(::tutorial_interfaces::msg::Num::_axes_type arg)
  {
    msg_.axes = std::move(arg);
    return Init_Num_buttons(msg_);
  }

private:
  ::tutorial_interfaces::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::msg::Num>()
{
  return tutorial_interfaces::msg::builder::Init_Num_axes();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
