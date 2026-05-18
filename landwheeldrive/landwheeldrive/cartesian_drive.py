# The purpose of this subscriber is to listen for any raw commands given to the motors and then apply them.

import rclpy 
from rclpy.node import Node
import atexit
import threading
import time
import math

from dc_encoder_service.srv import MotorPI
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

        # Read from GPIO pins of encoders on schematic.

left_front = DC_Motor(2)
left_back = DC_Motor(3)
right_front = DC_Motor(1)
right_back = DC_Motor(4)

class PI_Client(Node):
    def __init__(self):
        super().__init__('pi_controller_client')
        self.PI_client = self.create_client(MotorPI, 'dc_encoder_server')
        while not self.PI_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = MotorPI.Request()

    def send_request(self, spd_in):
        self.req.speed_cmd_front_left = spd_in[0]
        self.req.speed_cmd_front_right = spd_in[1]
        self.req.speed_cmd_back_left = spd_in[2]
        self.req.speed_cmd_back_right = spd_in[3]
        self.future = self.PI_client.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()

# Listen on topic motor_drive for an array of four numbers. 

class Cartesian_Subscriber(Node):
    def __init__(self):
        super().__init__('cartesian_subscriber')
        self.subscriber_ = self.create_subscription(Float32MultiArray,
                                                     'cartesian_heading',
                                                      self.listener_callback,
                                                      1)
        self.motor_barrier = threading.Barrier(4)
        self.pid = None
        self.I_error = [0,0,0,0] # Cumulative errors for each wheel.
        self.old_msg = None

        
    def listener_callback(self, msg):
        # Parse information in the array to be given to the motors.
        # If negative, go backwards and apply absolute value.
        # Message is in format x, y, rotation.
        w_max = 17.8 # Rad/s. From 170 RPM of max power efficiency point
        # w_max = 0.5 # Debug test speed.
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

        # Apply PI control. Contact dc_encoder_server for speed calculation.
        response = self.pid.send_request(spd_in=wheels)
        # while response is None:
            # pass
        # if response is not None:
            # print('response from server', response)

        # Calculate speed error for each wheel.
        errors = [
            lf_factor - response.speed_front_left,
            rf_factor - response.speed_front_right,
            lb_factor - response.speed_back_left,
            rb_factor - response.speed_back_right,
        ]

        # Add to the cumulative error. If target speed of motor has changed,
        # then reset the cumulative error.
        if self.old_msg == msg:
            self.I_error = [
                add_error + errors[id] for id, add_error in enumerate(self.I_error)
                ]
        else:
            self.I_error = [0,0,0,0]

        # Based on the error, adjust the PWM applied to each motor. 
        Kp = [
            1,  # Left Front    
            1,  # Right Front   
            1,  # Left Back     
            1   # Right Back    
        ]
        Ki = [
            1, # Left Front    
            1, # Right Front   
            1, # Left Back     
            1, # Right Back    
        ]
        pwm = [
            max(0, min(255, Kp[0]*errors[0] + Ki[0]*self.I_error[0])), # Left Front    
            max(0, min(255, Kp[1]*errors[1] + Ki[1]*self.I_error[1])), # Right Front   
            max(0, min(255, Kp[2]*errors[2] + Ki[2]*self.I_error[2])), # Left Back     
            max(0, min(255, Kp[3]*errors[3] + Ki[3]*self.I_error[3])) # Right Back    
        ]

        # Convert to PWM scale 
        # pwm = [round((w / scale) * 50) for w in wheels]        

        # Apply transformation to account for wheels spinning the other way.
        self.get_logger().info('heard', msg.data, 'transformed to ', pwm)
        # print('heard', msg.data, 'transformed to ', pwm)

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
        self.old_msg = msg


    def run_motor(self, motor:DC_Motor, value:int):
        # motor.mh.setSpeed(255)
        # motor.mh.run(Emakefun_MotorHAT.FORWARD)
        # time.sleep(0.1)
        self.motor_barrier.wait()
        motor.mh.setSpeed(abs(value))
        if value < 0:
            motor.mh.run(Emakefun_MotorHAT.BACKWARD)
        elif value > 0:
            motor.mh.run(Emakefun_MotorHAT.FORWARD)
        elif value == 0:
            motor.mh.run(Emakefun_MotorHAT.RELEASE)
            motor.signed_speed = 0
            return 
        motor.signed_speed = value
        return


def main(args=None):
    rclpy.init(args=args)

    motor_sub = Cartesian_Subscriber()

    motor_sub.pid = PI_Client()


    rclpy.spin(motor_sub)

    motor_sub.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
    