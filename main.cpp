//
//  main.cpp
//  LaneDetection
//
//  Created by Baigalmaa on 2024.12.25.
//

#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <filesystem>
#include <vector>

int main(int argc, const char * argv[]) {
    const std::filesystem::path sampleDataFolder = "/Users/baigalmaa/VehicleLaneDetection/UdacitySelfDrivingCarDataset/data/sampleData/";
    
    std::vector<cv::Mat> images;
    
    for (auto const& dir_entry : std::filesystem::directory_iterator{sampleDataFolder}){
        std::string img_path = dir_entry.path();
        images.emplace_back(cv::imread(img_path, cv::IMREAD_GRAYSCALE));
    }
        
    cv::namedWindow("Image 1");
    cv::imshow("Image 1", images.at(0));
    cv::waitKey(0);
    
    
    return 0;
}
