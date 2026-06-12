# The purpose of this subscriber is to listen for any raw commands given to the motors and then apply them.

import rclpy 
from rclpy.executors import SingleThreadedExecutor
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
            pass
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
        self.last_response_time = time.perf_counter()
        self.K = [ # Gain of PWM to rad/s
            0.11402454,
            0.11402454,
            0.11205104,
            0.10832331
        ]
        self.tc = [ # Time constants for 63.2% of steady state value.
            0.15514646,
            0.15514646,
            0.15514646,
            0.13086134
        ]
        damping_cnst = math.sqrt(math.pow(math.log(0.2), 2) / math.pow(math.log(0.2), 2) + pow(math.pi, 2)) # 20% overshoot
        wn = 1.8/1 # 0.2s rise time.
        self.Kp = [ # Kp = (2*damping_cnst*wn*time_cnst - 1) / K
            (2*damping_cnst*wn*self.tc[0] - 1)/self.K[0],  # Left Front    
            (2*damping_cnst*wn*self.tc[1] - 1)/self.K[1],  # Right Front   
            (2*damping_cnst*wn*self.tc[2] - 1)/self.K[2],  # Left Back     
            (2*damping_cnst*wn*self.tc[3] - 1)/self.K[3]   # Right Back    
        ]
        self.Ki = [ # Ki = wn**2*time_cnst/K
            (pow(wn,2)*self.tc[0])/self.K[0], # Left Front    
            (pow(wn,2)*self.tc[1])/self.K[1], # Right Front   
            (pow(wn,2)*self.tc[2])/self.K[2], # Left Back     
            (pow(wn,2)*self.tc[3])/self.K[3], # Right Back    
        ]

        
    def listener_callback(self, msg):
        # Parse information in the array to be given to the motors.
        # If negative, go backwards and apply absolute value.
        # Message is in format x, y, rotation.
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

        # Apply PI control. Contact dc_encoder_server for speed calculation.
        response = self.pid.send_request(spd_in=wheels)
        time_now = time.perf_counter()
        response_time = time_now - self.last_response_time
        self.last_response_time = time_now

        # Calculate speed error for each wheel.
        # self.get_logger().info(f'response cartesian: {response}')
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
                add_error + errors[id]*response_time for id, add_error in enumerate(self.I_error)
                ]
        else:
            self.I_error = [0,0,0,0]
        self.get_logger().info(f'Errors: {errors}')

        pwm = [
            max(0, min(255, self.Kp[0]*errors[0] + self.Ki[0]*self.I_error[0])), # Left Front    
            max(0, min(255, self.Kp[1]*errors[1] + self.Ki[1]*self.I_error[1])), # Right Front   
            max(0, min(255, self.Kp[2]*errors[2] + self.Ki[2]*self.I_error[2])), # Left Back     
            max(0, min(255, self.Kp[3]*errors[3] + self.Ki[3]*self.I_error[3])) # Right Back    
        ]

        # Convert to PWM scale 
        # pwm = [round((w / scale) * 50) for w in wheels]        

        # Apply transformation to account for wheels spinning the other way.
        self.get_logger().info(f'heard {msg.data} transformed to {pwm}')
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
    