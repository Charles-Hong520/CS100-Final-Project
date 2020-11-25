#include "Calendar.hpp"


using std::string;
using std::vector;
using std::list;
//private:
//vector<list<Event*> > calendar;

	int Calendar::dateToDays(int month, int days) const {
		int daysTilMonth[] = {-1, 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30};

		for(int i = 1; i < 13; i++) {
			daysTilMonth[i] += daysTilMonth[i-1];
		} //running sum

		if(month < 1 || month > 12) {
			return -1;
		} else {
			if(month == 2) {
				if(days > 29 || days < 1) return -1;
			} else if(month == 4 || month == 6 || month == 9 || month == 11) {
				if(days > 30 || days < 1) return -1;
			} else {
				if(days > 31 || days < 1) return -1;
			}
		}

		return daysTilMonth[month] + days;
	}
//public:
	Calendar::Calendar() {
		calendar.resize(366); //This will be a 2020 calendar
	} //will only have 1 year

	void Calendar::addEvent(int month, int day, Event* event) {
		int index = dateToDays(month, day);
		calendar.at(index).push_back(event);
	}

	void Calendar::removeEvent(int month, int day, Event* event) {
		int index = dateToDays(month, day);
		list<Event*>::iterator it;
		for(it = calendar.at(index).begin(); it != calendar.at(index).end(); it++) {
			if(*it == event) {
				delete event;
				calendar.at(index).erase(it);
			}
		}
	}


