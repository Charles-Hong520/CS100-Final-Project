#ifndef __CLASS_FACTORY_HPP__
#define __CLASS_FACTORY_HPP__

#include "EventFactory.hpp"

class ClassFactory : public EventFactory {
private:

public:
	ClassFactory() {};
	virtual void createEvent(Minute start, Minute end, string name, string descr);
};


#endif //__CLASS_FACTORY_HPP__
