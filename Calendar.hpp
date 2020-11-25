#ifndef __CALENDAR_HPP__
#define __CALENDAR_HPP__
#include <string>
#include <list>
#include <vector>

#include "EventFactory.hpp"
#include "AppointmentFactory.hpp"
#include "ClassFactory.hpp"
#include "Event.hpp"


using std::string;
using std::vector;
using std::list;

class Calendar {
private:
	vector<list<Event*> > calendar;
public:
	Calendar(); //will only have 1 year

	void addEvent(int month, int day, Event* event);
	void removeEvent(int month, int day, Event* event);
private:
	int dateToDays(int month, int days) const; //access index helper function
};


#endif //__CALENDAR_HPP__