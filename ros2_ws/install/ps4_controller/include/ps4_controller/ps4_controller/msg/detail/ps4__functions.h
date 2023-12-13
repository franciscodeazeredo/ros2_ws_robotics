// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ps4_controller:msg/PS4.idl
// generated code does not contain a copyright notice

#ifndef PS4_CONTROLLER__MSG__DETAIL__PS4__FUNCTIONS_H_
#define PS4_CONTROLLER__MSG__DETAIL__PS4__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ps4_controller/msg/rosidl_generator_c__visibility_control.h"

#include "ps4_controller/msg/detail/ps4__struct.h"

/// Initialize msg/PS4 message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ps4_controller__msg__PS4
 * )) before or use
 * ps4_controller__msg__PS4__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ps4_controller
bool
ps4_controller__msg__PS4__init(ps4_controller__msg__PS4 * msg);

/// Finalize msg/PS4 message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ps4_controller
void
ps4_controller__msg__PS4__fini(ps4_controller__msg__PS4 * msg);

/// Create msg/PS4 message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ps4_controller__msg__PS4__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ps4_controller
ps4_controller__msg__PS4 *
ps4_controller__msg__PS4__create();

/// Destroy msg/PS4 message.
/**
 * It calls
 * ps4_controller__msg__PS4__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ps4_controller
void
ps4_controller__msg__PS4__destroy(ps4_controller__msg__PS4 * msg);

/// Check for msg/PS4 message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ps4_controller
bool
ps4_controller__msg__PS4__are_equal(const ps4_controller__msg__PS4 * lhs, const ps4_controller__msg__PS4 * rhs);

/// Copy a msg/PS4 message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ps4_controller
bool
ps4_controller__msg__PS4__copy(
  const ps4_controller__msg__PS4 * input,
  ps4_controller__msg__PS4 * output);

/// Initialize array of msg/PS4 messages.
/**
 * It allocates the memory for the number of elements and calls
 * ps4_controller__msg__PS4__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ps4_controller
bool
ps4_controller__msg__PS4__Sequence__init(ps4_controller__msg__PS4__Sequence * array, size_t size);

/// Finalize array of msg/PS4 messages.
/**
 * It calls
 * ps4_controller__msg__PS4__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ps4_controller
void
ps4_controller__msg__PS4__Sequence__fini(ps4_controller__msg__PS4__Sequence * array);

/// Create array of msg/PS4 messages.
/**
 * It allocates the memory for the array and calls
 * ps4_controller__msg__PS4__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ps4_controller
ps4_controller__msg__PS4__Sequence *
ps4_controller__msg__PS4__Sequence__create(size_t size);

/// Destroy array of msg/PS4 messages.
/**
 * It calls
 * ps4_controller__msg__PS4__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ps4_controller
void
ps4_controller__msg__PS4__Sequence__destroy(ps4_controller__msg__PS4__Sequence * array);

/// Check for msg/PS4 message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ps4_controller
bool
ps4_controller__msg__PS4__Sequence__are_equal(const ps4_controller__msg__PS4__Sequence * lhs, const ps4_controller__msg__PS4__Sequence * rhs);

/// Copy an array of msg/PS4 messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ps4_controller
bool
ps4_controller__msg__PS4__Sequence__copy(
  const ps4_controller__msg__PS4__Sequence * input,
  ps4_controller__msg__PS4__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PS4_CONTROLLER__MSG__DETAIL__PS4__FUNCTIONS_H_
