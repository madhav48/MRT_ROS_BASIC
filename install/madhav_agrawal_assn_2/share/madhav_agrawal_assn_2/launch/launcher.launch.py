from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='madhav_agrawal_assn_2',
            executable='d_rover1',
        ),
        Node(
            package='madhav_agrawal_assn_2',
            executable='d_rover2',
        ),
        Node(
            package='madhav_agrawal_assn_2',
            executable='d_rover3',
        ),
        Node(
            package='madhav_agrawal_assn_2',
            executable='d_rover4',
        ),
        Node(
            package='madhav_agrawal_assn_2',
            executable='basestation',
        ),

    ])