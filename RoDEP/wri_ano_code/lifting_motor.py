from time import sleep
import rclpy
from custom_interfaces.action import UpperFunction
from custom_interfaces.msg import UpperMotor
from lifting_motor.motor_driver import MotorDriver
from lifting_motor.state_machine import ActionServer, CancelResponse, GoalResponse
from rclpy.node import Node
from std_msgs.msg import String

#lifting_motorノードのメインのプログラム
#state_machine.pyに状態とその遷移のロジックが,
#motor_driver.pyにモーターの制御ロジックが含まれている


class LiftingMotorNode(Node):

    def __init__(self):
        super().__init__("lifting_motor")
        #UpperMotor msgのsubscription
        self.subscription = self.create__subcription(
            Uppermotor, "/upper_motor", self.motor_callback,10
        )
