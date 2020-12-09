#ifndef __DAY_STATE_HPP__
#define __DAY_STATE_HPP__

#include "ClassObserver.hpp"

class DayState : public ClassObserver {
    public:
	DayState() : ClassObserver() { };
	void update(Calendar calendar, int num);
};

#endif
