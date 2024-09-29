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

double triangleArea(const cv::Point2f& p1, const cv::Point2f& p2, const cv::Point2f& p3) {
    return 0.5 * abs(p1.x * (p2.y - p3.y) + p2.x * (p3.y - p1.y) + p3.x * (p1.y - p2.y));
}

double convexQuadrilateralArea(const cv::Point2f& p1, const cv::Point2f& p2,
                               const cv::Point2f& p3, const cv::Point2f& p4) {
    return triangleArea(p1, p2, p3) + triangleArea(p2, p3, p4);
}

auto main(int argc, char **argv) -> int {
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
        // hint: think about the order in which these functions were implemented ;)
        findTagsInImage(image, mTags);
        auto tag = selectTag(image, mTags);
        publishTag(tag);
    }

    auto Perception::findTagsInImage(cv::Mat const& image, std::vector<msg::StarterProjectTag>& tags) -> void { // NOLINT(*-convert-member-functions-to-static)
        // hint: take a look at OpenCV's documentation for the detectMarkers function
        // hint: you have mTagDictionary, mTagCorners, and mTagIds member variables already defined! (look in perception.hpp)
        // hint: write and use the "getCenterFromTagCorners" and "getClosenessMetricFromTagCorners" functions

        tags.clear(); // Clear old tags in output vector

        // TODO: implement me!
        cv::aruco::detectMarkers(image, mTagDictionary, mTagCorners, mTagIds);

        for (unsigned int i = 0; i < mTagCorners.size(); i++) {
            msg::StarterProjectTag tag;
            tag.tag_id = mTagIds[i];

            auto center = getCenterFromTagCorners(mTagCorners[i]);
            tag.x_tag_center_pixel = center.first;
            tag.y_tag_center_pixel = center.second;

            tag.closeness_metric = getClosenessMetricFromTagCorners(image, mTagCorners[i]);

            tags.push_back(tag);
        }
    }

    auto Perception::selectTag(cv::Mat const &image,
                               std::vector <msg::StarterProjectTag> const &tags) -> msg::StarterProjectTag { // NOLINT(*-convert-member-functions-to-static)
        std::pair<float, float> center{image.cols / 2.0f, image.rows / 2.0f};

        float minDistance = std::numeric_limits<float>::infinity();
        msg::StarterProjectTag closestTag{};

        for (auto const &tag: tags) {
            float distance = std::sqrt(
                    pow(center.first - tag.x_tag_center_pixel, 2)
                    + pow(center.second - tag.y_tag_center_pixel, 2)
            );

            if (distance < minDistance) {
                minDistance = distance;
                closestTag = tag;
            }
        }

        return closestTag;
    }

    auto Perception::publishTag(msg::StarterProjectTag const& tag) -> void { // TODO: implement me!
        mTagPublisher->publish(tag);
    }

    auto Perception::getClosenessMetricFromTagCorners(cv::Mat const &image,
                                                      std::vector<cv::Point2f> const &tagCorners) -> float { // NOLINT(*-convert-member-functions-to-static)
        // hint: think about how you can use the "image" parameter
        // hint: this is an approximation that will be used later by navigation to stop "close enough" to a tag.
        // hint: try not overthink, this metric does not have to be perfectly accurate, just correlated to distance away from a tag

        // TODO: implement me!
        return convexQuadrilateralArea(tagCorners[0], tagCorners[1], tagCorners[2], tagCorners[3]);
    }

    auto Perception::getCenterFromTagCorners(
            std::vector <cv::Point2f> const &tagCorners) -> std::pair<float, float> { // NOLINT(*-convert-member-functions-to-static)
        // TODO: implement me!
        auto sum = std::accumulate(tagCorners.begin(), tagCorners.end(), cv::Point2f{0, 0});
        float n = tagCorners.size();
        return {sum.x / n, sum.y / n};
    }

} // namespace mrover
