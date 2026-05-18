#!/usr/bin/python
# https://ctms.engin.umich.edu/CTMS/index.php?aux=Activities_DCmotorB
# Determine Plant Function
# 1. Command all motors to run at set RPM for step response.
# 2. Record speed measured by encoders against time until steady state.
# 3. Determine time constant (time at 63.2% of ss value)
# 4. Determine gain K, the steady state speed divided by PWM percentage of cycle.
# 5. Produce graph of open loop steady state response.

# Determine Transfer Function algebraically 
# 
# Design controller via pole placement. 

# Run cartesian_drive.py  and dc_encoder_node.cpp at the same time.
# Send speed command to motors by publishing on motor_drive.
	# Speed command of x only for forwards so all wheels go at the same speed.
# Record measured speed for time t
# Stop all motors when done
# Show as graphs for each motor

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray
# from landwheeldrive.cartesian_drive import PI_Client
from dc_encoder_service.srv import MotorPI
import time
import matplotlib.pyplot as plt
import numpy as np

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

class PID_Tuner(Node):
	def __init__(self):
		super().__init__(node_name='pid_publisher')
		self.speed_publisher = self.create_publisher(Float32MultiArray,
												  'cartesian_heading', 10)
		self.encoder_client = None
		self.times = []
		self.speed_array = []
		
	def pid_tune(self, speed):
		# Publish speed command. 
		msg = Float32MultiArray()
		msg.data = [speed, 0, 0]
		self.speed_publisher.publish(msg)
		# Begin recording encoder speeds.
		start = time.perf_counter()
		duration = 0.5
		while time.perf_counter() - start < duration:
			# Call speed service.
			response = self.encoder_client.send_request(spd_in=[speed, speed, speed, speed])
			if response is not None:
				# Log the speeds and time.
				self.times.append(time.perf_counter() - start)
				self.speed_array.append([response.speed_front_left,
										response.speed_front_right,
										response.speed_back_left,
										response.speed_back_right])
				# self.get_logger().info(f'collected response: {response}')
		# Display the speeds and times as four graphs.
		msg.data = [0, 0, 0]
		self.speed_publisher.publish(msg)
		self.speed_array = np.array(self.speed_array)
		# self.get_logger().info(f'{self.times}')
		plt.plot(self.times, self.speed_array)
		plt.legend(['Front Left', 'Front Right', 'Back Left', 'Back Right'])

		plt.show()


def main(args=None):
	rclpy.init(args=args)

	pid_pub = PID_Tuner()
	pid_pub.encoder_client = PI_Client()
	pid_pub.pid_tune(speed=0.0)

	pid_pub.destroy_node()
	rclpy.shutdown()
    
if __name__ == '__main__':
    main()