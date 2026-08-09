#!/bin/bash
set -e

# Set ROS 2 distribution as a variable
ROS_DISTRO="jazzy"

# Source ROS 2 setup
source /opt/ros/$ROS_DISTRO/setup.sh

# Navigate back to the workspace root
cd /root/ros2_ws

apt-get update

# Install ROS2 dependencies for all packages
echo "Installing ROS 2 dependencies..."
rosdep update
rosdep install -i --from-path src --rosdistro $ROS_DISTRO -y

# Install pip dependencies.
python3 -m venv my
pip install PyQt6 smbus3 matplotlib picamera2
apt-get install libxcb-cursor0
apt install liblgpio-dev \
    ros-jazzy-navigation2 \
    ros-jazzy-nav2-bringup \
    ros-jazzy-nav2-minimal-tb* \
    ros-jazzy-ros2-control \
    ros-jazzy-ros2-controllers \
    ros-jazzy-slam-toolbox -y 


# Build the packages
echo "Building packages..."
# VERBOSE=1 colcon build --parallel-workers $(nproc) --event-handlers console_direct+ --cmake-args -DCMAKE_VERBOSE_MAKEFILE=ON -DCMAKE_BUILD_TYPE=Release

colcon build --packages-select dc_encoder_service landdrive landwheeldrive --cmake-args -DCMAKE_BUILD_TYPE=Release
colcon build --packages-select sllidar_ros2 --parallel-workers 2 --event-handlers console_direct+ --cmake-args -DCMAKE_VERBOSE_MAKEFILE=ON -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_FLAGS="-w"
source install/setup.sh

echo "Workspace setup completed!"