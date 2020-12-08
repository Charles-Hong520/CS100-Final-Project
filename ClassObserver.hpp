#ifndef __CLASS_OBSERVER_HPP__
#define __CLASS_OBSERVER_HPP__

#include "Calendar.hpp"

using namespace std;

class ClassObserver : public Calendar {
    public:
	ClassObserver() { };
	virtual void update(int num) = 0;
};

#endif
