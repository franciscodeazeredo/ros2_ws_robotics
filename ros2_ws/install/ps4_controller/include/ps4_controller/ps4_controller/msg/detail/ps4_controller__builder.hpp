// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ps4_controller:msg/Ps4Controller.idl
// generated code does not contain a copyright notice

#ifndef PS4_CONTROLLER__MSG__DETAIL__PS4_CONTROLLER__BUILDER_HPP_
#define PS4_CONTROLLER__MSG__DETAIL__PS4_CONTROLLER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ps4_controller/msg/detail/ps4_controller__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ps4_controller
{

namespace msg
{

namespace builder
{

class Init_Ps4Controller_numpad
{
public:
  explicit Init_Ps4Controller_numpad(::ps4_controller::msg::Ps4Controller & msg)
  : msg_(msg)
  {}
  ::ps4_controller::msg::Ps4Controller numpad(::ps4_controller::msg::Ps4Controller::_numpad_type arg)
  {
    msg_.numpad = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ps4_controller::msg::Ps4Controller msg_;
};

class Init_Ps4Controller_buttons
{
public:
  explicit Init_Ps4Controller_buttons(::ps4_controller::msg::Ps4Controller & msg)
  : msg_(msg)
  {}
  Init_Ps4Controller_numpad buttons(::ps4_controller::msg::Ps4Controller::_buttons_type arg)
  {
    msg_.buttons = std::move(arg);
    return Init_Ps4Controller_numpad(msg_);
  }

private:
  ::ps4_controller::msg::Ps4Controller msg_;
};

class Init_Ps4Controller_axes
{
public:
  Init_Ps4Controller_axes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ps4Controller_buttons axes(::ps4_controller::msg::Ps4Controller::_axes_type arg)
  {
    msg_.axes = std::move(arg);
    return Init_Ps4Controller_buttons(msg_);
  }

private:
  ::ps4_controller::msg::Ps4Controller msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ps4_controller::msg::Ps4Controller>()
{
  return ps4_controller::msg::builder::Init_Ps4Controller_axes();
}

}  // namespace ps4_controller

#endif  // PS4_CONTROLLER__MSG__DETAIL__PS4_CONTROLLER__BUILDER_HPP_
