#ifndef __CALENDAR_INTERFACE_HPP__
#define __CALENDAR_INTERFACE_HPP__

#include "class_observer.hpp"

class ClassObserver;

class CalendarInterface {
    public:
	CalendarInterface() { };
	void attach(ClassObserver Obs);
	void getState();
    private:
	ClassObserver stateObj;
	
};

#endif;
