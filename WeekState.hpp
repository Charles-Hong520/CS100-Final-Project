#ifndef __WEEK_STATE_HPP__
#define __WEEK_STATE_HPP__

class WeekState : public ClassObserver {
    public:
	WeekState() : ClassObserver() { };
        void update(int num);
    private:
};

#endif
