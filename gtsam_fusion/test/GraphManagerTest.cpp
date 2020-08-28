
#include <gtsam_fusion/GraphManager.h>
#include <gtsam_fusion/IMUManager.h>
#include <gtsam_fusion/GraphTest.h>

#include <gtest/gtest.h>
// #include <ros/ros.h>
#include <iostream>
#include <gtsam/navigation/CombinedImuFactor.h>
#include <gtsam/inference/Symbol.h>


TEST(GraphManagerTest, test1)
{
    GraphTest test;
    std::cerr << "GraphTest successfully initialized" << std::endl;
}

int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc, argv);
    // ros::init(argc, argv, "tester");
    // ros::NodeHandle nh;
    return RUN_ALL_TESTS();
}
