#include "AppointmentFactory.hpp"
AppointmentFactory::AppointmentFactory() : EventFactory() {};
Event* AppointmentFactory::createEvent(Minute start, Minute end, string name, string descr) {
	return new Event(start.getMinute(), end.getMinute, name, descr, "Appointment");
}
