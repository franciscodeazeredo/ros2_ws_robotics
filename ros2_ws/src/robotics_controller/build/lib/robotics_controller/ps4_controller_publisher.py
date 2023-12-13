#!/usr/bin/env python3
import pygame
import rclpy
from sensor_msgs.msg import Joy

def publish_ps4_controller_data(publisher):
    pygame.init()
    pygame.joystick.init()

    try:
        # Initialize joystick
        joystick_count = pygame.joystick.get_count()
        if joystick_count == 0:
            raise RuntimeError("No joysticks found. Make sure your PS4 controller is connected.")
        
        joystick = pygame.joystick.Joystick(0)
        joystick.init()

        # Create Joy message
        joy_msg = Joy()

        while rclpy.ok():
            # Handle events
            for event in pygame.event.get():
                if event.type == pygame.JOYAXISMOTION:
                    joy_msg.axes = [joystick.get_axis(i) for i in range(joystick.get_numaxes())]
                elif event.type == pygame.JOYBUTTONDOWN or event.type == pygame.JOYBUTTONUP:
                    joy_msg.buttons = [joystick.get_button(i) for i in range(joystick.get_numbuttons())]

            # Publish Joy message
            publisher.publish(joy_msg)

    except KeyboardInterrupt:
        pass
    finally:
        pygame.quit()

def main():
    rclpy.init()
    node = rclpy.create_node('ps4_controller_publisher')
    publisher = node.create_publisher(Joy, 'joy', 10)

    try:
        publish_ps4_controller_data(publisher)
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
