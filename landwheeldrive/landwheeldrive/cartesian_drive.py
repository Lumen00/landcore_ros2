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
                                                      1)
        self.motor_barrier = threading.Barrier(4)

        
    def listener_callback(self, msg):
        # Parse information in the array to be given to the motors.
        # If negative, go backwards and apply absolute value.
        # Message is in format x, y, rotation.
        # w_max = 17.8 # Rad/s. From 170 RPM of max power efficiency point
        w_max = 0.5 # Debug test speed.
        x = msg.data[0]
        y = msg.data[1]
        rot = msg.data[2]
        # Use mecanum wheel equations to calculate for motor signals. Inverse Kinematics
        lx = 0.1315 # Distance from centre to wheel on x axis.
        ly = 0.135 # Distance from centre to wheel on y axis.
        r = 0.04 # Radius of wheels

        # These calculate the angular speed of each wheel. 
        lf_factor = (x - y - (lx + ly)*rot)/r
        rf_factor = (x + y + (lx + ly)*rot)/r
        lb_factor = (x + y - (lx + ly)*rot)/r
        rb_factor = (x - y + (lx + ly)*rot)/r

        wheels = [lf_factor, rf_factor, lb_factor, rb_factor]

        # Scale if any wheel speed exceeds max speed.
        cmd_max_w = max(abs(w) for w in wheels) # Maximum speed command.
        # Scale the other motor command speeds by the max speed or max speed command.
        if cmd_max_w >= w_max: # If the command speed is greater than speed limit.
            scale = cmd_max_w
        else: # Otherwise if the command speed is lower than speed limit.
            scale = w_max            

        # Convert to 255 scale 
        pwm = [round((w / scale) * 255) for w in wheels]

        # Apply transformation to account for wheels spinning the other way.
        print('heard', msg.data, 'transformed to ', pwm)

        t1 = threading.Thread(target=self.run_motor, args=(left_front, int(pwm[0])))
        t2 = threading.Thread(target=self.run_motor, args=(right_front, int(pwm[1])))
        t3 = threading.Thread(target=self.run_motor, args=(left_back, -int(pwm[2])))
        t4 = threading.Thread(target=self.run_motor, args=(right_back, -int(pwm[3])))
        # print('starting threads')
        for thread in [t1, t2, t3, t4]:
            thread.start()
            # time.sleep(0.1)

        # print('joining threads')
        for thread in [t1, t2, t3, t4]:
            thread.join()
        # print('threads joined')

    def run_motor(self, motor:DC_Motor, value:int):
        # motor.mh.setSpeed(255)
        # motor.mh.run(Emakefun_MotorHAT.FORWARD)
        time.sleep(0.1)
        self.motor_barrier.wait()
        if value < 0:
            motor.mh.run(Emakefun_MotorHAT.BACKWARD)
        elif value > 0:
            motor.mh.run(Emakefun_MotorHAT.FORWARD)
        elif value == 0:
            motor.mh.run(Emakefun_MotorHAT.RELEASE)
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
    