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
		while not self.PI_client.wait_for_service(timeout_sec=1):
			self.get_logger().info('service not available, waiting again...')
		self.req = MotorPI.Request()
		self.get_logger().info('PI Client up')


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
		self.get_logger().info('starting pid tune routine')
		# Publish speed command. 
		if pwm != 0:
			msg = Int16MultiArray()
			msg.data = [pwm, pwm, pwm, pwm]
			self.pwm_publisher.publish(msg)
		else:
			msg = Float32MultiArray()
			msg.data = [speed, 0, 0]
		# self.speed_publisher.publish(msg)
		# Begin recording encoder speeds.
		start = time.perf_counter()
		duration = 5
		while (time.perf_counter() - start) < duration:
			# Publish speed command.
			if pwm != 0:
				# self.pwm_publisher.publish(msg)
				pass
			else:
				self.speed_publisher.publish(msg)
			# Call speed service.
			response = self.encoder_client.send_request(spd_in=[speed, speed, speed, speed])
			if response is not None:
				time_now = time.perf_counter() - start
				# Log the speeds and time.
				if (time_now <= duration):
					self.times.append(time.perf_counter() - start)
					self.speed_array.append([[response.speed_front_left],
											[response.speed_front_right],
											[response.speed_back_left],
											[response.speed_back_right]])
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
		error = 5
		window_size = 25

		# self.get_logger().info(f'Speed array: {self.speed_array}')

		for id in range(4):
			# self.get_logger().info(f'Motor speed log for {id}: {self.speed_array[:,id]}')
			# self.get_logger().info(f'Motor speed log for {id}.')
			old_speed = 0
			tally = 0
			sum = 0
			for spd in reversed(self.speed_array[:,id]):
				# Find where the values settle with an acceptable error for a given window of samples.
				# for spd in motor:
					# self.get_logger().info(f'spd: {spd}')
					# Check if the difference between the current speed and the old speed 
					# is smaller than the error threshold. Only if tally == 0
					if (abs(spd - old_speed) <= error) and (tally == 0):
						# Add to the tally.
						tally += 1
						sum += spd
					elif (tally > 0) and (abs(spd - sum/tally) <= error): # Moving average.
						tally += 1
						sum += spd
					else:
						# If the difference exceeds the error threshold, then reset the tally to 0.
						# This is because it is not yet in steady state. 
						tally = 0 
						sum = 0
					old_speed = spd
					# self.get_logger().info(f'id: {id}, tally: {tally}, sum: {sum}')
					# Check if the tally has met the required window size.
					if tally > window_size:
						# We have achieved steady state if the tally exceeds the window size.
						self.steady_state.append(sum/tally)
						break # Continue to next motor, as we expect no change once in steady state. 
				# if tally > window_size:
				# 	break

		self.steady_state = np.array(self.steady_state)
		self.get_logger().info(f'Steady State: {self.steady_state}')
		# For each motor, determine what the time constant is at 63.2% of steady state response.  
		tc_index = []

		for id in range(4):
			if len(self.steady_state) < 4:
				self.get_logger().info(f'Steady state of length {len(self.steady_state)}. Aborting.')
				break
			self.get_logger().info(f'{self.steady_state[id]}')
			tc_value = 0.632*self.steady_state[id]
			diff = []
			for spd in self.speed_array[:,id]:
				# Given the tc_value, what is the closest value in the motor array?
				# for spd in motor:
					# Create an array for calculating the difference between speeds and tc_value.
					# Obtain the argmin of the array.
				diff.append(np.abs(spd - tc_value))
			tc_index.append(np.argmin(diff))
			
		time_constants = [self.times[tc_index[0]],
					self.times[tc_index[1]],
					self.times[tc_index[2]],
					self.times[tc_index[3]]]
		
		# Gains K = output/input
		gains = self.steady_state/pwm

		for id in range(4):
			plt.plot(self.times, self.speed_array[:,id])
		plt.hlines(y=self.steady_state, xmin=0, xmax=duration, linestyles='dotted')
		plt.vlines(x=time_constants, ymin=0, ymax=0.632*self.steady_state, linestyles='dotted')
		plt.text(x=0.05, y=0.1, s=f'Steady State Values: \n {self.steady_state} \n, Time Constants: \n {np.array(time_constants)} \n Gain: {gains}')
		plt.legend(['Front Left', 'Front Right', 'Back Left', 'Back Right'])
		plt.show()

# Gains: @ 45 w/ Plug/Battery
# 0.94435707
# 0.96554456
# 0.98067849
# 0.94435707

# Time Constants
# 0.13556775
# 0.14821716
# 0.14821716
# 0.14821716

# Gains: @ 255 w/ Power Bank
# 15.78425383/255 = 0.06189903
# 15.78425383/255 = 0.06189903
# 16.01637521/255 = 0.06280931
# 15.34580233/255 = 0.06017962

# Time Constants
# 0.55275804
# 0.30999461
# 0.0881347
# 0.20540162

# Steady State Values @ 255 w/ 2x 18650
# 29.07625705
# 29.07625705
# 28.57301414
# 27.6224442

# Time Constants
# 0.15514646
# 0.15514646
# 0.15514646
# 0.13086134

# Gain
# 0.11402454
# 0.11402454
# 0.11205104
# 0.10832331

def main(args=None):
	rclpy.init(args=args)

	pid_pub = PID_Tuner()
	pid_pub.encoder_client = PI_Client()
	pid_pub.pid_tune(speed=float(0.35))
	# pid_pub.pid_tune(speed=float(0), pwm=55)

	pid_pub.destroy_node()
	rclpy.shutdown()
    
if __name__ == '__main__':
    main()