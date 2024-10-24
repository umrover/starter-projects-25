import numpy as np

from context import Context
from drive import get_drive_command
from state_machine.state import State
from tag_seek import TagSeekState

class DriveState(State):
    def on_enter(self, context) -> None:
        pass

    def on_exit(self, context) -> None:
        pass

    def on_loop(self, context) -> State:
        # TODO: get the rover's pose, if it doesn't exist stay in DriveState (return self)
        target = np.array([8, 2.0, 0.0])

        # TODO: get the rover's pose, if it doesn't exist stay in DriveState (with outcome "driving_to_point")
        rover_pose = context.rover.get_pose()
        if(rover_pose == None):
            # stay in drive state
            return self
            pass
        # TODO: get the drive command and completion status based on target and pose
        # (HINT: use get_drive_command(), with completion_thresh set to 0.7 and turn_in_place_thresh set to 0.2)

        tupe = get_drive_command(target, rover_pose, 0.7, 0.2)

        # TODO: if we are finished getting to the target, go to TagSeekState (with outcome "reached_point")
        
        if rover_pose == target:
            # tagseekstate
            return TagSeekState()
            

        # TODO: send the drive command to the rover
        context.rover.send_drive_command(tupe[0])

        # TODO: tell smach to stay in the DriveState by returning with outcome "driving_to_point"
        
        return self
        pass
