// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ps4_controller:msg/PS4.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ps4_controller/msg/detail/ps4__rosidl_typesupport_introspection_c.h"
#include "ps4_controller/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ps4_controller/msg/detail/ps4__functions.h"
#include "ps4_controller/msg/detail/ps4__struct.h"


// Include directives for member types
// Member `axes`
// Member `buttons`
// Member `numpad`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__PS4_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ps4_controller__msg__PS4__init(message_memory);
}

void ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__PS4_fini_function(void * message_memory)
{
  ps4_controller__msg__PS4__fini(message_memory);
}

size_t ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__size_function__PS4__axes(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__get_const_function__PS4__axes(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__get_function__PS4__axes(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__fetch_function__PS4__axes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__get_const_function__PS4__axes(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__assign_function__PS4__axes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__get_function__PS4__axes(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__resize_function__PS4__axes(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__size_function__PS4__buttons(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__get_const_function__PS4__buttons(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__get_function__PS4__buttons(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__fetch_function__PS4__buttons(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__get_const_function__PS4__buttons(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__assign_function__PS4__buttons(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__get_function__PS4__buttons(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__resize_function__PS4__buttons(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__size_function__PS4__numpad(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__get_const_function__PS4__numpad(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__get_function__PS4__numpad(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__fetch_function__PS4__numpad(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__get_const_function__PS4__numpad(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__assign_function__PS4__numpad(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__get_function__PS4__numpad(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__resize_function__PS4__numpad(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__PS4_message_member_array[3] = {
  {
    "axes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ps4_controller__msg__PS4, axes),  // bytes offset in struct
    NULL,  // default value
    ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__size_function__PS4__axes,  // size() function pointer
    ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__get_const_function__PS4__axes,  // get_const(index) function pointer
    ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__get_function__PS4__axes,  // get(index) function pointer
    ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__fetch_function__PS4__axes,  // fetch(index, &value) function pointer
    ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__assign_function__PS4__axes,  // assign(index, value) function pointer
    ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__resize_function__PS4__axes  // resize(index) function pointer
  },
  {
    "buttons",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ps4_controller__msg__PS4, buttons),  // bytes offset in struct
    NULL,  // default value
    ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__size_function__PS4__buttons,  // size() function pointer
    ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__get_const_function__PS4__buttons,  // get_const(index) function pointer
    ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__get_function__PS4__buttons,  // get(index) function pointer
    ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__fetch_function__PS4__buttons,  // fetch(index, &value) function pointer
    ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__assign_function__PS4__buttons,  // assign(index, value) function pointer
    ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__resize_function__PS4__buttons  // resize(index) function pointer
  },
  {
    "numpad",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ps4_controller__msg__PS4, numpad),  // bytes offset in struct
    NULL,  // default value
    ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__size_function__PS4__numpad,  // size() function pointer
    ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__get_const_function__PS4__numpad,  // get_const(index) function pointer
    ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__get_function__PS4__numpad,  // get(index) function pointer
    ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__fetch_function__PS4__numpad,  // fetch(index, &value) function pointer
    ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__assign_function__PS4__numpad,  // assign(index, value) function pointer
    ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__resize_function__PS4__numpad  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__PS4_message_members = {
  "ps4_controller__msg",  // message namespace
  "PS4",  // message name
  3,  // number of fields
  sizeof(ps4_controller__msg__PS4),
  ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__PS4_message_member_array,  // message members
  ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__PS4_init_function,  // function to initialize message memory (memory has to be allocated)
  ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__PS4_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__PS4_message_type_support_handle = {
  0,
  &ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__PS4_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ps4_controller
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ps4_controller, msg, PS4)() {
  if (!ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__PS4_message_type_support_handle.typesupport_identifier) {
    ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__PS4_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ps4_controller__msg__PS4__rosidl_typesupport_introspection_c__PS4_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
