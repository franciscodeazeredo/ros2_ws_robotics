#!/usr/bin/env python3
from ps4_controller.msg import PS4
import rclpy
#[X1, Y1, X2, Y2]
#float32 axes
#[X, O, /\, [], R1, L1, R2, L2, share, options, home, L3, R3]
#int32[] buttons
#[X,Y]
#int32[] numpad
def joy_callback(msg):
    print("Received Joy message:")
    print("Axes:", msg.axes)
    print("Buttons:", msg.buttons)
    print("Numpad:", msg.numpad)
    print("---------------------")

def main():
    rclpy.init()
    node = rclpy.create_node('ps4_controller_subscriber')
    subscriber = node.create_subscription(PS4, 'ps4', joy_callback, 10)
    print("Listening for Joy messages...")
    print("---------------------")
    joy_callback(PS4())
    print("---------------------")
    print("Press CTRL+C to exit")
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
