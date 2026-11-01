# generated from rosidl_generator_py/resource/_idl.py.em
# with input from oscp_imu_msgs:msg/OscpGnss.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OscpGnss(type):
    """Metaclass of message 'OscpGnss'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('oscp_imu_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'oscp_imu_msgs.msg.OscpGnss')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__oscp_gnss
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__oscp_gnss
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__oscp_gnss
            cls._TYPE_SUPPORT = module.type_support_msg__msg__oscp_gnss
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__oscp_gnss

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OscpGnss(metaclass=Metaclass_OscpGnss):
    """Message class 'OscpGnss'."""

    __slots__ = [
        '_header',
        '_header_byte',
        '_counter',
        '_timestamp_ms',
        '_fix_type',
        '_num_satellites',
        '_longitude',
        '_latitude',
        '_height_mm',
        '_h_accuracy_mm',
        '_v_accuracy_mm',
        '_vel_north_mms',
        '_vel_east_mms',
        '_vel_down_mms',
        '_speed_accuracy_mms',
        '_heading_motion',
        '_heading_accuracy',
        '_position_dop',
        '_last_correction_age',
        '_gnss_status',
        '_status',
        '_crc',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'header_byte': 'uint8',
        'counter': 'uint8',
        'timestamp_ms': 'uint64',
        'fix_type': 'uint8',
        'num_satellites': 'uint8',
        'longitude': 'float',
        'latitude': 'float',
        'height_mm': 'int32',
        'h_accuracy_mm': 'uint32',
        'v_accuracy_mm': 'uint32',
        'vel_north_mms': 'int32',
        'vel_east_mms': 'int32',
        'vel_down_mms': 'int32',
        'speed_accuracy_mms': 'uint32',
        'heading_motion': 'float',
        'heading_accuracy': 'float',
        'position_dop': 'float',
        'last_correction_age': 'uint8',
        'gnss_status': 'uint8',
        'status': 'uint8',
        'crc': 'uint16',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.header_byte = kwargs.get('header_byte', int())
        self.counter = kwargs.get('counter', int())
        self.timestamp_ms = kwargs.get('timestamp_ms', int())
        self.fix_type = kwargs.get('fix_type', int())
        self.num_satellites = kwargs.get('num_satellites', int())
        self.longitude = kwargs.get('longitude', float())
        self.latitude = kwargs.get('latitude', float())
        self.height_mm = kwargs.get('height_mm', int())
        self.h_accuracy_mm = kwargs.get('h_accuracy_mm', int())
        self.v_accuracy_mm = kwargs.get('v_accuracy_mm', int())
        self.vel_north_mms = kwargs.get('vel_north_mms', int())
        self.vel_east_mms = kwargs.get('vel_east_mms', int())
        self.vel_down_mms = kwargs.get('vel_down_mms', int())
        self.speed_accuracy_mms = kwargs.get('speed_accuracy_mms', int())
        self.heading_motion = kwargs.get('heading_motion', float())
        self.heading_accuracy = kwargs.get('heading_accuracy', float())
        self.position_dop = kwargs.get('position_dop', float())
        self.last_correction_age = kwargs.get('last_correction_age', int())
        self.gnss_status = kwargs.get('gnss_status', int())
        self.status = kwargs.get('status', int())
        self.crc = kwargs.get('crc', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.header_byte != other.header_byte:
            return False
        if self.counter != other.counter:
            return False
        if self.timestamp_ms != other.timestamp_ms:
            return False
        if self.fix_type != other.fix_type:
            return False
        if self.num_satellites != other.num_satellites:
            return False
        if self.longitude != other.longitude:
            return False
        if self.latitude != other.latitude:
            return False
        if self.height_mm != other.height_mm:
            return False
        if self.h_accuracy_mm != other.h_accuracy_mm:
            return False
        if self.v_accuracy_mm != other.v_accuracy_mm:
            return False
        if self.vel_north_mms != other.vel_north_mms:
            return False
        if self.vel_east_mms != other.vel_east_mms:
            return False
        if self.vel_down_mms != other.vel_down_mms:
            return False
        if self.speed_accuracy_mms != other.speed_accuracy_mms:
            return False
        if self.heading_motion != other.heading_motion:
            return False
        if self.heading_accuracy != other.heading_accuracy:
            return False
        if self.position_dop != other.position_dop:
            return False
        if self.last_correction_age != other.last_correction_age:
            return False
        if self.gnss_status != other.gnss_status:
            return False
        if self.status != other.status:
            return False
        if self.crc != other.crc:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def header_byte(self):
        """Message field 'header_byte'."""
        return self._header_byte

    @header_byte.setter
    def header_byte(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'header_byte' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'header_byte' field must be an unsigned integer in [0, 255]"
        self._header_byte = value

    @builtins.property
    def counter(self):
        """Message field 'counter'."""
        return self._counter

    @counter.setter
    def counter(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'counter' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'counter' field must be an unsigned integer in [0, 255]"
        self._counter = value

    @builtins.property
    def timestamp_ms(self):
        """Message field 'timestamp_ms'."""
        return self._timestamp_ms

    @timestamp_ms.setter
    def timestamp_ms(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'timestamp_ms' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp_ms' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp_ms = value

    @builtins.property
    def fix_type(self):
        """Message field 'fix_type'."""
        return self._fix_type

    @fix_type.setter
    def fix_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'fix_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fix_type' field must be an unsigned integer in [0, 255]"
        self._fix_type = value

    @builtins.property
    def num_satellites(self):
        """Message field 'num_satellites'."""
        return self._num_satellites

    @num_satellites.setter
    def num_satellites(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'num_satellites' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_satellites' field must be an unsigned integer in [0, 255]"
        self._num_satellites = value

    @builtins.property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'longitude' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'longitude' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._longitude = value

    @builtins.property
    def latitude(self):
        """Message field 'latitude'."""
        return self._latitude

    @latitude.setter
    def latitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'latitude' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'latitude' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._latitude = value

    @builtins.property
    def height_mm(self):
        """Message field 'height_mm'."""
        return self._height_mm

    @height_mm.setter
    def height_mm(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'height_mm' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'height_mm' field must be an integer in [-2147483648, 2147483647]"
        self._height_mm = value

    @builtins.property
    def h_accuracy_mm(self):
        """Message field 'h_accuracy_mm'."""
        return self._h_accuracy_mm

    @h_accuracy_mm.setter
    def h_accuracy_mm(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'h_accuracy_mm' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'h_accuracy_mm' field must be an unsigned integer in [0, 4294967295]"
        self._h_accuracy_mm = value

    @builtins.property
    def v_accuracy_mm(self):
        """Message field 'v_accuracy_mm'."""
        return self._v_accuracy_mm

    @v_accuracy_mm.setter
    def v_accuracy_mm(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'v_accuracy_mm' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'v_accuracy_mm' field must be an unsigned integer in [0, 4294967295]"
        self._v_accuracy_mm = value

    @builtins.property
    def vel_north_mms(self):
        """Message field 'vel_north_mms'."""
        return self._vel_north_mms

    @vel_north_mms.setter
    def vel_north_mms(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'vel_north_mms' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vel_north_mms' field must be an integer in [-2147483648, 2147483647]"
        self._vel_north_mms = value

    @builtins.property
    def vel_east_mms(self):
        """Message field 'vel_east_mms'."""
        return self._vel_east_mms

    @vel_east_mms.setter
    def vel_east_mms(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'vel_east_mms' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vel_east_mms' field must be an integer in [-2147483648, 2147483647]"
        self._vel_east_mms = value

    @builtins.property
    def vel_down_mms(self):
        """Message field 'vel_down_mms'."""
        return self._vel_down_mms

    @vel_down_mms.setter
    def vel_down_mms(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'vel_down_mms' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vel_down_mms' field must be an integer in [-2147483648, 2147483647]"
        self._vel_down_mms = value

    @builtins.property
    def speed_accuracy_mms(self):
        """Message field 'speed_accuracy_mms'."""
        return self._speed_accuracy_mms

    @speed_accuracy_mms.setter
    def speed_accuracy_mms(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'speed_accuracy_mms' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'speed_accuracy_mms' field must be an unsigned integer in [0, 4294967295]"
        self._speed_accuracy_mms = value

    @builtins.property
    def heading_motion(self):
        """Message field 'heading_motion'."""
        return self._heading_motion

    @heading_motion.setter
    def heading_motion(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'heading_motion' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading_motion' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading_motion = value

    @builtins.property
    def heading_accuracy(self):
        """Message field 'heading_accuracy'."""
        return self._heading_accuracy

    @heading_accuracy.setter
    def heading_accuracy(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'heading_accuracy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading_accuracy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading_accuracy = value

    @builtins.property
    def position_dop(self):
        """Message field 'position_dop'."""
        return self._position_dop

    @position_dop.setter
    def position_dop(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'position_dop' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'position_dop' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._position_dop = value

    @builtins.property
    def last_correction_age(self):
        """Message field 'last_correction_age'."""
        return self._last_correction_age

    @last_correction_age.setter
    def last_correction_age(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'last_correction_age' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'last_correction_age' field must be an unsigned integer in [0, 255]"
        self._last_correction_age = value

    @builtins.property
    def gnss_status(self):
        """Message field 'gnss_status'."""
        return self._gnss_status

    @gnss_status.setter
    def gnss_status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'gnss_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gnss_status' field must be an unsigned integer in [0, 255]"
        self._gnss_status = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value

    @builtins.property
    def crc(self):
        """Message field 'crc'."""
        return self._crc

    @crc.setter
    def crc(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'crc' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'crc' field must be an unsigned integer in [0, 65535]"
        self._crc = value
