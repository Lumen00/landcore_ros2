# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dc_encoder_service:srv/MotorPI.idl
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


class Metaclass_MotorPI_Request(type):
    """Metaclass of message 'MotorPI_Request'."""

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
            module = import_type_support('dc_encoder_service')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dc_encoder_service.srv.MotorPI_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__motor_pi__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__motor_pi__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__motor_pi__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__motor_pi__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__motor_pi__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorPI_Request(metaclass=Metaclass_MotorPI_Request):
    """Message class 'MotorPI_Request'."""

    __slots__ = [
        '_speed_cmd_front_left',
        '_speed_cmd_front_right',
        '_speed_cmd_back_left',
        '_speed_cmd_back_right',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'speed_cmd_front_left': 'double',
        'speed_cmd_front_right': 'double',
        'speed_cmd_back_left': 'double',
        'speed_cmd_back_right': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.speed_cmd_front_left = kwargs.get('speed_cmd_front_left', float())
        self.speed_cmd_front_right = kwargs.get('speed_cmd_front_right', float())
        self.speed_cmd_back_left = kwargs.get('speed_cmd_back_left', float())
        self.speed_cmd_back_right = kwargs.get('speed_cmd_back_right', float())

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
        if self.speed_cmd_front_left != other.speed_cmd_front_left:
            return False
        if self.speed_cmd_front_right != other.speed_cmd_front_right:
            return False
        if self.speed_cmd_back_left != other.speed_cmd_back_left:
            return False
        if self.speed_cmd_back_right != other.speed_cmd_back_right:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def speed_cmd_front_left(self):
        """Message field 'speed_cmd_front_left'."""
        return self._speed_cmd_front_left

    @speed_cmd_front_left.setter
    def speed_cmd_front_left(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'speed_cmd_front_left' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_cmd_front_left' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_cmd_front_left = value

    @builtins.property
    def speed_cmd_front_right(self):
        """Message field 'speed_cmd_front_right'."""
        return self._speed_cmd_front_right

    @speed_cmd_front_right.setter
    def speed_cmd_front_right(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'speed_cmd_front_right' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_cmd_front_right' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_cmd_front_right = value

    @builtins.property
    def speed_cmd_back_left(self):
        """Message field 'speed_cmd_back_left'."""
        return self._speed_cmd_back_left

    @speed_cmd_back_left.setter
    def speed_cmd_back_left(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'speed_cmd_back_left' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_cmd_back_left' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_cmd_back_left = value

    @builtins.property
    def speed_cmd_back_right(self):
        """Message field 'speed_cmd_back_right'."""
        return self._speed_cmd_back_right

    @speed_cmd_back_right.setter
    def speed_cmd_back_right(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'speed_cmd_back_right' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_cmd_back_right' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_cmd_back_right = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_MotorPI_Response(type):
    """Metaclass of message 'MotorPI_Response'."""

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
            module = import_type_support('dc_encoder_service')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dc_encoder_service.srv.MotorPI_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__motor_pi__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__motor_pi__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__motor_pi__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__motor_pi__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__motor_pi__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorPI_Response(metaclass=Metaclass_MotorPI_Response):
    """Message class 'MotorPI_Response'."""

    __slots__ = [
        '_speed_front_left',
        '_speed_front_right',
        '_speed_back_left',
        '_speed_back_right',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'speed_front_left': 'double',
        'speed_front_right': 'double',
        'speed_back_left': 'double',
        'speed_back_right': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.speed_front_left = kwargs.get('speed_front_left', float())
        self.speed_front_right = kwargs.get('speed_front_right', float())
        self.speed_back_left = kwargs.get('speed_back_left', float())
        self.speed_back_right = kwargs.get('speed_back_right', float())

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
        if self.speed_front_left != other.speed_front_left:
            return False
        if self.speed_front_right != other.speed_front_right:
            return False
        if self.speed_back_left != other.speed_back_left:
            return False
        if self.speed_back_right != other.speed_back_right:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def speed_front_left(self):
        """Message field 'speed_front_left'."""
        return self._speed_front_left

    @speed_front_left.setter
    def speed_front_left(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'speed_front_left' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_front_left' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_front_left = value

    @builtins.property
    def speed_front_right(self):
        """Message field 'speed_front_right'."""
        return self._speed_front_right

    @speed_front_right.setter
    def speed_front_right(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'speed_front_right' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_front_right' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_front_right = value

    @builtins.property
    def speed_back_left(self):
        """Message field 'speed_back_left'."""
        return self._speed_back_left

    @speed_back_left.setter
    def speed_back_left(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'speed_back_left' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_back_left' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_back_left = value

    @builtins.property
    def speed_back_right(self):
        """Message field 'speed_back_right'."""
        return self._speed_back_right

    @speed_back_right.setter
    def speed_back_right(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'speed_back_right' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_back_right' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_back_right = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MotorPI_Event(type):
    """Metaclass of message 'MotorPI_Event'."""

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
            module = import_type_support('dc_encoder_service')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dc_encoder_service.srv.MotorPI_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__motor_pi__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__motor_pi__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__motor_pi__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__motor_pi__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__motor_pi__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorPI_Event(metaclass=Metaclass_MotorPI_Event):
    """Message class 'MotorPI_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<dc_encoder_service/MotorPI_Request, 1>',
        'response': 'sequence<dc_encoder_service/MotorPI_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['dc_encoder_service', 'srv'], 'MotorPI_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['dc_encoder_service', 'srv'], 'MotorPI_Response'), 1),  # noqa: E501
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
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

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
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from dc_encoder_service.srv import MotorPI_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, MotorPI_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'MotorPI_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from dc_encoder_service.srv import MotorPI_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, MotorPI_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'MotorPI_Response'"
        self._response = value


class Metaclass_MotorPI(type):
    """Metaclass of service 'MotorPI'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dc_encoder_service')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dc_encoder_service.srv.MotorPI')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__motor_pi

            from dc_encoder_service.srv import _motor_pi
            if _motor_pi.Metaclass_MotorPI_Request._TYPE_SUPPORT is None:
                _motor_pi.Metaclass_MotorPI_Request.__import_type_support__()
            if _motor_pi.Metaclass_MotorPI_Response._TYPE_SUPPORT is None:
                _motor_pi.Metaclass_MotorPI_Response.__import_type_support__()
            if _motor_pi.Metaclass_MotorPI_Event._TYPE_SUPPORT is None:
                _motor_pi.Metaclass_MotorPI_Event.__import_type_support__()


class MotorPI(metaclass=Metaclass_MotorPI):
    from dc_encoder_service.srv._motor_pi import MotorPI_Request as Request
    from dc_encoder_service.srv._motor_pi import MotorPI_Response as Response
    from dc_encoder_service.srv._motor_pi import MotorPI_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
