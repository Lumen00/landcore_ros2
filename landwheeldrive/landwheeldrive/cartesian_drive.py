# The purpose of this subscriber is to listen for any raw commands given to the motors and then apply them.

import rclpy 
from rclpy.node import Node
import atexit
import threading
import time
import math

from std_msgs.msg import Float32MultiArray
from .Emakefun_MotorHAT import Emakefun_MotorHAT

# mh = Emakefun_MotorHAT(addr=0x60)
def turnOffMotors():
    left_front.mh.run(Emakefun_MotorHAT.RELEASE)
    left_back.mh.run(Emakefun_MotorHAT.RELEASE)
    right_front.mh.run(Emakefun_MotorHAT.RELEASE)
    right_back.mh.run(Emakefun_MotorHAT.RELEASE) 

atexit.register(turnOffMotors)

class DC_Motor(Emakefun_MotorHAT):
    def __init__(self, motor_num):
        super().__init__(addr=0x60)
        self.signed_speed = 0
        self.mh = self.getMotor(motor_num)
        self.mh.setSpeed(255)
        self.mh.run(Emakefun_MotorHAT.FORWARD)
        self.mh.run(Emakefun_MotorHAT.RELEASE)

left_front = DC_Motor(2)
left_back = DC_Motor(3)
right_front = DC_Motor(1)
right_back = DC_Motor(4)

# Listen on topic motor_drive for an array of four numbers. 

class Cartesian_Subscriber(Node):
    def __init__(self):
        super().__init__('cartesian_subscriber')
        self.subscriber_ = self.create_subscription(Float32MultiArray,
                                                     'cartesian_heading',
                                                      self.listener_callback,
                                                      10)
        self.motor_barrier = threading.Barrier(4)

        
    def listener_callback(self, msg):
        # Parse information in the array to be given to the motors.
        # If negative, go backwards and apply absolute value.
        # Message is in format x, y, rotation.

        print('heard', msg.data)
        x = msg.data[0]
        y = msg.data[1]
        rot = msg.data[2]
        # Use mecanum wheel equations to calculate for motor signals.
        lf_factor = x - y + rot  
        rf_factor = x + y - rot 
        lb_factor = x + y + rot  
        rb_factor = x - y - rot 

        # Apply transformation to account for wheels spinning the other way.
        
        t1 = threading.Thread(target=self.run_motor, args=(right_front, 255*rf_factor))
        t2 = threading.Thread(target=self.run_motor, args=(left_front, 255*lf_factor))
        t3 = threading.Thread(target=self.run_motor, args=(left_back, 255*lb_factor))
        t4 = threading.Thread(target=self.run_motor, args=(right_back, 255*rb_factor))
        # print('starting threads')
        for thread in [t1, t2, t3, t4]:
            thread.start()
            # time.sleep(0.1)

        # print('joining threads')
        for thread in [t1, t2, t3, t4]:
            thread.join()
        # print('threads joined')

    def run_motor(self, motor:DC_Motor, value:int):
        motor.mh.setSpeed(255)
        motor.mh.run(Emakefun_MotorHAT.FORWARD)
        motor.mh.run(Emakefun_MotorHAT.RELEASE)
        time.sleep(0.1)
        self.motor_barrier.wait()
        if value < 0:
            motor.mh.run(Emakefun_MotorHAT.BACKWARD)
        elif value > 0:
            motor.mh.run(Emakefun_MotorHAT.FORWARD)
        elif value == 0:
            motor.signed_speed = 0
            return 
        motor.mh.setSpeed(abs(value))
        motor.signed_speed = value
        return

def main(args=None):
    rclpy.init(args=args)

    motor_sub = Cartesian_Subscriber()

    rclpy.spin(motor_sub)

    motor_sub.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
    