#!/bin/bash
set -e

# Set ROS 2 distribution as a variable
ROS_DISTRO="jazzy"

# Source ROS 2 setup
source /opt/ros/$ROS_DISTRO/setup.bash

# Navigate back to the workspace root
cd /root/ros2_ws

# Install ROS2 dependencies for all packages
echo "Installing ROS 2 dependencies..."
rosdep update
rosdep install -i --from-path src --rosdistro $ROS_DISTRO -y

# Install pip dependencies.
pip install PyQt6 smbus3 matplotlib
apt-get install libxcb-cursor0
apt install liblgpio-dev -y

# Build the packages
echo "Building packages..."
# VERBOSE=1 colcon build --parallel-workers $(nproc) --event-handlers console_direct+ --cmake-args -DCMAKE_VERBOSE_MAKEFILE=ON -DCMAKE_BUILD_TYPE=Release

colcon build --packages-select dc_encoder_service landdrive landwheeldrive
colcon build --packages-select rplidar_ros --parallel-workers 1 --event-handlers console_direct+ --cmake-args -DCMAKE_VERBOSE_MAKEFILE=ON -DCMAKE_BUILD_TYPE=Release
source install/setup.bash

echo "Workspace setup completed!"