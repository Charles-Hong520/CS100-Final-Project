#ifndef __MONTH_STATE_HPP
#define __MONTH_STATE_HPP

#include "ClassObserver.hpp"

class MonthState : public ClassObserver {
    public:
	MonthState() : ClassObserver() { };
	void update(Calendar calendar, int num);
	
};

#endif
