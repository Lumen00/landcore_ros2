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

colcon build --packages-select dc_encoder_service landdrive landwheeldrive --cmake-args -DCMAKE_BUILD_TYPE=Release
colcon build --packages-select sllidar_ros2 --parallel-workers 2 --event-handlers console_direct+ --cmake-args -DCMAKE_VERBOSE_MAKEFILE=ON -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_FLAGS="-w"
source install/setup.bash

echo "Workspace setup completed!"