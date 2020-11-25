#ifndef __DAY_TEST_HPP__
#define __DAY_TEST_HPP__
#include "gtest/gtest.h"
#include "DayIndex.hpp"

TEST(DayTestSet, NormalTest) {
    DayIndex test;
    double val = test.calculate(10,1);
    EXPECT_EQ(val, 10);
}

TEST(DayTestSet, NegMinTest) {
    DayIndex test;
    double val = test.calculate(-10,1);
    EXPECT_EQ(val, 0);
}

TEST(DayTestSet, NegEventTest) {
    DayIndex test;
    double val = test.calculate(10,-1);
    EXPECT_EQ(val, 0);
}
#endif
