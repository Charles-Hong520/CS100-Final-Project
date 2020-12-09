#ifndef __WEEK_STATE_HPP__
#define __WEEK_STATE_HPP__

#include "ClassObserver.hpp"

class WeekState : public ClassObserver {
    public:
	WeekState() : ClassObserver() { };
        void update(Calendar calendar, int num);
};

#endif
