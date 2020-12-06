#include "gtest/gtest.h"
#include "WeekIndex.hpp"

TEST(WeekTestSet, NormalTest) {
    WeekIndex test;
    double val = test.calculate(10,1);
    EXPECT_NEAR(val, 1.5, .4);
}