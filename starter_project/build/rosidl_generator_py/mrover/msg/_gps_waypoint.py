# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrover:msg/GPSWaypoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GPSWaypoint(type):
    """Metaclass of message 'GPSWaypoint'."""

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
            module = import_type_support('mrover')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mrover.msg.GPSWaypoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gps_waypoint
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gps_waypoint
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gps_waypoint
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gps_waypoint
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gps_waypoint

            from mrover.msg import WaypointType
            if WaypointType.__class__._TYPE_SUPPORT is None:
                WaypointType.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GPSWaypoint(metaclass=Metaclass_GPSWaypoint):
    """Message class 'GPSWaypoint'."""

    __slots__ = [
        '_tag_id',
        '_latitude_degrees',
        '_longitude_degrees',
        '_type',
    ]

    _fields_and_field_types = {
        'tag_id': 'int8',
        'latitude_degrees': 'double',
        'longitude_degrees': 'double',
        'type': 'mrover/WaypointType',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mrover', 'msg'], 'WaypointType'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.tag_id = kwargs.get('tag_id', int())
        self.latitude_degrees = kwargs.get('latitude_degrees', float())
        self.longitude_degrees = kwargs.get('longitude_degrees', float())
        from mrover.msg import WaypointType
        self.type = kwargs.get('type', WaypointType())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.tag_id != other.tag_id:
            return False
        if self.latitude_degrees != other.latitude_degrees:
            return False
        if self.longitude_degrees != other.longitude_degrees:
            return False
        if self.type != other.type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def tag_id(self):
        """Message field 'tag_id'."""
        return self._tag_id

    @tag_id.setter
    def tag_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tag_id' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'tag_id' field must be an integer in [-128, 127]"
        self._tag_id = value

    @builtins.property
    def latitude_degrees(self):
        """Message field 'latitude_degrees'."""
        return self._latitude_degrees

    @latitude_degrees.setter
    def latitude_degrees(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latitude_degrees' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'latitude_degrees' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._latitude_degrees = value

    @builtins.property
    def longitude_degrees(self):
        """Message field 'longitude_degrees'."""
        return self._longitude_degrees

    @longitude_degrees.setter
    def longitude_degrees(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitude_degrees' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'longitude_degrees' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._longitude_degrees = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            from mrover.msg import WaypointType
            assert \
                isinstance(value, WaypointType), \
                "The 'type' field must be a sub message of type 'WaypointType'"
        self._type = value
