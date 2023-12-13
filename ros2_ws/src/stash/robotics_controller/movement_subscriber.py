import rclpy
from rclpy.node import Node
from joystick_publisher import joy_msg  # Assuming you have a Joy message defined in your package
from robot import Point, move
import serial_tools
import pygame


class MovementSubscriberNode(Node):
    def __init__(self):
        super().__init__("movement_subscriber")
        self.get_logger().info("Movement subscriber has started")

        self.movement_subscriber_ = self.create_subscription(
            joy_msg, 'joystick', 10)
        self.point = Point("P0")
        self.serial_port = '/dev/ttyUSB0' # might need teaking
        self.speed = 1
        self.move_plan = Point('move')
        self.ser = serial_tools.connect_serial(self.serial_port)

    def speed_update(self, buttons, axes):

        if buttons[4]:  # Up arrow button at index 11
            self.speed += 1
            print('speed up', self.speed)

        elif buttons[5] and self.speed > 1:  # Down arrow button at index 12
            self.speed -= 1
            print('speed down', self.speed)

        move_plan += [axis * self.speed if abs(axis) >= 0.3 else 0 for axis in axes]
        return move_plan

    def axis_shift(self, buttons, axes, axis_shift):
        if buttons[1]:
            axis_shift = True if axis_shift == False else False

        if axis_shift:
            value, axis = max(enumerate(axes), key=lambda x: abs(x[1]))
            if value > 0.3:
                serial_tools.send(self.ser, 'shift P0 by {} {}'.format(axis, self.speed * value))
            #continue

    def joystick_handler(self, msg: joy_msg):
        axes = msg.axes
        buttons = msg.buttons
        axis_shift = False

        self.get_logger().info(f"Axes: {axes}")
        self.get_logger().info(f"Buttons: {buttons}")


        self.axis_shift(self, buttons, axes, axis_shift)
        move_plan = self.speed_update(buttons, axes)

        move(self.ser, self.point, move_plan)

def main(self, args=None):
    rclpy.init(args=args)
    
    node = MovementSubscriberNode()
    
    self.joystick_handler(joy_msg)

    self.move_plan.print()
    self.point.print()

    self.movement_subscriber_ = self.create_subscription(joy_msg, 'joystick', self.joystick_callback, 10)
    self.point = Point()
"""
def joystick_callback(self, msg):
    axes = msg.axes
    Point.move_plan(self.point, axes)
    move(None, self.point)  # Assuming 'ser' is not used in your move function
"""
def main(args=None):
    rclpy.init(args=args)
    node = MovementSubscriberNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    MovementSubscriberNode.main()
