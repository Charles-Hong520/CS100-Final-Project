#ifndef __WEEK_STATE_HPP__
#define __WEEK_STATE_HPP__

class WeekState : public ClassObserver {
    public:
	WeekState() : ClassObserver() { };
        virtual void update(int num);
};

#endif
