// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from oscp_imu_msgs:msg/OscpQuat.idl
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
#include "oscp_imu_msgs/msg/detail/oscp_quat__struct.h"
#include "oscp_imu_msgs/msg/detail/oscp_quat__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool oscp_imu_msgs__msg__oscp_quat__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("oscp_imu_msgs.msg._oscp_quat.OscpQuat", full_classname_dest, 37) == 0);
  }
  oscp_imu_msgs__msg__OscpQuat * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // header_byte
    PyObject * field = PyObject_GetAttrString(_pymsg, "header_byte");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->header_byte = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->counter = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // timestamp_ms
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp_ms");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp_ms = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // quat_w
    PyObject * field = PyObject_GetAttrString(_pymsg, "quat_w");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->quat_w = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // quat_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "quat_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->quat_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // quat_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "quat_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->quat_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // quat_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "quat_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->quat_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // crc
    PyObject * field = PyObject_GetAttrString(_pymsg, "crc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->crc = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * oscp_imu_msgs__msg__oscp_quat__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OscpQuat */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("oscp_imu_msgs.msg._oscp_quat");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OscpQuat");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  oscp_imu_msgs__msg__OscpQuat * ros_message = (oscp_imu_msgs__msg__OscpQuat *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // header_byte
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->header_byte);
    {
      int rc = PyObject_SetAttrString(_pymessage, "header_byte", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // counter
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timestamp_ms
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->timestamp_ms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp_ms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // quat_w
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->quat_w);
    {
      int rc = PyObject_SetAttrString(_pymessage, "quat_w", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // quat_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->quat_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "quat_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // quat_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->quat_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "quat_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // quat_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->quat_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "quat_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // crc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->crc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "crc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
