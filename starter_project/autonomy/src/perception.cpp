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
        msg::StarterProjectTag publishable = selectTag(image, mTags);
        publishTag(publishable);
    }

    auto Perception::findTagsInImage(cv::Mat const& image, std::vector<msg::StarterProjectTag>& tags) -> void { // NOLINT(*-convert-member-functions-to-static)
        // hint: take a look at OpenCV's documentation for the detectMarkers function
        // hint: you have mTagDictionary, mTagCorners, and mTagIds member variables already defined! (look in perception.hpp)
        // hint: write and use the "getCenterFromTagCorners" and "getClosenessMetricFromTagCorners" functions

        tags.clear(); // Clear old tags in output vector

        // TODO: implement me!
        cv::aruco::detectMarkers(image, mTagDictionary, mTagCorners, mTagIds);

        for(int i = 0; i < mTagCorners.size(); ++i) {
            msg::StarterProjectTag meatloaf;
            meatloaf.tag_id = mTagIds[i];
            auto center = getCenterFromTagCorners(mTagCorners[i]);
            meatloaf.x_tag_center_pixel = center.first;
            meatloaf.y_tag_center_pixel = center.second;
            meatloaf.closeness_metric = getClosenessMetricFromTagCorners(image, mTagCorners[i]);
            tags.push_back(meatloaf);
        }
    }

    auto Perception::selectTag(cv::Mat const& image, std::vector<msg::StarterProjectTag> const& tags) -> msg::StarterProjectTag { // NOLINT(*-convert-member-functions-to-static)
        // TODO: implement me!
        // tag is vector of all tags
        // determine tag closest to center of camera (middle of image)

        // tag will have center coordinates
        // take tag center coordinates and use distance equation to find dist from midpoint
        // if distance from midpoint of currentTag is closer than closestTag
        // set closestTag to currentTag

        msg::StarterProjectTag closest = tags[0];
        std::pair<float, float> closestTag = std::make_pair(tags[0].x_tag_center_pixel, tags[0].y_tag_center_pixel);
        float x_center = image.cols/2;
        float y_center = image.rows/2;
        std::pair<float, float> midpoint = std::make_pair(x_center, y_center);

        for(int i = 1; i < tags.size(); ++i) {
            msg::StarterProjectTag current = tags[i];
            std::pair<float, float> currentTag = std::make_pair(tags[i].x_tag_center_pixel, tags[i].y_tag_center_pixel);
            float distClosest = sqrt(pow((closestTag.first - midpoint.first), 2) + pow((closestTag.second - midpoint.second),2));
            float distCurrent = sqrt(pow((currentTag.first - midpoint.first), 2) + pow((currentTag.second - midpoint.second),2));

            if(distCurrent < distClosest) {
                closest = current;
            }
        }

        return closest;
    }

    auto Perception::publishTag(msg::StarterProjectTag const& tag) -> void {
        // TODO: implement me!

        mTagPublisher->publish(tag);
    }

    auto Perception::getClosenessMetricFromTagCorners(cv::Mat const& image, std::vector<cv::Point2f> const& tagCorners) -> float { // NOLINT(*-convert-member-functions-to-static)
        // hint: think about how you can use the "image" parameter
        // hint: this is an approximation that will be used later by navigation to stop "close enough" to a tag.
        // hint: try not overthink, this metric does not have to be perfectly accurate, just correlated to distance away from a tag

        // TODO: implement me!
        // Side length (Not perfect because it may not be parrallel with the image plane)
        // This works because the ordering os clockwise

        // determine ratio between openCV image matrix and delta-x of top bar
        float x_axis = image.cols;

        float corner1x = tagCorners[0].x;
        float corner2x = tagCorners[1].x;
        float delta_x = corner2x - corner1x;

        return delta_x/x_axis;
    }



    auto Perception::getCenterFromTagCorners(std::vector<cv::Point2f> const& tagCorners) -> std::pair<float, float> { // NOLINT(*-convert-member-functions-to-static)
        // TODO: implement me!

        // tagCorners is a 4 long vector of tuple coordinates representing corners of ArUco tag
        // Need to take those 4 tuple coordinates and find midpoint of all of them
        // Return a tuple (x,y) of midpoint

        cv::Point2f corner1 = tagCorners[0];
        cv::Point2f corner2 = tagCorners[1];
        cv::Point2f corner3 = tagCorners[2];
        cv::Point2f corner4 = tagCorners[3];

        float x_coord = (1/4)*(corner1.x + corner2.x + corner3.x + corner4.x);
        float y_coord = (1/4)*(corner1.y + corner2.y + corner3.y + corner4.y);

        return std::make_pair(x_coord, y_coord);
    }

} // namespace mrover