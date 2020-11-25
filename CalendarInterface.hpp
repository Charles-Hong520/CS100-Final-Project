#ifndef __CALENDAR_INTERFACE_HPP__
#define __CALENDAR_INTERFACE_HPP__

#include "class_observer.hpp"

class CalendarInterface : public Calendar {
    public:
	CalendarInterface() { };
	void attach(Observer Obs);
	void getState();
    private:
	
};

#endif;
