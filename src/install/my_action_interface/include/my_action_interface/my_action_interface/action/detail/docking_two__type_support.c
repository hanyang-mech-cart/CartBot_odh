// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_action_interface:action/DockingTwo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_action_interface/action/detail/docking_two__rosidl_typesupport_introspection_c.h"
#include "my_action_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_action_interface/action/detail/docking_two__functions.h"
#include "my_action_interface/action/detail/docking_two__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void my_action_interface__action__DockingTwo_Goal__rosidl_typesupport_introspection_c__DockingTwo_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_action_interface__action__DockingTwo_Goal__init(message_memory);
}

void my_action_interface__action__DockingTwo_Goal__rosidl_typesupport_introspection_c__DockingTwo_Goal_fini_function(void * message_memory)
{
  my_action_interface__action__DockingTwo_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_action_interface__action__DockingTwo_Goal__rosidl_typesupport_introspection_c__DockingTwo_Goal_message_member_array[1] = {
  {
    "order",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_action_interface__action__DockingTwo_Goal, order),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_action_interface__action__DockingTwo_Goal__rosidl_typesupport_introspection_c__DockingTwo_Goal_message_members = {
  "my_action_interface__action",  // message namespace
  "DockingTwo_Goal",  // message name
  1,  // number of fields
  sizeof(my_action_interface__action__DockingTwo_Goal),
  my_action_interface__action__DockingTwo_Goal__rosidl_typesupport_introspection_c__DockingTwo_Goal_message_member_array,  // message members
  my_action_interface__action__DockingTwo_Goal__rosidl_typesupport_introspection_c__DockingTwo_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  my_action_interface__action__DockingTwo_Goal__rosidl_typesupport_introspection_c__DockingTwo_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_action_interface__action__DockingTwo_Goal__rosidl_typesupport_introspection_c__DockingTwo_Goal_message_type_support_handle = {
  0,
  &my_action_interface__action__DockingTwo_Goal__rosidl_typesupport_introspection_c__DockingTwo_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_action_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_action_interface, action, DockingTwo_Goal)() {
  if (!my_action_interface__action__DockingTwo_Goal__rosidl_typesupport_introspection_c__DockingTwo_Goal_message_type_support_handle.typesupport_identifier) {
    my_action_interface__action__DockingTwo_Goal__rosidl_typesupport_introspection_c__DockingTwo_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_action_interface__action__DockingTwo_Goal__rosidl_typesupport_introspection_c__DockingTwo_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_action_interface/action/detail/docking_two__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_action_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_action_interface/action/detail/docking_two__functions.h"
// already included above
// #include "my_action_interface/action/detail/docking_two__struct.h"


// Include directives for member types
// Member `sequence`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_action_interface__action__DockingTwo_Result__rosidl_typesupport_introspection_c__DockingTwo_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_action_interface__action__DockingTwo_Result__init(message_memory);
}

void my_action_interface__action__DockingTwo_Result__rosidl_typesupport_introspection_c__DockingTwo_Result_fini_function(void * message_memory)
{
  my_action_interface__action__DockingTwo_Result__fini(message_memory);
}

size_t my_action_interface__action__DockingTwo_Result__rosidl_typesupport_introspection_c__size_function__DockingTwo_Result__sequence(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * my_action_interface__action__DockingTwo_Result__rosidl_typesupport_introspection_c__get_const_function__DockingTwo_Result__sequence(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_action_interface__action__DockingTwo_Result__rosidl_typesupport_introspection_c__get_function__DockingTwo_Result__sequence(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_action_interface__action__DockingTwo_Result__rosidl_typesupport_introspection_c__fetch_function__DockingTwo_Result__sequence(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    my_action_interface__action__DockingTwo_Result__rosidl_typesupport_introspection_c__get_const_function__DockingTwo_Result__sequence(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void my_action_interface__action__DockingTwo_Result__rosidl_typesupport_introspection_c__assign_function__DockingTwo_Result__sequence(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    my_action_interface__action__DockingTwo_Result__rosidl_typesupport_introspection_c__get_function__DockingTwo_Result__sequence(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool my_action_interface__action__DockingTwo_Result__rosidl_typesupport_introspection_c__resize_function__DockingTwo_Result__sequence(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_action_interface__action__DockingTwo_Result__rosidl_typesupport_introspection_c__DockingTwo_Result_message_member_array[1] = {
  {
    "sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_action_interface__action__DockingTwo_Result, sequence),  // bytes offset in struct
    NULL,  // default value
    my_action_interface__action__DockingTwo_Result__rosidl_typesupport_introspection_c__size_function__DockingTwo_Result__sequence,  // size() function pointer
    my_action_interface__action__DockingTwo_Result__rosidl_typesupport_introspection_c__get_const_function__DockingTwo_Result__sequence,  // get_const(index) function pointer
    my_action_interface__action__DockingTwo_Result__rosidl_typesupport_introspection_c__get_function__DockingTwo_Result__sequence,  // get(index) function pointer
    my_action_interface__action__DockingTwo_Result__rosidl_typesupport_introspection_c__fetch_function__DockingTwo_Result__sequence,  // fetch(index, &value) function pointer
    my_action_interface__action__DockingTwo_Result__rosidl_typesupport_introspection_c__assign_function__DockingTwo_Result__sequence,  // assign(index, value) function pointer
    my_action_interface__action__DockingTwo_Result__rosidl_typesupport_introspection_c__resize_function__DockingTwo_Result__sequence  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_action_interface__action__DockingTwo_Result__rosidl_typesupport_introspection_c__DockingTwo_Result_message_members = {
  "my_action_interface__action",  // message namespace
  "DockingTwo_Result",  // message name
  1,  // number of fields
  sizeof(my_action_interface__action__DockingTwo_Result),
  my_action_interface__action__DockingTwo_Result__rosidl_typesupport_introspection_c__DockingTwo_Result_message_member_array,  // message members
  my_action_interface__action__DockingTwo_Result__rosidl_typesupport_introspection_c__DockingTwo_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  my_action_interface__action__DockingTwo_Result__rosidl_typesupport_introspection_c__DockingTwo_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_action_interface__action__DockingTwo_Result__rosidl_typesupport_introspection_c__DockingTwo_Result_message_type_support_handle = {
  0,
  &my_action_interface__action__DockingTwo_Result__rosidl_typesupport_introspection_c__DockingTwo_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_action_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_action_interface, action, DockingTwo_Result)() {
  if (!my_action_interface__action__DockingTwo_Result__rosidl_typesupport_introspection_c__DockingTwo_Result_message_type_support_handle.typesupport_identifier) {
    my_action_interface__action__DockingTwo_Result__rosidl_typesupport_introspection_c__DockingTwo_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_action_interface__action__DockingTwo_Result__rosidl_typesupport_introspection_c__DockingTwo_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_action_interface/action/detail/docking_two__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_action_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_action_interface/action/detail/docking_two__functions.h"
// already included above
// #include "my_action_interface/action/detail/docking_two__struct.h"


// Include directives for member types
// Member `partial_sequence`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_action_interface__action__DockingTwo_Feedback__rosidl_typesupport_introspection_c__DockingTwo_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_action_interface__action__DockingTwo_Feedback__init(message_memory);
}

void my_action_interface__action__DockingTwo_Feedback__rosidl_typesupport_introspection_c__DockingTwo_Feedback_fini_function(void * message_memory)
{
  my_action_interface__action__DockingTwo_Feedback__fini(message_memory);
}

size_t my_action_interface__action__DockingTwo_Feedback__rosidl_typesupport_introspection_c__size_function__DockingTwo_Feedback__partial_sequence(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * my_action_interface__action__DockingTwo_Feedback__rosidl_typesupport_introspection_c__get_const_function__DockingTwo_Feedback__partial_sequence(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_action_interface__action__DockingTwo_Feedback__rosidl_typesupport_introspection_c__get_function__DockingTwo_Feedback__partial_sequence(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_action_interface__action__DockingTwo_Feedback__rosidl_typesupport_introspection_c__fetch_function__DockingTwo_Feedback__partial_sequence(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    my_action_interface__action__DockingTwo_Feedback__rosidl_typesupport_introspection_c__get_const_function__DockingTwo_Feedback__partial_sequence(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void my_action_interface__action__DockingTwo_Feedback__rosidl_typesupport_introspection_c__assign_function__DockingTwo_Feedback__partial_sequence(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    my_action_interface__action__DockingTwo_Feedback__rosidl_typesupport_introspection_c__get_function__DockingTwo_Feedback__partial_sequence(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool my_action_interface__action__DockingTwo_Feedback__rosidl_typesupport_introspection_c__resize_function__DockingTwo_Feedback__partial_sequence(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_action_interface__action__DockingTwo_Feedback__rosidl_typesupport_introspection_c__DockingTwo_Feedback_message_member_array[1] = {
  {
    "partial_sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_action_interface__action__DockingTwo_Feedback, partial_sequence),  // bytes offset in struct
    NULL,  // default value
    my_action_interface__action__DockingTwo_Feedback__rosidl_typesupport_introspection_c__size_function__DockingTwo_Feedback__partial_sequence,  // size() function pointer
    my_action_interface__action__DockingTwo_Feedback__rosidl_typesupport_introspection_c__get_const_function__DockingTwo_Feedback__partial_sequence,  // get_const(index) function pointer
    my_action_interface__action__DockingTwo_Feedback__rosidl_typesupport_introspection_c__get_function__DockingTwo_Feedback__partial_sequence,  // get(index) function pointer
    my_action_interface__action__DockingTwo_Feedback__rosidl_typesupport_introspection_c__fetch_function__DockingTwo_Feedback__partial_sequence,  // fetch(index, &value) function pointer
    my_action_interface__action__DockingTwo_Feedback__rosidl_typesupport_introspection_c__assign_function__DockingTwo_Feedback__partial_sequence,  // assign(index, value) function pointer
    my_action_interface__action__DockingTwo_Feedback__rosidl_typesupport_introspection_c__resize_function__DockingTwo_Feedback__partial_sequence  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_action_interface__action__DockingTwo_Feedback__rosidl_typesupport_introspection_c__DockingTwo_Feedback_message_members = {
  "my_action_interface__action",  // message namespace
  "DockingTwo_Feedback",  // message name
  1,  // number of fields
  sizeof(my_action_interface__action__DockingTwo_Feedback),
  my_action_interface__action__DockingTwo_Feedback__rosidl_typesupport_introspection_c__DockingTwo_Feedback_message_member_array,  // message members
  my_action_interface__action__DockingTwo_Feedback__rosidl_typesupport_introspection_c__DockingTwo_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  my_action_interface__action__DockingTwo_Feedback__rosidl_typesupport_introspection_c__DockingTwo_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_action_interface__action__DockingTwo_Feedback__rosidl_typesupport_introspection_c__DockingTwo_Feedback_message_type_support_handle = {
  0,
  &my_action_interface__action__DockingTwo_Feedback__rosidl_typesupport_introspection_c__DockingTwo_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_action_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_action_interface, action, DockingTwo_Feedback)() {
  if (!my_action_interface__action__DockingTwo_Feedback__rosidl_typesupport_introspection_c__DockingTwo_Feedback_message_type_support_handle.typesupport_identifier) {
    my_action_interface__action__DockingTwo_Feedback__rosidl_typesupport_introspection_c__DockingTwo_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_action_interface__action__DockingTwo_Feedback__rosidl_typesupport_introspection_c__DockingTwo_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_action_interface/action/detail/docking_two__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_action_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_action_interface/action/detail/docking_two__functions.h"
// already included above
// #include "my_action_interface/action/detail/docking_two__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "my_action_interface/action/docking_two.h"
// Member `goal`
// already included above
// #include "my_action_interface/action/detail/docking_two__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_action_interface__action__DockingTwo_SendGoal_Request__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_action_interface__action__DockingTwo_SendGoal_Request__init(message_memory);
}

void my_action_interface__action__DockingTwo_SendGoal_Request__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_Request_fini_function(void * message_memory)
{
  my_action_interface__action__DockingTwo_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_action_interface__action__DockingTwo_SendGoal_Request__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_action_interface__action__DockingTwo_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_action_interface__action__DockingTwo_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_action_interface__action__DockingTwo_SendGoal_Request__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_Request_message_members = {
  "my_action_interface__action",  // message namespace
  "DockingTwo_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(my_action_interface__action__DockingTwo_SendGoal_Request),
  my_action_interface__action__DockingTwo_SendGoal_Request__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_Request_message_member_array,  // message members
  my_action_interface__action__DockingTwo_SendGoal_Request__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  my_action_interface__action__DockingTwo_SendGoal_Request__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_action_interface__action__DockingTwo_SendGoal_Request__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_Request_message_type_support_handle = {
  0,
  &my_action_interface__action__DockingTwo_SendGoal_Request__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_action_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_action_interface, action, DockingTwo_SendGoal_Request)() {
  my_action_interface__action__DockingTwo_SendGoal_Request__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  my_action_interface__action__DockingTwo_SendGoal_Request__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_action_interface, action, DockingTwo_Goal)();
  if (!my_action_interface__action__DockingTwo_SendGoal_Request__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    my_action_interface__action__DockingTwo_SendGoal_Request__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_action_interface__action__DockingTwo_SendGoal_Request__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_action_interface/action/detail/docking_two__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_action_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_action_interface/action/detail/docking_two__functions.h"
// already included above
// #include "my_action_interface/action/detail/docking_two__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_action_interface__action__DockingTwo_SendGoal_Response__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_action_interface__action__DockingTwo_SendGoal_Response__init(message_memory);
}

void my_action_interface__action__DockingTwo_SendGoal_Response__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_Response_fini_function(void * message_memory)
{
  my_action_interface__action__DockingTwo_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_action_interface__action__DockingTwo_SendGoal_Response__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_action_interface__action__DockingTwo_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_action_interface__action__DockingTwo_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_action_interface__action__DockingTwo_SendGoal_Response__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_Response_message_members = {
  "my_action_interface__action",  // message namespace
  "DockingTwo_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(my_action_interface__action__DockingTwo_SendGoal_Response),
  my_action_interface__action__DockingTwo_SendGoal_Response__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_Response_message_member_array,  // message members
  my_action_interface__action__DockingTwo_SendGoal_Response__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  my_action_interface__action__DockingTwo_SendGoal_Response__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_action_interface__action__DockingTwo_SendGoal_Response__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_Response_message_type_support_handle = {
  0,
  &my_action_interface__action__DockingTwo_SendGoal_Response__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_action_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_action_interface, action, DockingTwo_SendGoal_Response)() {
  my_action_interface__action__DockingTwo_SendGoal_Response__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!my_action_interface__action__DockingTwo_SendGoal_Response__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    my_action_interface__action__DockingTwo_SendGoal_Response__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_action_interface__action__DockingTwo_SendGoal_Response__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_action_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "my_action_interface/action/detail/docking_two__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers my_action_interface__action__detail__docking_two__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_service_members = {
  "my_action_interface__action",  // service namespace
  "DockingTwo_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // my_action_interface__action__detail__docking_two__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // my_action_interface__action__detail__docking_two__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t my_action_interface__action__detail__docking_two__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_service_type_support_handle = {
  0,
  &my_action_interface__action__detail__docking_two__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_action_interface, action, DockingTwo_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_action_interface, action, DockingTwo_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_action_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_action_interface, action, DockingTwo_SendGoal)() {
  if (!my_action_interface__action__detail__docking_two__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_service_type_support_handle.typesupport_identifier) {
    my_action_interface__action__detail__docking_two__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)my_action_interface__action__detail__docking_two__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_action_interface, action, DockingTwo_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_action_interface, action, DockingTwo_SendGoal_Response)()->data;
  }

  return &my_action_interface__action__detail__docking_two__rosidl_typesupport_introspection_c__DockingTwo_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "my_action_interface/action/detail/docking_two__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_action_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_action_interface/action/detail/docking_two__functions.h"
// already included above
// #include "my_action_interface/action/detail/docking_two__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_action_interface__action__DockingTwo_GetResult_Request__rosidl_typesupport_introspection_c__DockingTwo_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_action_interface__action__DockingTwo_GetResult_Request__init(message_memory);
}

void my_action_interface__action__DockingTwo_GetResult_Request__rosidl_typesupport_introspection_c__DockingTwo_GetResult_Request_fini_function(void * message_memory)
{
  my_action_interface__action__DockingTwo_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_action_interface__action__DockingTwo_GetResult_Request__rosidl_typesupport_introspection_c__DockingTwo_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_action_interface__action__DockingTwo_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_action_interface__action__DockingTwo_GetResult_Request__rosidl_typesupport_introspection_c__DockingTwo_GetResult_Request_message_members = {
  "my_action_interface__action",  // message namespace
  "DockingTwo_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(my_action_interface__action__DockingTwo_GetResult_Request),
  my_action_interface__action__DockingTwo_GetResult_Request__rosidl_typesupport_introspection_c__DockingTwo_GetResult_Request_message_member_array,  // message members
  my_action_interface__action__DockingTwo_GetResult_Request__rosidl_typesupport_introspection_c__DockingTwo_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  my_action_interface__action__DockingTwo_GetResult_Request__rosidl_typesupport_introspection_c__DockingTwo_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_action_interface__action__DockingTwo_GetResult_Request__rosidl_typesupport_introspection_c__DockingTwo_GetResult_Request_message_type_support_handle = {
  0,
  &my_action_interface__action__DockingTwo_GetResult_Request__rosidl_typesupport_introspection_c__DockingTwo_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_action_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_action_interface, action, DockingTwo_GetResult_Request)() {
  my_action_interface__action__DockingTwo_GetResult_Request__rosidl_typesupport_introspection_c__DockingTwo_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!my_action_interface__action__DockingTwo_GetResult_Request__rosidl_typesupport_introspection_c__DockingTwo_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    my_action_interface__action__DockingTwo_GetResult_Request__rosidl_typesupport_introspection_c__DockingTwo_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_action_interface__action__DockingTwo_GetResult_Request__rosidl_typesupport_introspection_c__DockingTwo_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_action_interface/action/detail/docking_two__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_action_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_action_interface/action/detail/docking_two__functions.h"
// already included above
// #include "my_action_interface/action/detail/docking_two__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "my_action_interface/action/docking_two.h"
// Member `result`
// already included above
// #include "my_action_interface/action/detail/docking_two__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_action_interface__action__DockingTwo_GetResult_Response__rosidl_typesupport_introspection_c__DockingTwo_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_action_interface__action__DockingTwo_GetResult_Response__init(message_memory);
}

void my_action_interface__action__DockingTwo_GetResult_Response__rosidl_typesupport_introspection_c__DockingTwo_GetResult_Response_fini_function(void * message_memory)
{
  my_action_interface__action__DockingTwo_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_action_interface__action__DockingTwo_GetResult_Response__rosidl_typesupport_introspection_c__DockingTwo_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_action_interface__action__DockingTwo_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_action_interface__action__DockingTwo_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_action_interface__action__DockingTwo_GetResult_Response__rosidl_typesupport_introspection_c__DockingTwo_GetResult_Response_message_members = {
  "my_action_interface__action",  // message namespace
  "DockingTwo_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(my_action_interface__action__DockingTwo_GetResult_Response),
  my_action_interface__action__DockingTwo_GetResult_Response__rosidl_typesupport_introspection_c__DockingTwo_GetResult_Response_message_member_array,  // message members
  my_action_interface__action__DockingTwo_GetResult_Response__rosidl_typesupport_introspection_c__DockingTwo_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  my_action_interface__action__DockingTwo_GetResult_Response__rosidl_typesupport_introspection_c__DockingTwo_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_action_interface__action__DockingTwo_GetResult_Response__rosidl_typesupport_introspection_c__DockingTwo_GetResult_Response_message_type_support_handle = {
  0,
  &my_action_interface__action__DockingTwo_GetResult_Response__rosidl_typesupport_introspection_c__DockingTwo_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_action_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_action_interface, action, DockingTwo_GetResult_Response)() {
  my_action_interface__action__DockingTwo_GetResult_Response__rosidl_typesupport_introspection_c__DockingTwo_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_action_interface, action, DockingTwo_Result)();
  if (!my_action_interface__action__DockingTwo_GetResult_Response__rosidl_typesupport_introspection_c__DockingTwo_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    my_action_interface__action__DockingTwo_GetResult_Response__rosidl_typesupport_introspection_c__DockingTwo_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_action_interface__action__DockingTwo_GetResult_Response__rosidl_typesupport_introspection_c__DockingTwo_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_action_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "my_action_interface/action/detail/docking_two__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers my_action_interface__action__detail__docking_two__rosidl_typesupport_introspection_c__DockingTwo_GetResult_service_members = {
  "my_action_interface__action",  // service namespace
  "DockingTwo_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // my_action_interface__action__detail__docking_two__rosidl_typesupport_introspection_c__DockingTwo_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // my_action_interface__action__detail__docking_two__rosidl_typesupport_introspection_c__DockingTwo_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t my_action_interface__action__detail__docking_two__rosidl_typesupport_introspection_c__DockingTwo_GetResult_service_type_support_handle = {
  0,
  &my_action_interface__action__detail__docking_two__rosidl_typesupport_introspection_c__DockingTwo_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_action_interface, action, DockingTwo_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_action_interface, action, DockingTwo_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_action_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_action_interface, action, DockingTwo_GetResult)() {
  if (!my_action_interface__action__detail__docking_two__rosidl_typesupport_introspection_c__DockingTwo_GetResult_service_type_support_handle.typesupport_identifier) {
    my_action_interface__action__detail__docking_two__rosidl_typesupport_introspection_c__DockingTwo_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)my_action_interface__action__detail__docking_two__rosidl_typesupport_introspection_c__DockingTwo_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_action_interface, action, DockingTwo_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_action_interface, action, DockingTwo_GetResult_Response)()->data;
  }

  return &my_action_interface__action__detail__docking_two__rosidl_typesupport_introspection_c__DockingTwo_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "my_action_interface/action/detail/docking_two__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_action_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_action_interface/action/detail/docking_two__functions.h"
// already included above
// #include "my_action_interface/action/detail/docking_two__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "my_action_interface/action/docking_two.h"
// Member `feedback`
// already included above
// #include "my_action_interface/action/detail/docking_two__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_action_interface__action__DockingTwo_FeedbackMessage__rosidl_typesupport_introspection_c__DockingTwo_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_action_interface__action__DockingTwo_FeedbackMessage__init(message_memory);
}

void my_action_interface__action__DockingTwo_FeedbackMessage__rosidl_typesupport_introspection_c__DockingTwo_FeedbackMessage_fini_function(void * message_memory)
{
  my_action_interface__action__DockingTwo_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_action_interface__action__DockingTwo_FeedbackMessage__rosidl_typesupport_introspection_c__DockingTwo_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_action_interface__action__DockingTwo_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_action_interface__action__DockingTwo_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_action_interface__action__DockingTwo_FeedbackMessage__rosidl_typesupport_introspection_c__DockingTwo_FeedbackMessage_message_members = {
  "my_action_interface__action",  // message namespace
  "DockingTwo_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(my_action_interface__action__DockingTwo_FeedbackMessage),
  my_action_interface__action__DockingTwo_FeedbackMessage__rosidl_typesupport_introspection_c__DockingTwo_FeedbackMessage_message_member_array,  // message members
  my_action_interface__action__DockingTwo_FeedbackMessage__rosidl_typesupport_introspection_c__DockingTwo_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  my_action_interface__action__DockingTwo_FeedbackMessage__rosidl_typesupport_introspection_c__DockingTwo_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_action_interface__action__DockingTwo_FeedbackMessage__rosidl_typesupport_introspection_c__DockingTwo_FeedbackMessage_message_type_support_handle = {
  0,
  &my_action_interface__action__DockingTwo_FeedbackMessage__rosidl_typesupport_introspection_c__DockingTwo_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_action_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_action_interface, action, DockingTwo_FeedbackMessage)() {
  my_action_interface__action__DockingTwo_FeedbackMessage__rosidl_typesupport_introspection_c__DockingTwo_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  my_action_interface__action__DockingTwo_FeedbackMessage__rosidl_typesupport_introspection_c__DockingTwo_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_action_interface, action, DockingTwo_Feedback)();
  if (!my_action_interface__action__DockingTwo_FeedbackMessage__rosidl_typesupport_introspection_c__DockingTwo_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    my_action_interface__action__DockingTwo_FeedbackMessage__rosidl_typesupport_introspection_c__DockingTwo_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_action_interface__action__DockingTwo_FeedbackMessage__rosidl_typesupport_introspection_c__DockingTwo_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
