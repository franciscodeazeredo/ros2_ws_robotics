// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ps4_controller:msg/PS4.idl
// generated code does not contain a copyright notice
#include "ps4_controller/msg/detail/ps4__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ps4_controller/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ps4_controller/msg/detail/ps4__struct.h"
#include "ps4_controller/msg/detail/ps4__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // axes, buttons, numpad
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // axes, buttons, numpad

// forward declare type support functions


using _PS4__ros_msg_type = ps4_controller__msg__PS4;

static bool _PS4__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PS4__ros_msg_type * ros_message = static_cast<const _PS4__ros_msg_type *>(untyped_ros_message);
  // Field name: axes
  {
    size_t size = ros_message->axes.size;
    auto array_ptr = ros_message->axes.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: buttons
  {
    size_t size = ros_message->buttons.size;
    auto array_ptr = ros_message->buttons.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: numpad
  {
    size_t size = ros_message->numpad.size;
    auto array_ptr = ros_message->numpad.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _PS4__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PS4__ros_msg_type * ros_message = static_cast<_PS4__ros_msg_type *>(untyped_ros_message);
  // Field name: axes
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->axes.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->axes);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->axes, size)) {
      fprintf(stderr, "failed to create array for field 'axes'");
      return false;
    }
    auto array_ptr = ros_message->axes.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: buttons
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->buttons.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->buttons);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->buttons, size)) {
      fprintf(stderr, "failed to create array for field 'buttons'");
      return false;
    }
    auto array_ptr = ros_message->buttons.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: numpad
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->numpad.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->numpad);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->numpad, size)) {
      fprintf(stderr, "failed to create array for field 'numpad'");
      return false;
    }
    auto array_ptr = ros_message->numpad.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ps4_controller
size_t get_serialized_size_ps4_controller__msg__PS4(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PS4__ros_msg_type * ros_message = static_cast<const _PS4__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name axes
  {
    size_t array_size = ros_message->axes.size;
    auto array_ptr = ros_message->axes.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name buttons
  {
    size_t array_size = ros_message->buttons.size;
    auto array_ptr = ros_message->buttons.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name numpad
  {
    size_t array_size = ros_message->numpad.size;
    auto array_ptr = ros_message->numpad.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PS4__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ps4_controller__msg__PS4(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ps4_controller
size_t max_serialized_size_ps4_controller__msg__PS4(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: axes
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: buttons
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: numpad
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ps4_controller__msg__PS4;
    is_plain =
      (
      offsetof(DataType, numpad) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PS4__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ps4_controller__msg__PS4(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PS4 = {
  "ps4_controller::msg",
  "PS4",
  _PS4__cdr_serialize,
  _PS4__cdr_deserialize,
  _PS4__get_serialized_size,
  _PS4__max_serialized_size
};

static rosidl_message_type_support_t _PS4__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PS4,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ps4_controller, msg, PS4)() {
  return &_PS4__type_support;
}

#if defined(__cplusplus)
}
#endif
