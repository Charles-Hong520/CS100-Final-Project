#include "gtest/gtest.h"

#include "DayState.hpp"

TEST(DayTestThere, AppropriateDate) {
    DayState* test;
    EXPECT_EQ(test -> update(21), "1/22\n");
}
