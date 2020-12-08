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

	list<Event*> getElement(int index){return calendar.at(index);}

	void addEvent(int day, Event* event);
	void removeEvent(int days, int eventNumber);

	Event* getEvent(int days, int startTime, int endTime, const string& name, const string& descr);
	Event* getEvent(int days, int eventNumber);

	bool empty();

	int size() const;
	int sizeOfDay(int day) const;
	int dateToDays(int month, int days) const;
};


#endif //__CALENDAR_HPP__