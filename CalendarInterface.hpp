#ifndef __CALENDAR_INTERFACE_HPP__
#define __CALENDAR_INTERFACE_HPP__

#include "ClassObserver.hpp"

class ClassObserver;

class CalendarInterface {
    public:
	CalendarInterface() { };
	void attach(ClassObserver Obs);
	void getState(int num1);
    private:
	ClassObserver stateObj;
	
};

#endif
