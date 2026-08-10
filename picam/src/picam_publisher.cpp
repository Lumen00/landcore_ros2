#include <rclcpp/rclcpp.hpp>
#include <image_transport/image_transport.hpp>
#include <opencv2/opencv.hpp>
#include <cv_bridge/cv_bridge.hpp>
#include <chrono>
#include <memory>

using namespace std::chrono_literals;

class PiCamPublisher : public rclcpp::Node
{
public:
  PiCamPublisher() : Node("picam_publisher")
  {
    // Declare parameters so you can tune from the command line / launch file
    this->declare_parameter("device_id", 0);
    this->declare_parameter("width", 640);
    this->declare_parameter("height", 480);
    this->declare_parameter("fps", 30.0);
    this->declare_parameter("warmup_frames", 30);
    this->declare_parameter("frame_id", std::string("camera"));

    int device_id = this->get_parameter("device_id").as_int();
    int width = this->get_parameter("width").as_int();
    int height = this->get_parameter("height").as_int();
    double fps = this->get_parameter("fps").as_double();
    int warmup_frames = this->get_parameter("warmup_frames").as_int();
    frame_id_ = this->get_parameter("frame_id").as_string();

    // Open camera via V4L2 explicitly
    cap_.open(device_id, cv::CAP_V4L2);
    if (!cap_.isOpened()) {
      RCLCPP_ERROR(this->get_logger(), "Failed to open camera at /dev/video%d", device_id);
      throw std::runtime_error("Camera open failed");
    }

    cap_.set(cv::CAP_PROP_FRAME_WIDTH, width);
    cap_.set(cv::CAP_PROP_FRAME_HEIGHT, height);
    cap_.set(cv::CAP_PROP_FPS, fps);

    RCLCPP_INFO(this->get_logger(), "Camera opened. Warming up (%d frames)...", warmup_frames);

    // Let auto-exposure/auto-gain settle before publishing anything
    rclcpp::sleep_for(2s);
    cv::Mat warmup_frame;
    for (int i = 0; i < warmup_frames; ++i) {
      cap_.read(warmup_frame);
    }
    RCLCPP_INFO(this->get_logger(), "Warm-up complete. Publishing on 'image_raw'.");

    // image_transport::create_publisher creates image_raw AND image_raw/compressed etc.
    pub_ = image_transport::create_publisher(this, "image_raw");

    auto period = std::chrono::duration<double>(1.0 / fps);
    timer_ = this->create_wall_timer(
      std::chrono::duration_cast<std::chrono::milliseconds>(period),
      std::bind(&PiCamPublisher::timerCallback, this));
  }

  ~PiCamPublisher() override
  {
    if (cap_.isOpened()) {
      cap_.release();
    }
  }

private:
  void timerCallback()
  {
    cv::Mat frame;
    if (!cap_.read(frame) || frame.empty()) {
      RCLCPP_WARN(this->get_logger(), "Frame grab failed or empty frame, skipping");
      return;
    }

    std_msgs::msg::Header header;
    header.stamp = this->now();
    header.frame_id = frame_id_;

    auto msg = cv_bridge::CvImage(header, "bgr8", frame).toImageMsg();
    pub_.publish(*msg);
  }

  cv::VideoCapture cap_;
  image_transport::Publisher pub_;
  rclcpp::TimerBase::SharedPtr timer_;
  std::string frame_id_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  try {
    auto node = std::make_shared<PiCamPublisher>();
    rclcpp::spin(node);
  } catch (const std::exception & e) {
    RCLCPP_FATAL(rclcpp::get_logger("picam_publisher"), "Fatal error: %s", e.what());
    rclcpp::shutdown();
    return 1;
  }
  rclcpp::shutdown();
  return 0;
}