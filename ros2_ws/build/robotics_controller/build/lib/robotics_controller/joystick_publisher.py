#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy
import pygame

class joystick_publisher_node(Node):
    
    def __init__(self, joystick):
        super().__init__("joystick_publisher")
        self.joystick = joystick
        self.get_logger().info("joystick_publisher has started")
        self.cmd_vel_pub_ = self.create_publisher(Joy, 'joystick', 10)
        self.timer = self.create_timer(0.05, self.publish_joystick_data(joystick))  # Adjust the timer period
    
    
    def publish_joystick_data(self, joystick):
    
        axes = [round(joystick.get_axis(i), 3) for i in range(joystick.get_numaxes())]
        buttons = [joystick.get_button(i) for i in range(joystick.get_numbuttons())]
        
        joy_msg = Joy()
        joy_msg.header.stamp = self.get_clock().now().to_msg()
        joy_msg.axes = axes
        joy_msg.buttons = buttons
        self.cmd_vel_pub_.publish(joy_msg)    

def main(args=None):
    rclpy.init(args=args)

    # Initialize Pygame
    pygame.init()

    # Initialize the gamepad
    pygame.joystick.init()

    # Check if any joystick/gamepad is connected
    if pygame.joystick.get_count() == 0:
        print("No gamepad found.")
        return

    # Initialize the first gamepad
    joystick = pygame.joystick.Joystick(0)
    joystick.init()

    node = joystick_publisher_node(joystick)

    # Uncomment the following code if needed
    # num_subscribers = rclpy.get_subscription_count()
    # if num_subscribers < 2 and num_subscribers is 1:
    #     print("Gamepad node didn't manage to connect with every robot's controllers")
    #     rclpy.shutdown()
    #     # Commented code may be useful for eventual debug

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

    
    