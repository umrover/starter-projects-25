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
        
        //find tags in the image
        findTagsInImage(image, mTags);

        //select the centermost tag
        msg::StarterProjectTag selected_tag = selectTag(image, mTags);

        //publish selected tag
        publishTag(selected_tag);
        
        //WHAT IF NO TAGS FOUND?
    }

    auto Perception::findTagsInImage(cv::Mat const& image, std::vector<msg::StarterProjectTag>& tags) -> void { // NOLINT(*-convert-member-functions-to-static)
        // hint: take a look at OpenCV's documentation for the detectMarkers function
        // hint: you have mTagDictionary, mTagCorners, and mTagIds member variables already defined! (look in perception.hpp)
        // hint: write and use the "getCenterFromTagCorners" and "getClosenessMetricFromTagCorners" functions

        tags.clear(); // Clear old tags in output vector

        // TODO: implement me!

        //REMEMBER TAGS ARE PASSED AS A POINTER
        //what do we do with getCenterFromTagCorners, 
        //vector of starterprojecttags--each tag includes: int tag_id, float x_tag_center_pixel, y_tag_centerl_pixel, closeness metric)
        //mtagCorners--vector of vectors of points
        //mTagIds - vector of ints
        //mTags - vector of starterprojecttagstype

        cv::aruco::detectMarkers(image, mTagDictionary, mTagCorners, mTagIds);
    
        for(size_t i = 0; i < mTagIds.size(); i++)
        {
            msg::StarterProjectTag tag;
            tag.tag_id = mTagIds[i];
            std::pair<float, float> center = getCenterFromTagCorners(mTagCorners[i]);
            tag.x_tag_center_pixel = (center.first - float(image.cols) / 2) / float(image.cols);
            tag.y_tag_center_pixel = (center.second - float(image.rows) / 2) / float(image.rows);
            tag.closeness_metric = getClosenessMetricFromTagCorners(image, mTagCorners[i]);
            tags.push_back(tag);    
        }



    }

    auto Perception::selectTag(cv::Mat const& image, std::vector<msg::StarterProjectTag> const& tags) -> msg::StarterProjectTag { // NOLINT(*-convert-member-functions-to-static)
        // TODO: implement me!
        //select the centermost tag (distance to image width/2, image height/2 is the smallest)
        //width is cols, height is rows

        float distance, x_distance, y_distance;
        float image_center_x = image.cols / 2;
        float image_center_y = image.rows / 2;

        float min = pow(tags[0].x_tag_center_pixel, 2) + pow(tags[0].y_tag_center_pixel, 2);
        msg::StarterProjectTag centermost_tag = tags[0];

        //what if tags = 0 or 1?
        for(size_t i = 1; i < tags.size(); i++)
        {
            x_distance = abs(image_center_x - tags[i].x_tag_center_pixel);
            y_distance = abs(image_center_y - tags[i].y_tag_center_pixel);
            distance = pow(x_distance, 2) + pow(y_distance, 2);

            if(distance < min)
            {
                min = distance;
                centermost_tag = tags[i];
            }
        }
        return msg::StarterProjectTag{centermost_tag};
    }

    auto Perception::publishTag(msg::StarterProjectTag const& tag) -> void {
        // TODO: implement me!
        mTagPublisher->publish(tag);

    }

    auto Perception::getClosenessMetricFromTagCorners(cv::Mat const& image, std::vector<cv::Point2f> const& tagCorners) -> float { // NOLINT(*-convert-member-functions-to-static)
        // hint: think about how you can use the "image" parameter
        // hint: this is an approximation that will be used later by navigation to stop "close enough" to a tag.
        // hint: try not overthink, this metric does not have to be perfectly accurate, just correlated to distance away from a tag

        //closeness metric should be should be between 0 and 1. doesnt matter    
        //no need to use any other function 


        // TODO: implement me!

        //get the area of the image
        float image_area = image.rows * image.cols;

        //get the current area of the tag
        float tag_area = abs((tagCorners[1].x - tagCorners[0].x)*(tagCorners[3].y - tagCorners[0].y));

        //get the closeness metric
        float closeness_metric = tag_area / image_area;
        
        return {closeness_metric};
    }

    auto Perception::getCenterFromTagCorners(std::vector<cv::Point2f> const& tagCorners) -> std::pair<float, float> { // NOLINT(*-convert-member-functions-to-static)
        // TODO: implement me!

        //tagCorners is a vector within vector [[x_tl, y_tl], [x_tr, y_tr], [x_br, y_br], [x_bl, y_bl]]
        //average the x and y of each corner, as they may be different due to perspective 
        float averaged_top_x = (tagCorners[0].x + tagCorners[1].x) / 2;
        float averaged_bottom_x = (tagCorners[2].x + tagCorners[3].x) / 2;
        float averaged_top_y = (tagCorners[0].y + tagCorners[1].y) / 2;
        float averaged_bottom_y = (tagCorners[2].y + tagCorners[3].y) / 2;

        float middle_x = (averaged_top_x + averaged_bottom_x) / 2;
        float middle_y = (averaged_top_y + averaged_bottom_y) / 2;
        
        return {middle_x, middle_y};
    }

} // namespace mrover