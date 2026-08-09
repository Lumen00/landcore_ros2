import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
import threading
from picamera2 import Picamera2
from cv_bridge import CvBridge # converts between opencv and ros images

class CameraImagePublisher(Node):

    def __init__(self):
        super().__init__('minimal_publisher')
        self.publisher_ = self.create_publisher(Image, '/camera/image_raw', 10)

        # Init the bridge
        self.bridge = CvBridge()

        # Init the camera.
        self.picam = Picamera2()
        config = self.picam.create_video_configuration(
            main={"size": (640, 480), "format": "RGB888"}
        )
        self.picam.configure(config)
        self.picam.start()

        self.stream_thread = threading.Thread(target=self.camera_publish_loop, daemon=True)
        self.stream_thread.start()

    def camera_publish_loop(self):
        while rclpy.ok():
            # Take a frame
            frame = self.picam.capture_array()
            msg = self.bridge.cv2_to_imgmsg(frame, encoding='rgb8')
            msg.header.stamp = self.get_clock().now().to_msg()
            msg.header.frame_id = 'camera_link'
            self.publisher_.publish(msg)


def main(args=None):
    rclpy.init(args=args)

    camera_publisher = CameraImagePublisher()

    rclpy.spin(camera_publisher)

    camera_publisher.picam.stop()
    camera_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()