# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrover:msg/RTKStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RTKStatus(type):
    """Metaclass of message 'RTKStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NO_RTK': 0,
        'FLOATING_RTK': 1,
        'RTK_FIX': 2,
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
                'mrover.msg.RTKStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rtk_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rtk_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rtk_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rtk_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rtk_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NO_RTK': cls.__constants['NO_RTK'],
            'FLOATING_RTK': cls.__constants['FLOATING_RTK'],
            'RTK_FIX': cls.__constants['RTK_FIX'],
        }

    @property
    def NO_RTK(self):
        """Message constant 'NO_RTK'."""
        return Metaclass_RTKStatus.__constants['NO_RTK']

    @property
    def FLOATING_RTK(self):
        """Message constant 'FLOATING_RTK'."""
        return Metaclass_RTKStatus.__constants['FLOATING_RTK']

    @property
    def RTK_FIX(self):
        """Message constant 'RTK_FIX'."""
        return Metaclass_RTKStatus.__constants['RTK_FIX']


class RTKStatus(metaclass=Metaclass_RTKStatus):
    """
    Message class 'RTKStatus'.

    Constants:
      NO_RTK
      FLOATING_RTK
      RTK_FIX
    """

    __slots__ = [
        '_fix_type',
    ]

    _fields_and_field_types = {
        'fix_type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.fix_type = kwargs.get('fix_type', int())

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
        if self.fix_type != other.fix_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def fix_type(self):
        """Message field 'fix_type'."""
        return self._fix_type

    @fix_type.setter
    def fix_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fix_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fix_type' field must be an unsigned integer in [0, 255]"
        self._fix_type = value
