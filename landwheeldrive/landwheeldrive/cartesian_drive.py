# The purpose of this subscriber is to listen for any raw commands given to the motors and then apply them.

import rclpy 
from rclpy.executors import SingleThreadedExecutor, MultiThreadedExecutor
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
        # self.mh.setSpeed(255)
        # self.mh.run(Emakefun_MotorHAT.FORWARD)
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
        self._executor = SingleThreadedExecutor()
        self._executor.add_node(self)
        self._thread = threading.Thread(target=self._executor.spin, daemon=True)
        self._thread.start()

    def send_request(self, spd_in):
        self.req.speed_cmd_front_left = spd_in[0]
        self.req.speed_cmd_front_right = spd_in[1]
        self.req.speed_cmd_back_left = spd_in[2]
        self.req.speed_cmd_back_right = spd_in[3]
        self.future = self.PI_client.call_async(self.req)
        while not self.future.done():
            time.sleep(0.00005)
        return self.future.result()

# Listen on topic motor_drive for an array of four numbers. 

class Cartesian_Subscriber(Node):
    def __init__(self):
        super().__init__('cartesian_subscriber')
        self.subscriber_ = self.create_subscription(Float32MultiArray,
                                                     'cartesian_heading',
                                                      self.listener_callback,
                                                      1)
        self.pid = PI_Client()
        self.I_error = [0,0,0,0] # Cumulative errors for each wheel.
        self.D_error = [0,0,0,0] # Derivative error for each wheel. 
        self.prev_error = [0,0,0,0] # Last error for each wheel. 
        self.last_response_time = time.perf_counter()
        self.delay = [
            0.2234584219986573,
            0.26367882100031234,
            0.2093913659991813,
            0.2234584219986573
        ]
        self.tc = [ # Time constants for 63.2% of steady state value.
            0.4107253,
            0.33913863,
            0.33913863,
            0.33913863
        ]
        self.Kp = [ # Kp = (2*damping_cnst*wn*time_cnst - 1) / K
            0.756 * (self.delay[0] / self.tc[0]),  # Left Front    
            0.756 * (self.delay[1] / self.tc[1]),  # Right Front   
            0.756 * (self.delay[2] / self.tc[2]),  # Left Back     
            0.756 * (self.delay[3] / self.tc[3])   # Right Back    
        ]
        self.Ki = [ # Ki = wn**2*time_cnst/K
            2 * self.tc[0], # Left Front    
            2 * self.tc[1], # Right Front   
            2 * self.tc[2], # Left Back     
            2 * self.tc[3], # Right Back    
        ]
        self.Kd = [ # Ki = wn**2*time_cnst/K
            0.5 * self.tc[0], # Left Front    
            0.5 * self.tc[1], # Right Front   
            0.5 * self.tc[2], # Left Back     
            0.5 * self.tc[3], # Right Back    
        ]
        self.x = 0
        self.y = 0
        self.rot = 0
        # Use mecanum wheel equations to calculate for motor signals. Inverse Kinematics
        self.lx = 0.1315 # Distance from centre to wheel on x axis.
        self.ly = 0.135 # Distance from centre to wheel on y axis.
        self.r = 0.04 # Radius of wheels
        self.new_cmd_flg = False

        # Run PID_control() continuously on a timer.
        self.timer = self.create_timer(0.1, self.PID_control)
        
    def listener_callback(self, msg):
        # The callback should exclusively be for updating the desired speed.

        # Parse information in the array to be given to the motors.
        # If negative, go backwards and apply absolute value.
        # Message is in format x, y, rotation.
        self.x = msg.data[0]
        self.y = msg.data[1]
        self.rot = msg.data[2]
        # self.get_logger().info(f'{msg}')
        self.new_cmd_flg = True


    def PID_control(self):
        "Apply PID control to each motor value based on updating desired speed from subscriber."
        # Read current set speed into local variables.
        lf_factor = (self.x - self.y - (self.lx + self.ly)*self.rot)/self.r
        rf_factor = (self.x + self.y + (self.lx + self.ly)*self.rot)/self.r
        lb_factor = (self.x + self.y - (self.lx + self.ly)*self.rot)/self.r
        rb_factor = (self.x - self.y + (self.lx + self.ly)*self.rot)/self.r
        wheels = [lf_factor, rf_factor, lb_factor, rb_factor]         

        # Read current speeds from encoders.
        response = self.pid.send_request(spd_in=wheels)
        time_now = time.perf_counter()
        response_time = time_now - self.last_response_time
        self.last_response_time = time_now

        # Calculate errors
        # P error
        errors = [
            lf_factor - response.speed_front_left,
            rf_factor - response.speed_front_right,
            lb_factor - response.speed_back_left,
            rb_factor - response.speed_back_right,
        ]
        # I & D error
        if not self.new_cmd_flg:
            self.D_error = [
                (errors[id] - last_error)/response_time for id, last_error in enumerate(self.prev_error)
            ]
            self.I_error = [
                add_error + errors[id]*response_time for id, add_error in enumerate(self.I_error)
            ]
        else: 
            self.D_error = [0,0,0,0]
            self.I_error = [0,0,0,0]
            self.prev_error = [0,0,0,0]
            self.new_cmd_flg = False
                
        # Apply Feed Forward + PID control to calculate PWM.
        pwm = [
            max(0, min(150, lf_factor/0.35 + self.Kp[0]*errors[0] + self.Ki[0]*self.I_error[0] + self.Kd[0]*self.D_error[0])), # Left Front    
            max(0, min(150, rf_factor/0.3 + self.Kp[1]*errors[1] + self.Ki[1]*self.I_error[1] + self.Kd[1]*self.D_error[1])), # Right Front   
            max(0, min(150, lb_factor/0.35 + self.Kp[2]*errors[2] + self.Ki[2]*self.I_error[2] + self.Kd[2]*self.D_error[2])), # Left Back     
            max(0, min(150, rb_factor/0.3 + self.Kp[3]*errors[3] + self.Ki[3]*self.I_error[3] + self.Kd[3]*self.D_error[3])) # Right Back    
        ] 

        # self.get_logger().info(f'P: {errors}')
        # self.get_logger().info(f'I: {self.I_error}')
        # self.get_logger().info(f'D: {self.D_error}')

        # Apply transformation to account for wheels spinning the other way.
        # if self.current_msg:
            # self.get_logger().info(f'heard {self.current_msg.data} transformed to {pwm}')

        # Command motors to run at PWMs
        self.run_motor(left_front, int(pwm[0]))
        self.run_motor(right_front, int(pwm[1]))
        self.run_motor(left_back, -int(pwm[2]))
        self.run_motor(right_back, -int(pwm[3]))

        self.prev_error = errors

    def run_motor(self, motor:DC_Motor, value:int):
        # motor.mh.setSpeed(255)
        # motor.mh.run(Emakefun_MotorHAT.FORWARD)
        # time.sleep(0.1)
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

    # executor = MultiThreadedExecutor()
    # executor.add_node(motor_sub)
    # try:
    #     executor.spin()
    # finally:
    #     motor_sub.destroy_node()
    #     rclpy.shutdown()

    rclpy.spin(motor_sub)

    motor_sub.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
    