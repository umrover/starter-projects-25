#include "perception.hpp"
#include <cmath>
#include <limits>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

auto main(int argc, char** argv) -> int {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<mrover::Perception>());
    rclcpp::shutdown();
    return EXIT_SUCCESS;
}

namespace mrover {

    Perception::Perception() : Node("perception") {
        mImageSubscriber = create_subscription<sensor_msgs::msg::Image>(
            "zed/left/image", 1, 
            [this](sensor_msgs::msg::Image::ConstSharedPtr const& msg) {
                imageCallback(msg);
            });
        mTagPublisher = create_publisher<msg::StarterProjectTag>("tag", 1);
        mTagDictionary = cv::makePtr<cv::aruco::Dictionary>(cv::aruco::getPredefinedDictionary(cv::aruco::DICT_4X4_50));
    }

    void Perception::imageCallback(sensor_msgs::msg::Image::ConstSharedPtr const& imageMessage) {
        std::cout << "Received image, processing for tags..." << std::endl;

        mCurrentImage = cv::Mat{static_cast<int>(imageMessage->height), static_cast<int>(imageMessage->width),
                                 CV_8UC4, const_cast<uint8_t*>(imageMessage->data.data())};
        cv::Mat imageBGR;
        cv::cvtColor(mCurrentImage, imageBGR, cv::COLOR_BGRA2BGR);
        
        std::vector<msg::StarterProjectTag> tags;
        findTagsInImage(imageBGR, tags);

        std::cout << "Found " << tags.size() << " tags." << std::endl;

        if (!tags.empty()) {
            auto closestTag = selectTag(imageBGR, tags);
            publishTag(closestTag);
        } else {
            std::cout << "No tags found in image." << std::endl;
        }
    }

    void Perception::findTagsInImage(cv::Mat const& image, std::vector<msg::StarterProjectTag>& tags) {
        std::vector<int> markerIds;
        cv::aruco::detectMarkers(image, mTagDictionary, mTagCorners, markerIds);

        std::cout << "Detected " << markerIds.size() << " markers." << std::endl;

        tags.clear();
        for (size_t i = 0; i < markerIds.size(); ++i) {
            msg::StarterProjectTag tag;
            tag.id = markerIds[i];
            tag.corners = mTagCorners[i]; // Assuming you have this field in msg::StarterProjectTag
            tags.push_back(tag);
        }
    }

    msg::StarterProjectTag Perception::selectTag(cv::Mat const& image, std::vector<msg::StarterProjectTag> const& tags) {
        if (tags.empty()) {
            throw std::invalid_argument("No tags provided.");
        }

        cv::Point2f imageCenter(image.cols / 2.0f, image.rows / 2.0f);
        msg::StarterProjectTag closestTag;
        float closestDistance = std::numeric_limits<float>::max();

        for (const auto& tag : tags) {
            auto tagCenter = getCenterFromTagCorners(tag.corners);
            float distance = cv::norm(imageCenter - cv::Point2f(tagCenter.first, tagCenter.second));

            if (distance < closestDistance) {
                closestDistance = distance;
                closestTag = tag;
            }
        }

        return closestTag;
    }

    void Perception::publishTag(msg::StarterProjectTag const& tag) {
        auto message = std::make_shared<msg::StarterProjectTag>(tag);
        mTagPublisher->publish(tag);
        std::cout << "Published tag ID: " << tag.id << std::endl;
    }

    float Perception::getClosenessMetricFromTagCorners(cv::Mat const& image, std::vector<cv::Point2f> const& tagCorners) {
        if (tagCorners.size() != 4) {
            throw std::invalid_argument("tagCorners must contain exactly 4 points.");
        }

        cv::Point2f center(0, 0);
        for (const auto& corner : tagCorners) {
            center += corner;
        }
        center *= 0.25f;

        cv::Point2f expectedCenter(image.cols / 2.0f, image.rows / 2.0f);
        float distance = cv::norm(center - expectedCenter);
        float maxDistance = std::sqrt((image.cols * image.cols) + (image.rows * image.rows)) / 2.0f;
        return 1.0f - std::clamp(distance / maxDistance, 0.0f, 1.0f);
    }

    std::pair<float, float> Perception::getCenterFromTagCorners(std::vector<cv::Point2f> const& tagCorners) {
        float minX = tagCorners[0].x, maxX = tagCorners[0].x;
        float minY = tagCorners[0].y, maxY = tagCorners[0].y;

        for (const auto& corner : tagCorners) {
            if (corner.x < minX) minX = corner.x;
            if (corner.x > maxX) maxX = corner.x;
            if (corner.y < minY) minY = corner.y;
            if (corner.y > maxY) maxY = corner.y;
        }

        float x_tag_center_pixel = (minX + maxX) / 2.0f;
        float y_tag_center_pixel = (minY + maxY) / 2.0f;

        return {x_tag_center_pixel, y_tag_center_pixel};
    }
    
} // namespace mrover
