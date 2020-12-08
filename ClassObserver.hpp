#ifndef __CLASS_OBSERVER_HPP__
#define __CLASS_OBSERVER_HPP__

#include "Calendar.hpp"

using namespace std;

class ClassObserver : public Calendar {
    public:
	Observer();
	virtual void update(int num) = 0;
};

#endif;
