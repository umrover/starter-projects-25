// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrover:msg/StateMachineStructure.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "mrover/msg/detail/state_machine_structure__struct.h"
#include "mrover/msg/detail/state_machine_structure__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "mrover/msg/detail/state_machine_transition__functions.h"
// end nested array functions include
bool mrover__msg__state_machine_transition__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mrover__msg__state_machine_transition__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mrover__msg__state_machine_structure__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("mrover.msg._state_machine_structure.StateMachineStructure", full_classname_dest, 57) == 0);
  }
  mrover__msg__StateMachineStructure * ros_message = _ros_message;
  {  // machine_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "machine_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->machine_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // transitions
    PyObject * field = PyObject_GetAttrString(_pymsg, "transitions");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'transitions'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!mrover__msg__StateMachineTransition__Sequence__init(&(ros_message->transitions), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create mrover__msg__StateMachineTransition__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    mrover__msg__StateMachineTransition * dest = ros_message->transitions.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!mrover__msg__state_machine_transition__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrover__msg__state_machine_structure__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of StateMachineStructure */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrover.msg._state_machine_structure");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "StateMachineStructure");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrover__msg__StateMachineStructure * ros_message = (mrover__msg__StateMachineStructure *)raw_ros_message;
  {  // machine_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->machine_name.data,
      strlen(ros_message->machine_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "machine_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // transitions
    PyObject * field = NULL;
    size_t size = ros_message->transitions.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    mrover__msg__StateMachineTransition * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->transitions.data[i]);
      PyObject * pyitem = mrover__msg__state_machine_transition__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "transitions", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
