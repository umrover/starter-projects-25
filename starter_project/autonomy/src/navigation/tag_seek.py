from geometry_msgs.msg import Twist

from context import Context
from state_machine.state import State
from state import DoneState, FailState


class TagSeekState(State):
    def on_enter(self, context) -> None:
        pass

    def on_exit(self, context) -> None:
        pass

    def on_loop(self, context) -> State:
        DISTANCE_TOLERANCE = 0.995
        ANGULAR_TOLERANCE = 0.3
        # get the tag's location and properties (HINT: use get_fid_data() from context.env)
        tagData = context.env.get_fid_data()

        # if we don't have a tag: go to the FailState
        if (tagData is None):
            return FailState()
        

        # TODO: if we are within angular and distance tolerances: go to DoneState
        if (tagData.closeness_metric < DISTANCE_TOLERANCE and  abs(tagData.x_tag_center_pixel) < ANGULAR_TOLERANCE):
            return DoneState() 

        # TODO: figure out the Twist command to be applied to move the rover closer to the tag
        twist = Twist()
        twist.linear.x = tagData.closeness_metric - DISTANCE_TOLERANCE
        if (tagData.x_tag_center_pixel >= 0):
            twist.angular.z = tagData.x_tag_center_pixel - ANGULAR_TOLERANCE
        else:
            twist.angular.z = tagData.x_tag_center_pixel + ANGULAR_TOLERANCE


        # TODO: send Twist command to rover
        context.rover.send_drive_command(twist)

        # TODO: stay in the TagSeekState (with outcome "working")
        return self
