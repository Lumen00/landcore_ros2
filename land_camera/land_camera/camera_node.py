import rclpy
from rclpy.qos import qos_profile_sensor_data
from rclpy.node import Node
from sensor_msgs.msg import CompressedImage
# import threading
# from picamera2 import Picamera2
# from cv_bridge import CvBridge # converts between opencv and ros images
import cv2
import numpy as np

class CameraImagePublisher(Node):

    def __init__(self):
        super().__init__('image_publisher')
        self.publisher_ = self.create_publisher(CompressedImage, '/camera/image/compressed', qos_profile_sensor_data)

        # Init the bridge
        # self.bridge = CvBridge()

        self.timer = self.create_timer(0.05, self.camera_publish_loop)

        self.cap = cv2.VideoCapture('/dev/video0', cv2.CAP_V4L)
        self.cap.set(cv2.CAP_PROP_FRAME_WIDTH, 640)
        self.cap.set(cv2.CAP_PROP_FRAME_HEIGHT, 480)
        self.get_logger().info('Publishing compressed image...')

        # # Init the camera.
        # self.picam = Picamera2()
        # config = self.picam.create_video_configuration(
        #     main={"size": (640, 480), "format": "RGB888"}
        # )
        # self.picam.configure(config)
        # self.picam.start()

        # # self.timer = self.create_timer(0.033, self.camera_publish_loop)

        # self.stream_thread = threading.Thread(target=self.camera_publish_loop, daemon=True)
        # self.stream_thread.start()

    def camera_publish_loop(self):
        ret, frame = self.cap.read()
        if ret:
            msg = CompressedImage()
            msg.header.stamp = self.get_clock().now().to_msg()
            msg.format = "jpeg"
            msg.data = np.array(cv2.imencode('.jpg', frame)[1]).tobytes()
            self.publisher_.publish(msg)

        # self.get_logger().info('Camera starting to publish.')
        # while rclpy.ok():
        #     # try:
        #         # Take a frame
        #     frame = self.picam.capture_array().copy()
        #     msg = self.bridge.cv2_to_imgmsg(frame, enco:ding='rgb8')
        #     msg.header.stamp = self.get_clock().now().to_msg()
        #     msg.header.frame_id = 'camera_link'
        #     self.publisher_.publish(msg)
        # except Exception as e:
        # self.get_logger().error(f'Publish loop failed: {e}')


def main(args=None):
    rclpy.init(args=args)

    camera_publisher = CameraImagePublisher()

    rclpy.spin(camera_publisher)

    # camera_publisher.stream_thread.join()

    # camera_publisher.picam.stop()
    camera_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()