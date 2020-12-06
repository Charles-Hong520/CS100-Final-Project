#ifndef __EVENT_FACTORY_TEST_HPP__
#define __EVENT_FACTORY_TEST_HPP__

#include "EventFactory.hpp"
#include "gtest/gtest.h"
using std::string;

TEST(EventFactoryTestSet, makeEvent1) {

	EventFactory Fac;

	Event* ev = Fac.createEvent(720, 780, "Doctor's Visit", "Yearly Checkup");


    EXPECT_EQ(ev->getTag(), "");
    EXPECT_EQ(ev->getStartMin(), 720);
    EXPECT_EQ(ev->getEndMin(), 780);
    EXPECT_EQ(ev->getName(), "Doctor's Visit");
    EXPECT_EQ(ev->getDescription(), "Yearly Checkup");
    EXPECT_EQ(ev->getDuration(), 60);
}

TEST(EventFactoryTestSet, makeEvent2) {

	EventFactory Fac;

	Event* ev = Fac.createEvent(660, 1125, "Physical Therapy", "I am the bone of my sword");


    EXPECT_EQ(ev->getTag(), "");
    EXPECT_EQ(ev->getStartMin(), 660);
    EXPECT_EQ(ev->getEndMin(), 1125);
    EXPECT_EQ(ev->getName(), "Physical Therapy");
    EXPECT_EQ(ev->getDescription(), "I am the bone of my sword");
    EXPECT_EQ(ev->getDuration(), 465);
}
#endif