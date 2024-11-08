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
        # TODO: get the tag's location and properties (HINT: use get_fid_data() from context.env)
        tag = context.env.get_fid_data()

        # TODO: if we don't have a tag: go to the FailState
        if tag is None or tag.tag_id == -1:
            return FailState()
        
        # TODO: if we are within angular and distance tolerances: go to DoneState
        if tag.closeness_metric < DISTANCE_TOLERANCE and abs(tag.x_tag_center_pixel) < ANGULAR_TOLERANCE:
            return DoneState()
        
        # TODO: figure out the Twist command to be applied to move the rover closer to the tag
        twist = Twist()
        if tag.closeness_metric >= DISTANCE_TOLERANCE:
            twist.linear.x = 1.0
        if abs(tag.x_tag_center_pixel) >= ANGULAR_TOLERANCE:
            twist.angular.z = -0.5 * tag.x_tag_center_pixel

        # TODO: send Twist command to rover
        context.rover.send_driver_command(twist)

        # TODO: stay in the TagSeekState (with outcome "working")
        return self