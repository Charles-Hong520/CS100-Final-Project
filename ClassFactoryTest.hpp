#ifndef __CLASS_FACTORY_TEST_HPP__
#define __CLASS_FACTORY_TEST_HPP__

#include "EventFactory.hpp"
#include "gtest/gtest.h"
#include "ClassFactory.hpp"
using std::string;

TEST(ClassFactoryTestSet, makeEvent1) {

	ClassFactory classFac;

	Event* ev = classFac.createEvent(1140, 1190, "CS100 Lecture", "In Class Ex Today");


    EXPECT_EQ(ev->getTag(), "Class");
    EXPECT_EQ(ev->getStartMin(), 1140);
    EXPECT_EQ(ev->getEndMin(), 1190);
    EXPECT_EQ(ev->getName(), "CS100 Lecture");
    EXPECT_EQ(ev->getDescription(), "In Class Ex Today");
    EXPECT_EQ(ev->getDuration(), 50);
}

TEST(ClassFactoryTestSet, makeEvent2) {

	ClassFactory classFac;

	Event* ev = classFac.createEvent(100, 200, "Physics Disc", "Newton Lab");


    EXPECT_EQ(ev->getTag(), "Class");
    EXPECT_EQ(ev->getStartMin(), 100);
    EXPECT_EQ(ev->getEndMin(), 200);
    EXPECT_EQ(ev->getName(), "Physics Disc");
    EXPECT_EQ(ev->getDescription(), "Newton Lab");
    EXPECT_EQ(ev->getDuration(), 100);
}

#endif
