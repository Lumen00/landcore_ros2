# The purpose of this subscriber is to listen for any raw commands given to the motors and then apply them.

import rclpy 
from rclpy.node import Node
import atexit
import threading
import time

from std_msgs.msg import Int16MultiArray
from .Emakefun_MotorHAT import Emakefun_MotorHAT

# mh = Emakefun_MotorHAT(addr=0x60)
def turnOffMotors():
    left_front.run(Emakefun_MotorHAT.RELEASE)
    left_back.run(Emakefun_MotorHAT.RELEASE)
    right_front.run(Emakefun_MotorHAT.RELEASE)
    right_back.run(Emakefun_MotorHAT.RELEASE) 

atexit.register(turnOffMotors)

class DC_Motor(Emakefun_MotorHAT):
    def __init__(self, motor_num):
        super().__init__(addr=0x60)
        self.signed_speed = 0
        self.mh = self.getMotor(motor_num)

left_front = DC_Motor(2)
left_back = DC_Motor(3)
right_front = DC_Motor(1)
right_back = DC_Motor(4)

# Listen on topic motor_drive for an array of four numbers. 

class MotorSubscriber(Node):
    def __init__(self):
        super().__init__('motor_subscriber')
        self.subscriber_ = self.create_subscription(Int16MultiArray,
                                                     'motor_drive',
                                                      self.listener_callback,
                                                      10)
        self.motor_barrier = threading.Barrier(4)

        
    def listener_callback(self, msg):
        # Parse information in the array to be given to the motors.
        # If negative, go backwards and apply absolute value.

        if len(msg.data) > 4:
            print('Incorrectly sized motor array of size', len(msg.data))
            return

        print('heard', msg.data)

        # Apply transformation to account for wheels spinning the other way.
        # msg.data = [x * y for x, y in zip(msg.data, [1,1,-1,-1])]
        
        t1 = threading.Thread(target=self.run_motor, args=(right_front, msg.data[0]))
        t2 = threading.Thread(target=self.run_motor, args=(left_front, msg.data[1]))
        t3 = threading.Thread(target=self.run_motor, args=(left_back, -msg.data[2]))
        t4 = threading.Thread(target=self.run_motor, args=(right_back, -msg.data[3]))
        for thread in [t1, t2, t3, t4]:
            thread.start()

        for thread in [t1, t2, t3, t4]:
            thread.join()
        


    def run_motor(self, motor:DC_Motor, value):
        # What is the current speed of the motor?
        # Is the motor set to go forward or backwards or in release?
        # Case 0 - the same speed command is issued.
        # Case 1 - go backwards or forwards from start.
        # Case 2 - go faster forwards from forwards.
        # Case 3 - go faster backwards from backwards.
        # Case 4 - go slower forwards from forwards.
        # Case 5 - go slower backwards from backwards.
        # Case 6 - go backwards from forwards.
        # Case 7 - go forwards from backwards.
        # Case 8 - stop. 

        speed_array = []
        if motor.signed_speed == value: # 0 
            return # Do not alter the motor speed.
        elif motor.signed_speed == 0 and value != 0: # 1
            # Create an array from 0 to speed value.
            speed_array = range(value)
            if value < 0:
                motor.mh.run(Emakefun_MotorHAT.BACKWARD)
            else: 
                motor.mh.run(Emakefun_MotorHAT.FORWARD)
        elif motor.signed_speed > 0 and value > motor.signed_speed: # 2
            speed_array = range(motor.signed_speed, value)
        elif motor.signed_speed < 0 and value < motor.signed_speed: # 3
            speed_array = range(motor.signed_speed, value, -1)
        elif motor.signed_speed > 0 and value < motor.signed_speed: # 4
            speed_array = range(motor.signed_speed, value, -1)
        elif motor.signed_speed < 0 and value > motor.signed_speed: # 5
            speed_array = range(motor.signed_speed, value)
        elif motor.signed_speed > 0 and value < 0: # 6
            motor.mh.run(Emakefun_MotorHAT.BACKWARD)
            speed_array = range(0, value, -1)
        elif motor.signed_speed < 0 and value > 0: # 7
            motor.mh.run(Emakefun_MotorHAT.FORWARD)
            # speed_array = range (value)
        elif value == 0:
            motor.mh.run(Emakefun_MotorHAT.RELEASE)
            # speed_array.append(0)

        self.motor_barrier.wait()

        for speed in speed_array:
            motor.mh.setSpeed(abs(speed))  
            time.sleep(0.01) 

        return

def main(args=None):
    rclpy.init(args=args)

    motor_sub = MotorSubscriber()

    rclpy.spin(motor_sub)

    motor_sub.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
    