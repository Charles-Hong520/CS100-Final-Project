#include "gtest/gtest.h"
#include "Calendar.hpp"

TEST(CalendarTest, NormalTest) {
    Calendar C;
    AppointmentFactory fac;
    Event *first = fac.createEvent(0, 100, "test", "test2");
    c.addEvent(1, 1, first);
    ASSERT_EQ(c.getElement(0).size(),1);
}

