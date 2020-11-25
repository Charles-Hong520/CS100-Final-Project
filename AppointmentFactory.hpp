#ifndef __APPOINTMENT_FACTORY_HPP__
#define __APPOINTMENT_FACTORY_HPP__

#include "EventFactory.hpp"

class AppointmentFactory : public EventFactory {
private:

public:
	AppointmentFactory() {};
	virtual void createEvent(Minute start, Minute end, string name, string descr);
};


#endif //__APPOINTMENT_FACTORY_HPP__
