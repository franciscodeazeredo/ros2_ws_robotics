#!/usr/bin/env python3

import rclpy
from sensor_msgs.msg import Joy

def joy_callback(msg):
    print("Received Joy message:")
    print("Axes:", msg.axes)
    print("Buttons:", msg.buttons)
    print("---------------------")

def main():
    rclpy.init()
    node = rclpy.create_node('ps4_controller_subscriber')
    subscriber = node.create_subscription(Joy, 'joy', joy_callback, 10)

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
