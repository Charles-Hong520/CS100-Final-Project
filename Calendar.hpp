#ifndef __CALENDAR_HPP__
#define __CALENDAR_HPP__
#include <string>
#include <list>
#include <vector>


#include "Event.hpp"

using std::string;
using std::vector;
using std::list;

class Calendar {
private:
	vector<list<Event*> > calendar;
public:
	Calendar(); //will only have 1 year

	list<Event*> getDay(int days) {return calendar.at(days);}

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