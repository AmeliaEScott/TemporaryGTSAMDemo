#pragma once
#include <gtsam/navigation/CombinedImuFactor.h>
class GraphTest
{
public:
    GraphTest();
    boost::shared_ptr<gtsam::PreintegratedCombinedMeasurements> preint;
};
