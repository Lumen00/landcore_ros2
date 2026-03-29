# The purpose of this subscriber is to listen for any raw commands given to the motors and then apply them.

import rclpy 
from rclpy.node import Node
import atexit

from std_msgs.msg import Int16MultiArray
from Emakefun_MotorHAT import Emakefun_MotorHAT, Emakefun_DCMotor, Emakefun_Servo

mh = Emakefun_MotorHAT(addr=0x60)
left_front = mh.getMotor(1)
left_back = mh.getMotor(2)
right_front = mh.getMotor(3)
right_back = mh.getMotor(4)

def turnOffMotors():
    left_front.run(Emakefun_MotorHAT.RELEASE)
    left_back.run(Emakefun_MotorHAT.RELEASE)
    right_front.run(Emakefun_MotorHAT.RELEASE)
    right_back.run(Emakefun_MotorHAT.RELEASE) 

atexit.register(turnOffMotors)

# Listen on topic motor_drive for an array of four numbers. Is there a type conversion needed?

class MotorSubscriber(Node):

    def __init__(self):
        super().__init__('motor_subscriber')
        self.subscriber_ = self.create_subscription(Int16MultiArray,
                                                     'motor_drive',
                                                      self.listener_callback,
                                                      10)
        
    def listener_callback(self, msg):
        # Parse information in the array to be given to the motors.
        # If negative, go backwards and apply absolute value.
        for motor_id, motor_val in enumerate(msg.data):
            motor = mh.getMotor(motor_id+1)
            if motor_val < 0: # If the value is negative, going backwards.
                motor.run(Emakefun_MotorHAT.BACKWARD)
            else: # Otherwise, apply a stop or go forwards. 
                motor.run(Emakefun_MotorHAT.FORWARD)
            motor.setSpeed(abs(motor_val))       

def main(args=None):
    rclpy.init(args=args)

    motor_sub = MotorSubscriber()

    rclpy.spin(motor_sub)

    motor_sub.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
    