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
python3 -m venv my --without-pip --system-site-packages #Bypass ensure-pip error on ubuntu
pip install PyQt6 smbus3 matplotlib picamera2
apt-get install libxcb-cursor0
apt install liblgpio-dev \
    ros-jazzy-navigation2 \
    ros-jazzy-nav2-bringup \
    ros-jazzy-nav2-minimal-tb* \
    ros-jazzy-ros2-control \
    ros-jazzy-ros2-controllers \
    ros-jazzy-slam-toolbox -y 

# Build the libcamera package
sudo apt install v4l-utils ros-jazzy-image-transport-plugins ros-jazzy-rqt-image-view

mkdir -p ~/ros2_ws/src
cd ~/ros2_ws/src
apt install python3-colcon-meson python3-ply python3-pybind11 pybind11-dev -y
apt install -y libboost-dev libgnutls28-dev openssl libtiff-dev pybind11-dev qtbase5-dev libqt5core5a meson cmake python3-yaml python3-ply libglib2.0-dev libgstreamer-plugins-base1.0-dev
git clone https://github.com/christianrauch/camera_ros.git
git clone https://github.com/raspberrypi/libcamera.git
source /opt/ros/$ROS_DISTRO/setup.sh
cd ~/ros2_ws
sudo rosdep install -y --from-paths src --ignore-src --rosdistro $ROS_DISTRO --skip-keys=libcamera

# Return to top level directory to build.
cd ~/ros2_ws

# Build the packages
echo "Building packages..."
# VERBOSE=1 colcon build --parallel-workers $(nproc) --event-handlers console_direct+ --cmake-args -DCMAKE_VERBOSE_MAKEFILE=ON -DCMAKE_BUILD_TYPE=Release
colcon build --event-handlers=console_direct+ --symlink-install
# colcon build --packages-select dc_encoder_service landdrive landwheeldrive --cmake-args -DCMAKE_BUILD_TYPE=Release
# colcon build --packages-select sllidar_ros2 --parallel-workers 2 --event-handlers console_direct+ --cmake-args -DCMAKE_VERBOSE_MAKEFILE=ON -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_FLAGS="-w"
source install/setup.sh

echo "Workspace setup completed!"