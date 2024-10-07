// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrover:msg/StarterProjectTag.idl
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
#include "mrover/msg/detail/starter_project_tag__struct.h"
#include "mrover/msg/detail/starter_project_tag__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mrover__msg__starter_project_tag__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("mrover.msg._starter_project_tag.StarterProjectTag", full_classname_dest, 49) == 0);
  }
  mrover__msg__StarterProjectTag * ros_message = _ros_message;
  {  // tag_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "tag_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tag_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // x_tag_center_pixel
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_tag_center_pixel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_tag_center_pixel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_tag_center_pixel
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_tag_center_pixel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_tag_center_pixel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // closeness_metric
    PyObject * field = PyObject_GetAttrString(_pymsg, "closeness_metric");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->closeness_metric = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrover__msg__starter_project_tag__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of StarterProjectTag */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrover.msg._starter_project_tag");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "StarterProjectTag");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrover__msg__StarterProjectTag * ros_message = (mrover__msg__StarterProjectTag *)raw_ros_message;
  {  // tag_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->tag_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tag_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_tag_center_pixel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_tag_center_pixel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_tag_center_pixel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_tag_center_pixel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_tag_center_pixel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_tag_center_pixel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // closeness_metric
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->closeness_metric);
    {
      int rc = PyObject_SetAttrString(_pymessage, "closeness_metric", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
