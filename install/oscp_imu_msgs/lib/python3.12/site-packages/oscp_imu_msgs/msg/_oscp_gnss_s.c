// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from oscp_imu_msgs:msg/OscpGnss.idl
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
#include "oscp_imu_msgs/msg/detail/oscp_gnss__struct.h"
#include "oscp_imu_msgs/msg/detail/oscp_gnss__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool oscp_imu_msgs__msg__oscp_gnss__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("oscp_imu_msgs.msg._oscp_gnss.OscpGnss", full_classname_dest, 37) == 0);
  }
  oscp_imu_msgs__msg__OscpGnss * ros_message = _ros_message;
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
  {  // fix_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "fix_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fix_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // num_satellites
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_satellites");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_satellites = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // longitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitude = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // latitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "latitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latitude = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height_mm
    PyObject * field = PyObject_GetAttrString(_pymsg, "height_mm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->height_mm = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // h_accuracy_mm
    PyObject * field = PyObject_GetAttrString(_pymsg, "h_accuracy_mm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->h_accuracy_mm = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // v_accuracy_mm
    PyObject * field = PyObject_GetAttrString(_pymsg, "v_accuracy_mm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->v_accuracy_mm = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vel_north_mms
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_north_mms");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vel_north_mms = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vel_east_mms
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_east_mms");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vel_east_mms = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vel_down_mms
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_down_mms");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vel_down_mms = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // speed_accuracy_mms
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_accuracy_mms");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->speed_accuracy_mms = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // heading_motion
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_motion");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_motion = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_accuracy
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_accuracy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_accuracy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position_dop
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_dop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_dop = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // last_correction_age
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_correction_age");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->last_correction_age = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gnss_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gnss_status = (uint8_t)PyLong_AsUnsignedLong(field);
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
PyObject * oscp_imu_msgs__msg__oscp_gnss__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OscpGnss */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("oscp_imu_msgs.msg._oscp_gnss");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OscpGnss");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  oscp_imu_msgs__msg__OscpGnss * ros_message = (oscp_imu_msgs__msg__OscpGnss *)raw_ros_message;
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
  {  // fix_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fix_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fix_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_satellites
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_satellites);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_satellites", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height_mm
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->height_mm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height_mm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // h_accuracy_mm
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->h_accuracy_mm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "h_accuracy_mm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v_accuracy_mm
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->v_accuracy_mm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v_accuracy_mm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_north_mms
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vel_north_mms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_north_mms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_east_mms
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vel_east_mms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_east_mms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_down_mms
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vel_down_mms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_down_mms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_accuracy_mms
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->speed_accuracy_mms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_accuracy_mms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_motion
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_motion);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_motion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_accuracy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_accuracy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_accuracy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_dop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_dop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_dop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_correction_age
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->last_correction_age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_correction_age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gnss_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_status", field);
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
