from setuptools import find_packages
from setuptools import setup

setup(
    name='oscp_imu_msgs',
    version='1.0.1',
    packages=find_packages(
        include=('oscp_imu_msgs', 'oscp_imu_msgs.*')),
)
