#!/usr/bin/env python3

# python linear algebra library
import numpy as np

# library for interacting with ROS and TF tree
import rclpy
from rclpy.node import Node
import rclpy.time
import tf2_ros

# ROS message types we need to use
from sensor_msgs.msg import NavSatFix, Imu

# SE3 library for handling poses and TF tree
from util.SE3 import SE3


class Localization(Node):
    pose: SE3

    def __init__(self):
        super().__init__("localization")
        # create subscribers for GPS and IMU data, linking them to our callback functions
        # TODO
        self.gps_topic = '/gps/fix'
        self.imu_topic = '/imu/imu_only'
        rclpy.Subscriber(self.gps_topic, NavSatFix, gps_callback)
        rclpy.Subscriber(self.imu_topic, Imu, imu_callback)

        # create a transform broadcaster for publishing to the TF tree
        self.tf_broadcaster = tf2_ros.TransformBroadcaster(self)

        # initialize pose to all zeros
        self.pose = SE3()

    def gps_callback(self, msg: NavSatFix):
        """
        This function will be called every time this node receives a NavSatFix message
        on the /gps topic. It should read the GPS location from the given NavSatFix message,
        convert it to cartesian coordinates, store that value in `self.pose`, then publish
        that pose to the TF tree.
        """

        latitude = msg.latitude
        longitude = msg.longitude
        altitude = msg.altitude

        spherical_coord = np.ndarray([latitude,longitude])
        reference_coord = np.ndarray(38.4225202,-110.7844653)
        cartesian = Localization.spherical_to_cartesian(spherical_coord,reference_coord)
        self.pose.set_position(cartesian[0],cartesian[1],cartesian[2])
        self.publish_to_tf_tree(self.tf_broadcaster,"map","rover_base_link")

        

    def imu_callback(self, msg: Imu):
        """
        This function will be called every time this node receives an Imu message
        on the /imu topic. It should read the orientation data from the given Imu message,
        store that value in `self.pose`, then publish that pose to the TF tree.
        """
        orientation_data = [msg.x,msg.y,msg.z,msg.w]
        self.pose.set_position(orientation_data)
        self.publish_to_tf_tree(self.tf_broadcaster,"map","rover_base_link")

    @staticmethod
    def spherical_to_cartesian(spherical_coord: np.ndarray, reference_coord: np.ndarray) -> np.ndarray:
        """
        This is a utility function that should convert spherical (latitude, longitude)
        coordinates into cartesian (x, y, z) coordinates using the specified reference point
        as the center of the tangent plane used for approximation.
        :param spherical_coord: the spherical coordinate to convert,
                                given as a numpy array [latitude, longitude]
        :param reference_coord: the reference coordinate to use for conversion,
                                given as a numpy array [latitude, longitude]
        :returns: the approximated cartesian coordinates in meters, given as a numpy array [x, y, z]
        """
        spherical_latitude = spherical_coord[0]
        spherical_longitude = spherical_coord[1]

        reference_latitude = reference_coord[0]-90
        reference_longitude = reference_coord[1]

        y = 6371000*(spherical_longitude-reference_longitude)*np.cos(reference_latitude*np.pi/180)
        x = 6371000*(spherical_latitude-reference_latitude)
        z = 0
        return np.array([x,y,z])
        # TODO


def main():
    # initialize the node
    rclpy.init()

    # create and start our localization system
    localization = Localization()

    # let the callback functions run asynchronously in the background
    rclpy.spin(localization)

    rclpy.shutdown()
    


if __name__ == "__main__":
    main()
