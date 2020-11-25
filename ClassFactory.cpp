#include "ClassFactory.hpp"

ClassFactory::ClassFactory() : EventFactory() {};

Event* ClassFactory::createEvent(int start, int end, 
	const string& name, const string& descr) {
	return new Event(start.getMinute(), end.getMinute(), name, descr, "Class");
}
