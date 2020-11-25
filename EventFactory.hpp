#ifndef __EVENT_FACTORY_HPP__
#define __EVENT_FACTORY_HPP__

#include <string>
#include "Event.hpp"
using std::string;

class EventFactory {
private:

public:
	EventFactory() {};
	virtual void createEvent(Minute start, Minute end, string name, string descr) = 0;

};

#endif
