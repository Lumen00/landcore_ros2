// Publisher & Subscriber - broadcast information at determined intervals to a node which is always listening.
// Service & Client - clients request some data and the service node responds.
// Action & Client - action clients send goal requests to action servers. The action server sends goal feedback back to the action client.

// Objective : Publish commands to the motors to control them simultaneously. 

// 1. Download library to control the expansion board. 
// 2. Custom message containing commands sent to motors. One topic for each. 
// 3. Apply commands for motors asynchronously.

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/int16_multi_array.hpp"
#include <chrono>
#include <memory>
#include <string>

using namespace std::chrono_literals;

class MotorPublisher : public rclcpp::Node {
    public:
        MotorPublisher()
        : Node("motor_publisher"),  count_(0)
        {
            // Can publish numbers from -255 to 255
            publisher_ = this->create_publisher<std_msgs::msg::Int16MultiArray>("motor_drive", 10);
            auto timer_callback =
            [this]() -> void {
                auto message = std_msgs::msg::Int16MultiArray();
                this->publish_motor_array({25, 50, 100, 150});
            };
            timer_ = this->create_wall_timer(500ms, timer_callback);
            
        
        };

        void publish_motor_array(const std::array<int16_t, 4>& values){

            auto msg = std_msgs::msg::Int16MultiArray();
            msg.data.assign(values.begin(), values.end());

            publisher_->publish(msg);
        };

        

    private:
        rclcpp::Publisher<std_msgs::msg::Int16MultiArray>::SharedPtr publisher_;
        size_t count_;
        rclcpp:: TimerBase::SharedPtr timer_;
};



int main(int argc, char * argv[]){
    rclcpp::init(argc, argv);
    
    rclcpp::spin(std::make_shared<MotorPublisher>());


    rclcpp::shutdown();
    return 0;
}