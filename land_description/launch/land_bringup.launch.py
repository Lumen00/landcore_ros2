from launch import LaunchDescription
from launch_ros.actions import Node, SetRemap
from launch.actions import IncludeLaunchDescription, RegisterEventHandler, GroupAction
from ament_index_python.packages import get_package_share_directory
from launch.event_handlers import OnProcessExit, OnExecutionComplete
import xacro
import os

# Imports for bringing in launch files from other packages.
from launch.substitutions import PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare
from launch.launch_description_sources import PythonLaunchDescriptionSource

def generate_launch_description():
    urdf_path = os.path.join(get_package_share_directory('land_description'), 'urdf', 'land_description.urdf.xacro')
    controllers_yaml = os.path.join(get_package_share_directory('land_description'), 'config', 'controllers.yaml')
    land_description_pkg = get_package_share_directory('land_description')

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

    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[robot_description]
    )

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
            '--ros-args -r /mecanum_drive_controller/odometry:=/odom -r /mecanum_drive_controller/tf_odometry:=/tf',
            # '--controller-manager-timeout', '180'
            ]
    )

    camera_node = IncludeLaunchDescription(
        PathJoinSubstitution([
            FindPackageShare('land_description'), 'launch', 'camera_bringup.xml'
        ])
    )

    delayed_sensors = RegisterEventHandler(
        OnProcessExit(
            target_action=spawn_mecanum,   # trigger once this spawner finishes
            on_exit=[c1_launch],
        )
    )


    return LaunchDescription([robot_state_publisher, 
        controller_manager, 
        spawn_jsb, 
        spawn_mecanum,
        delayed_sensors,
        # slam_node,
        # nav_node
        ])