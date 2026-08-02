from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import xacro
import os

def generate_launch_description():
    urdf_path = os.path.join(get_package_share_directory('land_description'), 'urdf', 'land_description.urdf.xacro')
    controllers_yaml = os.path.join(get_package_share_directory('land_description'), 'config', 'controllers.yaml')

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
        arguments=['mecanum_drive_controller']
    )

    return LaunchDescription([robot_state_publisher, controller_manager, spawn_jsb, spawn_mecanum])