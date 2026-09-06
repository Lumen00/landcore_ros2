import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, GroupAction, RegisterEventHandler, TimerAction
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node, SetRemap
from launch.event_handlers import OnProcessExit
import xacro

def generate_launch_description():
    land_description_pkg = get_package_share_directory('land_description')

    # Get RVIZ2 Launch and yaml config
    default_rviz_config_path = os.path.join(land_description_pkg, 'rviz', 'config_real.rviz')
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', LaunchConfiguration('rvizconfig')],
    )
    # Get Slam Toolbox launch global_costmapand yaml config.
    slam_toolbox_share = get_package_share_directory('slam_toolbox')
    slam_toolbox_launch_source = os.path.join(slam_toolbox_share, "launch", "online_async_launch.py")
    slam_config_path =  os.path.join(land_description_pkg, 'config', 'slam_config.yaml')
    slam_node = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(slam_toolbox_launch_source),
        launch_arguments={
            'slam_params_file': slam_config_path,
            'use_sim_time' : 'False'
        }.items()
    )

    # Get Nav2 launch and yaml config.
    nav2_pkg = get_package_share_directory('nav2_bringup')
    nav2_launch_source = os.path.join(nav2_pkg, "launch", "navigation_launch.py")
    nav2_config_path =  os.path.join(land_description_pkg, 'config', 'nav2params.yaml')
    nav_node = GroupAction(
        actions=[
            SetRemap(src='/cmd_vel', dst='/mecanum_drive_controller/reference'),
            IncludeLaunchDescription( 
                PythonLaunchDescriptionSource(nav2_launch_source),
                launch_arguments={
                    'params_file': nav2_config_path,
                    'use_sim_time' : 'False',
                    'use_intra_process_comm' : 'True'
                }.items(),
            ),
        ]
    )


    return LaunchDescription([
        DeclareLaunchArgument(name='rvizconfig', default_value=default_rviz_config_path, description='Absolute path to rviz config file'),
        # slam_node,
        # nav_node,
        rviz_node
    ])

