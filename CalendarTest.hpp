#ifndef CALENDAR_TEST_HPP
#define CALENDAR_TEST_HPP

#include "gtest/gtest.h"
#include "Calendar.hpp"

TEST(CalendarTest, NormalTest) {
    Calendar C;
    AppointmentFactory fac;
    Event *first = fac.createEvent(0, 100, "test", "test2");
    C.addEvent(1, 1, first);
    ASSERT_EQ(C.getElement(0).size(),1);
}

#endif
