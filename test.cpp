#include "gtest/gtest.h"
#include "EventFactoryTest.hpp"
#include "AppointmentFactoryTest.hpp"
#include "ClassFactoryTest.hpp"
#include "MinuteTest.hpp"
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
