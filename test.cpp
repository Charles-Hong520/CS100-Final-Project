#include "gtest/gtest.h"
#include "DayIndex.hpp"
#include "WeekIndex.hpp"
#include "MonthIndex.hpp"
#include "DayTest.hpp"
#include "WeekTest.hpp"
#include "MonthTest.hpp"
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
