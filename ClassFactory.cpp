#include "ClassFactory.hpp"
ClassFactory::ClassFactory() : EventFactory() {};
Event* ClassFactory::createEvent(Minute start, Minute end, string name, string descr) {
	return new Event(start.getMinute(), end.getMinute(), name, descr, "Class");
}
