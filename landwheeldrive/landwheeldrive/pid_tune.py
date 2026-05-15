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

from Emakefun_MotorHAT import Emakefun_MotorHAT, Emakefun_DCMotor, Emakefun_Servo

import time
import atexit

# create a default object, no changes to I2C address or frequency
mh = Emakefun_MotorHAT(addr=0x60)

# recommended for auto-disabling motors on shutdown!
def turnOffMotors():
	mh.getMotor(1).run(Emakefun_MotorHAT.RELEASE)
	mh.getMotor(2).run(Emakefun_MotorHAT.RELEASE)
	mh.getMotor(3).run(Emakefun_MotorHAT.RELEASE)
	mh.getMotor(4).run(Emakefun_MotorHAT.RELEASE)

atexit.register(turnOffMotors)

################################# DC motor test!
myMotor = mh.getMotor(4)

# set the speed to start, from 0 (off) to 255 (max speed)
myMotor.setSpeed(150)
myMotor.run(Emakefun_MotorHAT.FORWARD);
# turn on motor
myMotor.run(Emakefun_MotorHAT.RELEASE);


while (True):
	print ("Forward! ")

	print ("\tSpeed up...")
	for i in range(255):
		myMotor.setSpeed(i)
		myMotor.run(Emakefun_MotorHAT.FORWARD)
		time.sleep(0.01)

	print ("\tSlow down...")
	for i in reversed(range(255)):
		myMotor.setSpeed(i)
		myMotor.run(Emakefun_MotorHAT.FORWARD)
		time.sleep(0.01)

	print ("Backward! ")
    
	print ("\tSpeed up...")
	for i in range(255):
		myMotor.setSpeed(i)
		myMotor.run(Emakefun_MotorHAT.BACKWARD)
		time.sleep(0.01)

	print ("\tSlow down...")
	for i in reversed(range(255)):
		myMotor.setSpeed(i)
		myMotor.run(Emakefun_MotorHAT.BACKWARD)
		time.sleep(0.01)

	print ("Release")
	myMotor.run(Emakefun_MotorHAT.RELEASE)
	time.sleep(1.0)
