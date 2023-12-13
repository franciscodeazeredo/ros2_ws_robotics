// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ps4_controller:msg/PS4.idl
// generated code does not contain a copyright notice

#ifndef PS4_CONTROLLER__MSG__DETAIL__PS4__TRAITS_HPP_
#define PS4_CONTROLLER__MSG__DETAIL__PS4__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ps4_controller/msg/detail/ps4__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ps4_controller
{

namespace msg
{

inline void to_flow_style_yaml(
  const PS4 & msg,
  std::ostream & out)
{
  out << "{";
  // member: axes
  {
    if (msg.axes.size() == 0) {
      out << "axes: []";
    } else {
      out << "axes: [";
      size_t pending_items = msg.axes.size();
      for (auto item : msg.axes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: buttons
  {
    if (msg.buttons.size() == 0) {
      out << "buttons: []";
    } else {
      out << "buttons: [";
      size_t pending_items = msg.buttons.size();
      for (auto item : msg.buttons) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: numpad
  {
    if (msg.numpad.size() == 0) {
      out << "numpad: []";
    } else {
      out << "numpad: [";
      size_t pending_items = msg.numpad.size();
      for (auto item : msg.numpad) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PS4 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: axes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.axes.size() == 0) {
      out << "axes: []\n";
    } else {
      out << "axes:\n";
      for (auto item : msg.axes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: buttons
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.buttons.size() == 0) {
      out << "buttons: []\n";
    } else {
      out << "buttons:\n";
      for (auto item : msg.buttons) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: numpad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.numpad.size() == 0) {
      out << "numpad: []\n";
    } else {
      out << "numpad:\n";
      for (auto item : msg.numpad) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PS4 & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ps4_controller

namespace rosidl_generator_traits
{

[[deprecated("use ps4_controller::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ps4_controller::msg::PS4 & msg,
  std::ostream & out, size_t indentation = 0)
{
  ps4_controller::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ps4_controller::msg::to_yaml() instead")]]
inline std::string to_yaml(const ps4_controller::msg::PS4 & msg)
{
  return ps4_controller::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ps4_controller::msg::PS4>()
{
  return "ps4_controller::msg::PS4";
}

template<>
inline const char * name<ps4_controller::msg::PS4>()
{
  return "ps4_controller/msg/PS4";
}

template<>
struct has_fixed_size<ps4_controller::msg::PS4>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ps4_controller::msg::PS4>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ps4_controller::msg::PS4>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PS4_CONTROLLER__MSG__DETAIL__PS4__TRAITS_HPP_
