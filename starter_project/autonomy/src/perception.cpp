#include "perception.hpp"

// ROS Headers, ros namespace
#include <algorithm>
#include <cfloat>
#include <cmath>
#include <cstddef>
#include <functional>
#include <iterator>
#include <limits>
#include <memory>
#include <numeric>
#include <opencv2/aruco.hpp>
#include <opencv2/core.hpp>
#include <opencv2/core/mat.hpp>
#include <opencv2/core/types.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <rclcpp/logging.hpp>

auto main(int argc, char** argv) -> int {
    rclcpp::init(argc, argv);

    // "spin" blocks until our node dies
    rclcpp::spin(std::make_shared<mrover::Perception>());
    rclcpp::shutdown();


    return EXIT_SUCCESS;
}

namespace mrover {

    Perception::Perception() : Node("perception") {
        // Subscribe to camera image messages
        // Every time another node publishes to this topic we will be notified
        // Specifically the callback we passed will be invoked
        mImageSubscriber = create_subscription<sensor_msgs::msg::Image>("zed/left/image", 1, [this](sensor_msgs::msg::Image::ConstSharedPtr const& msg) {
            imageCallback(msg);
        });

        // Create a publisher for our tag topic
        // See: http://wiki.ros.org/ROS/Tutorials/WritingPublisherSubscriber%28c%2B%2B%29
        // TODO: uncomment me!
        mTagPublisher = create_publisher<msg::StarterProjectTag>("tag", 1);

        mTagDictionary = cv::makePtr<cv::aruco::Dictionary>(cv::aruco::getPredefinedDictionary(cv::aruco::DICT_4X4_50));
    }

    auto Perception::imageCallback(sensor_msgs::msg::Image::ConstSharedPtr const& imageMessage) -> void {
        // Create a cv::Mat from the ROS image message
        // Note this does not copy the image data, it is basically a pointer
        // Be careful if you extend its lifetime beyond this function
        cv::Mat imageBGRA{static_cast<int>(imageMessage->height), static_cast<int>(imageMessage->width),
                      CV_8UC4, const_cast<uint8_t*>(imageMessage->data.data())};
        cv::Mat image;

        cv::cvtColor(imageBGRA, image, cv::COLOR_BGRA2BGR);

        // TODO: implement me!
        findTagsInImage(image, mTags);
        if(!mTags.empty()) publishTag(selectTag(image, mTags));

    }

    auto Perception::findTagsInImage(cv::Mat const& image, std::vector<msg::StarterProjectTag>& tags) -> void { // NOLINT(*-convert-member-functions-to-static)
        // hint: take a look at OpenCV's documentation for the detectMarkers function
        // hint: you have mTagDictionary, mTagCorners, and mTagIds member variables already defined! (look in perception.hpp)
        // hint: write and use the "getCenterFromTagCorners" and "getClosenessMetricFromTagCorners" functions

        tags.clear(); // Clear old tags in output vector

        cv::aruco::detectMarkers(image, mTagDictionary, mTagCorners, mTagIds);
        if (mTagIds.size() > 0) cv::aruco::drawDetectedMarkers(image, mTagCorners, mTagIds);

        tags.resize(mTagIds.size());
        for (size_t i = 0; i < tags.size(); ++i){
            tags[i].tag_id = (mTagIds[i]);
            tags[i].closeness_metric = getClosenessMetricFromTagCorners(image, mTagCorners[i]);
            std::pair<float, float> center = getCenterFromTagCorners(mTagCorners[i]);
            tags[i].x_tag_center_pixel = center.first;
            tags[i].y_tag_center_pixel = center.second;
        }

    }

    auto Perception::selectTag(cv::Mat const& image, std::vector<msg::StarterProjectTag> const& tags) -> msg::StarterProjectTag { // NOLINT(*-convert-member-functions-to-static)
        // TODO: implement me!
    
        float min = FLT_MAX;
        size_t index = 0;
        for (size_t i = 0; i < tags.size(); ++i){
            float xDistance = (image.size().width / 2.0) - (tags[i].x_tag_center_pixel);
            float yDistance = (image.size().height / 2.0) - (tags[i].y_tag_center_pixel);
            float distance = sqrtf(powf(xDistance, 2) + powf(yDistance, 2));
            if (distance < min){
                min = distance;
                index = i;
            }
        }


        return tags[index];
    }

    auto Perception::publishTag(msg::StarterProjectTag const& tag) -> void {
        // TODO: implement me!
        mTagPublisher->publish(tag);
    }

    auto Perception::getClosenessMetricFromTagCorners(cv::Mat const& image, std::vector<cv::Point2f> const& tagCorners) -> float { // NOLINT(*-convert-member-functions-to-static)
        // hint: think about how you can use the "image" parameter
        // hint: this is an approximation that will be used later by navigation to stop "close enough" to a tag.
        // hint: try not overthink, this metric does not have to be perfectly accurate, just correlated to distance away from a tag

        float xSize = (tagCorners[1].x - tagCorners[0].x) / image.size().width;
        float ySize = (tagCorners[3].y - tagCorners[0].y) / image.size().height;

        float closeness = sqrtf(powf(xSize, 2) + powf(ySize, 2));
        return closeness;
        

    }

    auto Perception::getCenterFromTagCorners(std::vector<cv::Point2f> const& tagCorners) -> std::pair<float, float> { // NOLINT(*-convert-member-functions-to-static)

        std::pair<float, float> center;
        center.first = (tagCorners[0].x + tagCorners[1].x) / 2.0;
        center.second = (tagCorners[0].y + tagCorners[3].y) / 2,0;


        return center;
    }

} // namespace mrover