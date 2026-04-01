# The purpose of this subscriber is to listen for any raw commands given to the motors and then apply them.

import rclpy 
from rclpy.node import Node
import atexit
import threading

from std_msgs.msg import Int16MultiArray
from .Emakefun_MotorHAT import Emakefun_MotorHAT

mh = Emakefun_MotorHAT(addr=0x60)
left_front = mh.getMotor(2)
left_back = mh.getMotor(3)
right_front = mh.getMotor(1)
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

        if len(msg.data) > 4:
            print('Incorrectly sized motor array of size', len(msg.data))
            return

        print('heard', msg.data)

        # Apply transformation to account for wheels spinning the other way.
        # msg.data = [x * y for x, y in zip(msg.data, [1,1,-1,-1])]
        
        threading.Thread(target=self.run_motor, args=(right_front, msg.data[0]), daemon=True).start()
        threading.Thread(target=self.run_motor, args=(left_front, msg.data[1]), daemon=True).start()
        threading.Thread(target=self.run_motor, args=(left_back, -msg.data[2]), daemon=True).start()
        threading.Thread(target=self.run_motor, args=(right_back, -msg.data[3]), daemon=True).start()


    def run_motor(self, motor, value):
        if value < 0 and value >= -255: # If the value is negative, going backwards.
            motor.run(Emakefun_MotorHAT.BACKWARD)
        elif value > 0 and value <= 255: # Otherwise, apply a stop or go forwards. 
            motor.run(Emakefun_MotorHAT.FORWARD)
        else: 
            motor.run(Emakefun_MotorHAT.BRAKE)
        motor.setSpeed(abs(value))   

def main(args=None):
    rclpy.init(args=args)

    motor_sub = MotorSubscriber()

    rclpy.spin(motor_sub)

    motor_sub.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
    