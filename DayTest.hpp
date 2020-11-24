#include "gtest/gtest.h"
#include "DayIndex.hpp"

TEST(DayTestSet, NormalTest) {
    Day test;
    double val = test.calculate(10,1);

    EXPECT_EQ(val, 10);
}
