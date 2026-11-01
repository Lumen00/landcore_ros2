# generated from rosidl_generator_py/resource/_idl.py.em
# with input from oscp_imu_msgs:msg/OscpRaw.idl
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


class Metaclass_OscpRaw(type):
    """Metaclass of message 'OscpRaw'."""

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
                'oscp_imu_msgs.msg.OscpRaw')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__oscp_raw
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__oscp_raw
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__oscp_raw
            cls._TYPE_SUPPORT = module.type_support_msg__msg__oscp_raw
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__oscp_raw

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


class OscpRaw(metaclass=Metaclass_OscpRaw):
    """Message class 'OscpRaw'."""

    __slots__ = [
        '_header',
        '_header_byte',
        '_counter',
        '_timestamp_ms',
        '_gyro_x',
        '_gyro_y',
        '_gyro_z',
        '_accel_x',
        '_accel_y',
        '_accel_z',
        '_incl_x',
        '_incl_y',
        '_mag_x',
        '_mag_y',
        '_mag_z',
        '_temp',
        '_status',
        '_crc',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'header_byte': 'uint8',
        'counter': 'uint8',
        'timestamp_ms': 'uint64',
        'gyro_x': 'float',
        'gyro_y': 'float',
        'gyro_z': 'float',
        'accel_x': 'float',
        'accel_y': 'float',
        'accel_z': 'float',
        'incl_x': 'float',
        'incl_y': 'float',
        'mag_x': 'float',
        'mag_y': 'float',
        'mag_z': 'float',
        'temp': 'float',
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
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.gyro_x = kwargs.get('gyro_x', float())
        self.gyro_y = kwargs.get('gyro_y', float())
        self.gyro_z = kwargs.get('gyro_z', float())
        self.accel_x = kwargs.get('accel_x', float())
        self.accel_y = kwargs.get('accel_y', float())
        self.accel_z = kwargs.get('accel_z', float())
        self.incl_x = kwargs.get('incl_x', float())
        self.incl_y = kwargs.get('incl_y', float())
        self.mag_x = kwargs.get('mag_x', float())
        self.mag_y = kwargs.get('mag_y', float())
        self.mag_z = kwargs.get('mag_z', float())
        self.temp = kwargs.get('temp', float())
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
        if self.gyro_x != other.gyro_x:
            return False
        if self.gyro_y != other.gyro_y:
            return False
        if self.gyro_z != other.gyro_z:
            return False
        if self.accel_x != other.accel_x:
            return False
        if self.accel_y != other.accel_y:
            return False
        if self.accel_z != other.accel_z:
            return False
        if self.incl_x != other.incl_x:
            return False
        if self.incl_y != other.incl_y:
            return False
        if self.mag_x != other.mag_x:
            return False
        if self.mag_y != other.mag_y:
            return False
        if self.mag_z != other.mag_z:
            return False
        if self.temp != other.temp:
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
    def gyro_x(self):
        """Message field 'gyro_x'."""
        return self._gyro_x

    @gyro_x.setter
    def gyro_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'gyro_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gyro_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gyro_x = value

    @builtins.property
    def gyro_y(self):
        """Message field 'gyro_y'."""
        return self._gyro_y

    @gyro_y.setter
    def gyro_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'gyro_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gyro_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gyro_y = value

    @builtins.property
    def gyro_z(self):
        """Message field 'gyro_z'."""
        return self._gyro_z

    @gyro_z.setter
    def gyro_z(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'gyro_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gyro_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gyro_z = value

    @builtins.property
    def accel_x(self):
        """Message field 'accel_x'."""
        return self._accel_x

    @accel_x.setter
    def accel_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'accel_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accel_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accel_x = value

    @builtins.property
    def accel_y(self):
        """Message field 'accel_y'."""
        return self._accel_y

    @accel_y.setter
    def accel_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'accel_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accel_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accel_y = value

    @builtins.property
    def accel_z(self):
        """Message field 'accel_z'."""
        return self._accel_z

    @accel_z.setter
    def accel_z(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'accel_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accel_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accel_z = value

    @builtins.property
    def incl_x(self):
        """Message field 'incl_x'."""
        return self._incl_x

    @incl_x.setter
    def incl_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'incl_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'incl_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._incl_x = value

    @builtins.property
    def incl_y(self):
        """Message field 'incl_y'."""
        return self._incl_y

    @incl_y.setter
    def incl_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'incl_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'incl_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._incl_y = value

    @builtins.property
    def mag_x(self):
        """Message field 'mag_x'."""
        return self._mag_x

    @mag_x.setter
    def mag_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'mag_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'mag_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._mag_x = value

    @builtins.property
    def mag_y(self):
        """Message field 'mag_y'."""
        return self._mag_y

    @mag_y.setter
    def mag_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'mag_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'mag_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._mag_y = value

    @builtins.property
    def mag_z(self):
        """Message field 'mag_z'."""
        return self._mag_z

    @mag_z.setter
    def mag_z(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'mag_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'mag_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._mag_z = value

    @builtins.property
    def temp(self):
        """Message field 'temp'."""
        return self._temp

    @temp.setter
    def temp(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'temp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temp = value

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
