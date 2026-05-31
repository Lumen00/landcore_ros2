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
pip install PyQt6 
pip install smbus3
pip install matplotlib
apt-get install libxcb-cursor0
apt install liblgpio-dev -y

# Build the packages
# echo "Building packages..."

colcon build --packages-select dc_encoder_service --parallel-workers 1
colcon build --packages-select landdrive --parallel-workers 1
colcon build --packages-select landwheeldrive --parallel-workers 1
colcon build --packages-select rplidar_ros --parallel-workers 1 --symlink-install
source install/setup.bash

echo "Workspace setup completed!"