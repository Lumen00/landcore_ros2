import rclpy
from rclpy.qos import qos_profile_sensor_data
from rclpy.node import Node
from sensor_msgs.msg import CompressedImage
# import threading
# from picamera2 import Picamera2
# from cv_bridge import CvBridge # converts between opencv and ros images
import cv2
import numpy as np
import time

class CameraImagePublisher(Node):

    def __init__(self):
        super().__init__('image_publisher')
        self.publisher_ = self.create_publisher(CompressedImage, '/camera/image_raw/compressed', 1)

        # Init the bridge
        # self.bridge = CvBridge()


        self.cap = cv2.VideoCapture(0, cv2.CAP_V4L2)
        self.cap.set(cv2.CAP_PROP_FRAME_WIDTH, 640)
        self.cap.set(cv2.CAP_PROP_FRAME_HEIGHT, 480)
        self.get_logger().info('Publishing compressed image...')

        if not self.cap.isOpened():
            self.get_logger().info('Failed to open camera.')

        time.sleep(2)

        self.timer = self.create_timer(0.05, self.camera_publish_loop)

    def camera_publish_loop(self):
        ret, frame = self.cap.read()
        if ret:
            msg = CompressedImage()
            msg.header.stamp = self.get_clock().now().to_msg()
            msg.format = "jpeg"
            msg.data = np.array(cv2.imencode('.jpg', frame)[1]).tobytes()
            # self.get_logger().info(f'{msg.data}')
            self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)

    camera_publisher = CameraImagePublisher()

    rclpy.spin(camera_publisher)

    # camera_publisher.stream_thread.join()

    # camera_publisher.picam.stop()
    camera_publisher.cap.release()
    camera_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()