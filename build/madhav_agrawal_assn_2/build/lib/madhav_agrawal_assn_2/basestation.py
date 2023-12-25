#!/usr/bin/env python
import rclpy
from std_msgs.msg import String , Float32
from geometry_msgs.msg import Point
from mrt_interfaces.msg import Custom

def listener_callback1(msg):
    print('Altitude: "%s"' % msg.data)

def listener_callback2(msg):
    print(f"Current Position (x,y,z): {(msg.x,msg.y,msg.z)}")

def listener_callback3(msg):
    print('Mission Status: "%s"' % msg.data)

def listener_callback4(msg):
    print(f"Data Received : rover_id = {msg.rover_id}, battery_level = {msg.battery_level}, current_location = {msg.current_location}, health_status = {msg.health_status}")

def main(args=None):
    # Initialize the ROS 2 system
    rclpy.init(args=args)

    # Create a ROS 2 node named 'minimal_subscriber'
    node = rclpy.create_node('basestation')

    # Create a subscription to the 'topic' with a message type of String
    subscription1 = node.create_subscription(Float32, 'topic1', listener_callback1, 10)
    subscription2 = node.create_subscription(Point, 'topic2', listener_callback2, 10)
    subscription3 = node.create_subscription(String, 'topic3', listener_callback3, 10)
    subscription4 = node.create_subscription(Custom, 'topic4', listener_callback4, 10)

    # Prevent unused variable warning
    subscription1
    subscription2
    subscription3
    subscription4

    try:
        # Start spinning the ROS 2 node
        rclpy.spin(node)
    finally:
        # Destroy the node explicitly when done spinning
        # (optional - otherwise it will be done automatically
        # when the garbage collector destroys the node object)
        node.destroy_node()

        # Shutdown the ROS 2 system
        rclpy.shutdown()

# Entry point to the script
if __name__ == '__main__':
    # Call the main function if this script is the main module
    main()