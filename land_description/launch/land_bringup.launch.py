from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from ament_index_python.packages import get_package_share_directory
import xacro
import os

# Imports for bringing in launch files from other packages.
from launch.substitutions import PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    urdf_path = os.path.join(get_package_share_directory('land_description'), 'urdf', 'land_description.urdf.xacro')
    controllers_yaml = os.path.join(get_package_share_directory('land_description'), 'config', 'controllers.yaml')

    # Import LiDAR launch for C1.
    c1_launch_dir = PathJoinSubstitution([FindPackageShare('sllidar_ros2'), 'launch'])
    c1_launch = IncludeLaunchDescription(
        PathJoinSubstitution([c1_launch_dir, 'sllidar_c1_launch.py']),
        launch_arguments={
            'frame_id': 'lidar_link'
        }.items()
    )

    # robot_description = {'robot_description': open(urdf_path).read()}  # or xacro.process_file()
    robot_description = {'robot_description': xacro.process_file(urdf_path).toxml()}

    controller_manager = Node(
        package='controller_manager',
        executable='ros2_control_node',
        parameters=[robot_description, controllers_yaml],
        output='screen'
    )

    spawn_jsb = Node(
        package='controller_manager', executable='spawner',
        arguments=['joint_state_broadcaster']
    )
    spawn_mecanum = Node(
        package='controller_manager', executable='spawner',
        arguments=[
            'mecanum_drive_controller',
            '--controller-ros-args', 
            '-r /mecanum_drive_controller/odometry:=/odom -r /mecanum_drive_controller/tf_odometry:=/tf',
            ]
    )

    return LaunchDescription([ 
        controller_manager, 
        spawn_jsb, 
        spawn_mecanum,
        c1_launch])