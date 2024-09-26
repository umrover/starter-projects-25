#include "perception.hpp"

// ROS Headers, ros namespace
#include <cmath>
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
        // mTagPublisher = create_publisher<msg::StarterProjectTag>("tag", 1);

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
        // hint: think about the order in which these functions were implemented ;)
        (void)this;
    }

    auto Perception::findTagsInImage(cv::Mat const& image, std::vector<msg::StarterProjectTag>& tags) -> void { // NOLINT(*-convert-member-functions-to-static)
        // hint: take a look at OpenCV's documentation for the detectMarkers function
        // hint: you have mTagDictionary, mTagCorners, and mTagIds member variables already defined! (look in perception.hpp)
        // hint: write and use the "getCenterFromTagCorners" and "getClosenessMetricFromTagCorners" functions
        cv::aruco::detectMarkers(image, mTagDictionary, mTagCorners, markerIds, parameters, rejectedCandidates);
        tags.clear(); // Clear old tags in output vector

        // TODO: implement me!
        (void)image;

    }

    auto Perception::selectTag(cv::Mat const& image, std::vector<msg::StarterProjectTag> const& tags) -> msg::StarterProjectTag { // NOLINT(*-convert-member-functions-to-static)
        // TODO: implement me!
        
        return msg::StarterProjectTag{};
    }

    auto Perception::publishTag(msg::StarterProjectTag const& tag) -> void {
        // TODO: implement me!
        (void)tag;

    }

    auto Perception::getClosenessMetricFromTagCorners(cv::Mat const& image, std::vector<cv::Point2f> const& tagCorners) -> float { // NOLINT(*-convert-member-functions-to-static)
        // hint: think about how you can use the "image" parameter
        // hint: this is an approximation that will be used later by navigation to stop "close enough" to a tag.
        // hint: try not overthink, this metric does not have to be perfectly accurate, just correlated to distance away from a tag
        
        if (tagCorners.size() < 4) {
        return cv::Size(0, 0); 
    }

    
        float minX = tagCorners[0].x, maxX = tagCorners[0].x;
        float minY = tagCorners[0].y, maxY = tagCorners[0].y;

        for (const auto& corner : tagCorners) {
            if (corner.x < minX) minX = corner.x;
            if (corner.x > maxX) maxX = corner.x;
            if (corner.y < minY) minY = corner.y;
            if (corner.y > maxY) maxY = corner.y;
        }

    
        float centerX = (maxX + minX)/2.0f;
        float centerY = (maxY + minY)/2.0f;
        return std::make_tuple(centerX, centerY);
    
    
    }
    auto Perception::getCenterFromTagCorners(std::vector<cv::Point2f> const& tagCorners) -> std::pair<float, float> { // NOLINT(*-convert-member-functions-to-static)
        static std::pair<float, float> getCenterFromTagCorners(const std::vector<cv::Point2f>& tagCorners) {
        if (tagCorners.size() < 4) {
            return {0.0f, 0.0f}; // or handle the error as needed
        }

        float minX = tagCorners[0].x, maxX = tagCorners[0].x;
        float minY = tagCorners[0].y, maxY = tagCorners[0].y;

        for (const auto& corner : tagCorners) {
            if (corner.x < minX) minX = corner.x;
            if (corner.x > maxX) maxX = corner.x;
            if (corner.y < minY) minY = corner.y;
            if (corner.y > maxY) maxY = corner.y;
        }

        float centerX = (minX + maxX) / 2.0f;
        float centerY = (minY + maxY) / 2.0f;

        return {centerX, centerY};
    }

    static std::pair<float, float> findClosestTag(const std::vector<std::vector<cv::Point2f>>& tagCorners, const cv::Point2f& cameraPosition) {
        std::pair<float, float> closestTagCenter = {0.0f, 0.0f};
        float closestDistance = std::numeric_limits<float>::max();

        for (const auto& tagCorners : tagCorners) {
            auto tagCenter = getCenterFromTagCorners(tagCorners);
            float distance = std::sqrt(std::pow(tagCenter.first - cameraPosition.x, 2) +
                                       std::pow(tagCenter.second - cameraPosition.y, 2));

            if (distance < closestDistance) {
                closestDistance = distance;
                closestTagCenter = tagCenter;
            }
        }

        return closestTagCenter; // Returns the center of the closest tag
    }

        
    }

} // namespace mrover