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
from landwheeldrive.cartesian_drive import PI_Client
from dc_encoder_service.srv import MotorPI
import time
import matplotlib.pyplot as plt
import numpy as np

class PID_Tuner(Node):
	def init(self):
		super().__init__('pid_publisher')
		self.speed_publisher = self.create_publisher(Float32MultiArray,
												  'cartesian_heading', 10)
		self.encoder_client = None
		self.times = []
		self.speeds = []
	def pid_tune(self, speed):
		# Publish speed command. 
		msg = Float32MultiArray
		msg.data = [speed, 0, 0]
		self.speed_publisher.publish(msg)
		# Begin recording encoder speeds.
		start = time.perf_counter()
		duration = 1.5
		while time.perf_counter() - start < duration:
			# Call speed service.
			response = self.encoder_client.send_request(spd_in=[speed, speed, speed, speed])
			if self.encoder_client.future.done():
				# Log the speeds and time.
				self.times.append(time.perf_counter())
				self.speeds.append(response)
				self.get_logger().info('collected response: ', response)
		# Display the speeds and times as four graphs.
		msg.data = [0, 0, 0]
		self.speed_publisher.publish(msg)
		plt.plot(response)
		# For each graph, mark the time constant at 63.2% of value and annotate.

		plt.show()


def main(args=None):
	rclpy.init(args=args)

	pid_pub = PID_Tuner()
	pid_pub.encoder_client = PI_Client()
	pid_pub.pid_tune(speed=1)

	pid_pub.destroy_node()
	rclpy.shutdown()
    
if __name__ == '__main__':
    main()