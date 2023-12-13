// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ps4_controller:msg/Ps4Controller.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ps4_controller/msg/detail/ps4_controller__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ps4_controller
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Ps4Controller_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ps4_controller::msg::Ps4Controller(_init);
}

void Ps4Controller_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ps4_controller::msg::Ps4Controller *>(message_memory);
  typed_message->~Ps4Controller();
}

size_t size_function__Ps4Controller__axes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Ps4Controller__axes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Ps4Controller__axes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__Ps4Controller__axes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Ps4Controller__axes(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Ps4Controller__axes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Ps4Controller__axes(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__Ps4Controller__axes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Ps4Controller__buttons(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Ps4Controller__buttons(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Ps4Controller__buttons(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__Ps4Controller__buttons(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__Ps4Controller__buttons(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__Ps4Controller__buttons(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__Ps4Controller__buttons(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__Ps4Controller__buttons(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Ps4Controller__numpad(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Ps4Controller__numpad(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Ps4Controller__numpad(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__Ps4Controller__numpad(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__Ps4Controller__numpad(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__Ps4Controller__numpad(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__Ps4Controller__numpad(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__Ps4Controller__numpad(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Ps4Controller_message_member_array[3] = {
  {
    "axes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ps4_controller::msg::Ps4Controller, axes),  // bytes offset in struct
    nullptr,  // default value
    size_function__Ps4Controller__axes,  // size() function pointer
    get_const_function__Ps4Controller__axes,  // get_const(index) function pointer
    get_function__Ps4Controller__axes,  // get(index) function pointer
    fetch_function__Ps4Controller__axes,  // fetch(index, &value) function pointer
    assign_function__Ps4Controller__axes,  // assign(index, value) function pointer
    resize_function__Ps4Controller__axes  // resize(index) function pointer
  },
  {
    "buttons",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ps4_controller::msg::Ps4Controller, buttons),  // bytes offset in struct
    nullptr,  // default value
    size_function__Ps4Controller__buttons,  // size() function pointer
    get_const_function__Ps4Controller__buttons,  // get_const(index) function pointer
    get_function__Ps4Controller__buttons,  // get(index) function pointer
    fetch_function__Ps4Controller__buttons,  // fetch(index, &value) function pointer
    assign_function__Ps4Controller__buttons,  // assign(index, value) function pointer
    resize_function__Ps4Controller__buttons  // resize(index) function pointer
  },
  {
    "numpad",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ps4_controller::msg::Ps4Controller, numpad),  // bytes offset in struct
    nullptr,  // default value
    size_function__Ps4Controller__numpad,  // size() function pointer
    get_const_function__Ps4Controller__numpad,  // get_const(index) function pointer
    get_function__Ps4Controller__numpad,  // get(index) function pointer
    fetch_function__Ps4Controller__numpad,  // fetch(index, &value) function pointer
    assign_function__Ps4Controller__numpad,  // assign(index, value) function pointer
    resize_function__Ps4Controller__numpad  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Ps4Controller_message_members = {
  "ps4_controller::msg",  // message namespace
  "Ps4Controller",  // message name
  3,  // number of fields
  sizeof(ps4_controller::msg::Ps4Controller),
  Ps4Controller_message_member_array,  // message members
  Ps4Controller_init_function,  // function to initialize message memory (memory has to be allocated)
  Ps4Controller_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Ps4Controller_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Ps4Controller_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ps4_controller


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ps4_controller::msg::Ps4Controller>()
{
  return &::ps4_controller::msg::rosidl_typesupport_introspection_cpp::Ps4Controller_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ps4_controller, msg, Ps4Controller)() {
  return &::ps4_controller::msg::rosidl_typesupport_introspection_cpp::Ps4Controller_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
