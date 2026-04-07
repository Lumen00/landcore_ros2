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
        # print('starting threads')
        for thread in [t1, t2, t3, t4]:
            thread.start()

        # print('joining threads')
        for thread in [t1, t2, t3, t4]:
            thread.join()
        print('threads joined')
        


    def run_motor(self, motor:DC_Motor, value:int):
        # Energise the motors for a set time and then go to the specified value.
        if value > 0: # If some movement command is issued.
            motor.mh.run(Emakefun_MotorHAT.FORWARD)
            motor.mh.setSpeed(50)
        elif value < 0: 
            motor.mh.run(Emakefun_MotorHAT.BACKWARD)
            motor.mh.setSpeed(50)
        elif value == 0:
            motor.mh.run(Emakefun_MotorHAT.RELEASE)
            motor.mh.setSpeed(0)
            return
        time.sleep(0.1)
        motor.mh.setSpeed(abs(value))

        return

def main(args=None):
    rclpy.init(args=args)

    motor_sub = MotorSubscriber()

    rclpy.spin(motor_sub)

    motor_sub.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
    