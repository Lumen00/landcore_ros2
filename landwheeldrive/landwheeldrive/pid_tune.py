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
from std_msgs.msg import Float32MultiArray, Int16MultiArray
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
		self.pwm_publisher = self.create_publisher(Int16MultiArray,
												  'motor_drive', 10)

		self.encoder_client = None
		self.times = []
		self.speed_array = []
		
	def pid_tune(self, speed, pwm=0):
		# Publish speed command. 
		if pwm != 0:
			msg = Int16MultiArray()
			msg.data = [pwm, pwm, pwm, pwm]
		else:
			msg = Float32MultiArray()
			msg.data = [speed, 0, 0]
		# self.speed_publisher.publish(msg)
		# Begin recording encoder speeds.
		start = time.perf_counter()
		duration = 0.5
		while time.perf_counter() - start < duration:
			# Publish speed command.
			if pwm != 0:
				self.pwm_publisher.publish(msg)
			else:
				self.speed_publisher.publish(msg)
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
		if pwm != 0:
			self.get_logger().info('Stopping PWM drive.')
			msg.data = [0, 0, 0, 0]
			self.pwm_publisher.publish(msg)
		else:
			self.get_logger().info('Stopping Speed drive.')
			msg.data = [0, 0, 0]
			self.speed_publisher.publish(msg)
		self.speed_array = np.array(self.speed_array)
		# self.get_logger().info(f'{self.times}')

		# For each motor, determine what the steady state response is.
		self.steady_state = []
		error = 50
		for motor in self.speed_array:
			# Find where the values settle with an acceptable error for a given window of samples.
			old_speed = 0
			window_size = 20
			tally = 0
			average = 0
			for spd in motor:
				# Check if the difference between the current speed and the old speed
				# is smaller than the error threshold.
				if (spd - old_speed) <= error:
					# Add to the tally.
					tally += 1
					average += spd
				else:
					# If the difference exceeds the error threshold, then reset the tally to 0.
					# This is because it is not yet in steady state. 
					tally = 0 
					average = 0
				old_speed = spd
				# Check if the tally has met the required window size.
				if tally > window_size:
					# We have achieved steady state if the tally exceeds the window size.
					self.steady_state.append(average/tally)
					break # Continue to next motor, as we expect no change once in steady state. 

		self.steady_state = np.array(self.steady_state)
		self.get_logger().info(f'Steady State: {self.steady_state}')
		# For each motor, determine what the time constant is at 63.2% of steady state response.  
		tc_index = []
		for id, motor in enumerate(self.speed_array):
			tc_value = 63.2*float(self.steady_state[id])
			# Given the tc_value, what is the closest value in the motor array?
			diff = []
			for spd in motor:
				# Create an array for calculating the difference between speeds and tc_value.
				# Obtain the argmin of the array.
				diff.append(np.abs(spd - tc_value))
			tc_index.append(np.argmin(diff))
		
		time_constants = [self.times[tc_index[0]],
					self.times[tc_index[1]],
					self.times[tc_index[2]],
					self.times[tc_index[3]]]

		plt.plot(self.times, self.speed_array)
		plt.hlines(y=self.steady_state)
		plt.vlines(x=time_constants)
		plt.text(x=0.05, y=0.95, s=f'Steady State Values: \n {self.steady_state} \n Time Constants: \n {time_constants}')
		plt.legend(['Front Left', 'Front Right', 'Back Left', 'Back Right'])
		plt.show()


def main(args=None):
	rclpy.init(args=args)

	pid_pub = PID_Tuner()
	pid_pub.encoder_client = PI_Client()
	# pid_pub.pid_tune(speed=float(0.5))
	pid_pub.pid_tune(speed=float(0), pwm=35)

	pid_pub.destroy_node()
	rclpy.shutdown()
    
if __name__ == '__main__':
    main()