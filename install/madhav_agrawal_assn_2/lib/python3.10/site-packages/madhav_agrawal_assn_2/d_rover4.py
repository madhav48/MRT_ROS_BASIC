#!/usr/bin/env python
import rclpy
from mrt_interfaces.msg import Custom
from geometry_msgs.msg import Pose , Point, Quaternion
import random

def timer_callback(timer, i):
    # Create a String message
    msg = Custom()

    msg.rover_id = random.randint(1,10)
    msg.battery_level = random.random()*100
    msg.current_location = Pose()
    msg.current_location.position = Point(x = random.random()*100, y= random.random()*100, z = random.random()*100)
    msg.current_location.orientation = Quaternion(x = random.random()*100, y= random.random()*100, z = random.random()*100)

    num = random.randint(1,10)
    if num >=5 :
        msg.health_status = 'Good'
    else:
        msg.health_status = "Bad"

    # Publish the message using the global publisher
    publisher.publish(msg)

    # Print a message indicating what is being published
    print(f"Publishing : rover_id = {msg.rover_id}, battery_level = {msg.battery_level}, current_location = {msg.current_location}, health_status = {msg.health_status}")

def main(args=None):
    # Initialize the ROS 2 system
    rclpy.init(args=args)

    # Create a ROS 2 node named 'minimal_publisher'
    node = rclpy.create_node('d_rover4')

    # Create a global publisher for the 'topic' with a message type of String
    global publisher
    publisher = node.create_publisher(Custom, 'topic4', 10)

    # Set the timer period to 0.5 seconds
    timer_period = 0.5

    # Initialize a counter variable
    i = 0

    # Create a timer that calls the timer_callback function every timer_period seconds
    timer = node.create_timer(timer_period, lambda: timer_callback(timer, i))

    # Increment the counter
    i += 1

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