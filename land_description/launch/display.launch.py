import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess, IncludeLaunchDescription, GroupAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command, LaunchConfiguration
from launch_ros.actions import Node, SetRemap, SetParameter
from ros_gz_bridge.actions import RosGzBridge
from ros_gz_sim.actions import GzServer

def generate_launch_description():
    pkg_share = get_package_share_directory('land_description')
    ros_gz_sim_share = get_package_share_directory('ros_gz_sim')
    slam_toolbox_sim_share = get_package_share_directory('slam_toolbox')
    slam_toolbox_launch_source = os.path.join(slam_toolbox_sim_share, "launch", "online_async_launch.py")
    nav2_pkg = get_package_share_directory('nav2_bringup')
    nav2_launch_source = os.path.join(nav2_pkg, "launch", "navigation_launch.py")
    gz_spawn_model_launch_source = os.path.join(ros_gz_sim_share, "launch", "gz_spawn_model.launch.py")
    default_model_path = os.path.join(pkg_share, 'urdf', 'land_description.sdf')
    default_rviz_config_path = os.path.join(pkg_share, 'rviz', 'config.rviz')
    world_path = os.path.join(pkg_share, 'world', 'my_world.sdf')
    bridge_config_path = os.path.join(pkg_share, 'config', 'bridge_config.yaml')
    slam_params = os.path.join(pkg_share, 'config', 'slam_config.yaml')
    nav2_params = os.path.join(pkg_share, 'config', 'nav2params.yaml')
    bringup_dir = get_package_share_directory('nav2_bringup')
    nav2_params_default = os.path.join(bringup_dir, 'params', 'nav2_params.yaml'),

    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{'robot_description': Command(['xacro ', LaunchConfiguration('model')])}, {'use_sim_time': LaunchConfiguration('use_sim_time')}]
    )
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', LaunchConfiguration('rvizconfig')],
        parameters=[{'use_sim_time': LaunchConfiguration('use_sim_time')}]
    )
    gz_server = GzServer(
        world_sdf_file=world_path,
        container_name='ros_gz_container',
        create_own_container='True',
        use_composition='True',
    )
    ros_gz_bridge = RosGzBridge(
        bridge_name='ros_gz_bridge',
        config_file=bridge_config_path,
        container_name='ros_gz_container',
        create_own_container='False',
        use_composition='True',
    )
    spawn_entity = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(gz_spawn_model_launch_source),
        launch_arguments={
            'world': 'my_world',
            'topic': '/robot_description',
            'entity_name': 'land',
            'z': '0.65',
        }.items(),
    )

    slam_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(slam_toolbox_launch_source),
        launch_arguments={
            'use_sim_time': 'True',
            'slam_params_file': slam_params
        }.items()
    )

    nav2_include = GroupAction(
        actions=[
            SetRemap(src='/cmd_vel', dst='/mecanum_drive_controller/reference'),
            IncludeLaunchDescription( 
                PythonLaunchDescriptionSource(nav2_launch_source),
                launch_arguments={
                    'use_sim_time': 'True', # Must run parameter use_sim_time:=true
                    # 'slam': 'True', # Run slam node
                    'params_file': nav2_params,
                    # 'autostart': 'True'
                }.items(),
            ),
        ]
    )



    return LaunchDescription([
        DeclareLaunchArgument(name='use_sim_time', default_value='True', description='Flag to enable use_sim_time'),
        DeclareLaunchArgument(name='model', default_value=default_model_path, description='Absolute path to robot model file'),
        DeclareLaunchArgument(name='rvizconfig', default_value=default_rviz_config_path, description='Absolute path to rviz config file'),
        ExecuteProcess(cmd=['gz', 'sim', '-g'], output='screen'),
        robot_state_publisher_node,
        rviz_node,
        gz_server,
        ros_gz_bridge,
        spawn_entity,
        slam_launch,
        nav2_include
    ])