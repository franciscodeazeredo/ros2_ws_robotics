import rclpy
from rclpy.node import Node
from joystick_publisher import joy_msg  # Assuming you have a Joy message defined in your package
from robot import Point, move_plan, move

class MovementSubscriberNode(Node):
    def __init__(self):
        super().__init__("movement_subscriber")
        self.get_logger().info("Movement subscriber has started")
        self.movement_subscriber_ = self.create_subscription(joy_msg, 'joystick', self.joystick_callback, 10)
        self.point = Point()

    def joystick_callback(self, msg):
        axes = msg.axes
        move_plan(self.point, axes)
        move(None, self.point)  # Assuming 'ser' is not used in your move function

def main(args=None):
    rclpy.init(args=args)
    node = MovementSubscriberNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
