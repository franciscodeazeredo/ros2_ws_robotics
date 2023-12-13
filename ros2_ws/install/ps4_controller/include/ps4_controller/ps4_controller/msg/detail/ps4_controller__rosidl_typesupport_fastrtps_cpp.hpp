// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from ps4_controller:msg/Ps4Controller.idl
// generated code does not contain a copyright notice

#ifndef PS4_CONTROLLER__MSG__DETAIL__PS4_CONTROLLER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define PS4_CONTROLLER__MSG__DETAIL__PS4_CONTROLLER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ps4_controller/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "ps4_controller/msg/detail/ps4_controller__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace ps4_controller
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ps4_controller
cdr_serialize(
  const ps4_controller::msg::Ps4Controller & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ps4_controller
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ps4_controller::msg::Ps4Controller & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ps4_controller
get_serialized_size(
  const ps4_controller::msg::Ps4Controller & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ps4_controller
max_serialized_size_Ps4Controller(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ps4_controller

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ps4_controller
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ps4_controller, msg, Ps4Controller)();

#ifdef __cplusplus
}
#endif

#endif  // PS4_CONTROLLER__MSG__DETAIL__PS4_CONTROLLER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
