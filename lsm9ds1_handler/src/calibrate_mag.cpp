#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/magnetic_field.hpp>
#include <memory>
#include <vector>
#include <utility>
using std::placeholders::_1;

class MagnetometerSubscriber : public rclcpp::Node{
    public: 
        MagnetometerSubscriber() : Node("mag_subscriber"){
            magSubscriber_ = this->create_subscription<sensor_msgs::msg::MagneticField>(
                "/imu/mag", 10, std::bind(&MagnetometerSubscriber::calibCallback, this, _1));
        }

    private: 
        rclcpp::Subscription<sensor_msgs::msg::MagneticField>::SharedPtr magSubscriber_;
        void calibCallback(const sensor_msgs::msg::MagneticField::SharedPtr msg){
            // Keep track of the minimum and maximum magnetometer readings on all axes.
            
            float x = msg->magnetic_field.x;
            float y = msg->magnetic_field.y;
            float z = msg->magnetic_field.z;

            std::vector<float> magResults = {x,y,z};
            // Comparison.
            uint8_t iter = 0;
            for (const auto & axis : magResults){
                if (axis < minMax.at(iter).first){
                    minMax.at(iter).first = axis;
                }
                if (axis > minMax.at(iter).second){
                    minMax.at(iter).second = axis;
                }
                iter++;
            } 
            RCLCPP_INFO(this->get_logger(), "X: %f %f Y: %f %f Z: %f %f", 
                minMax.at(0).first,
                minMax.at(0).second,
                minMax.at(1).first,
                minMax.at(1).second,
                minMax.at(2).first,
                minMax.at(2).second            
            );
        }
        // Vector containing min and maxes.
        // std::pair<float, float> test;
        std::vector<std::pair<float, float>> minMax = {
            {0,0}, // Min X, Max X
            {0,0}, // Y
            {0,0}  // Z
        }; 
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MagnetometerSubscriber>());
    rclcpp::shutdown();
    return 0;
}
