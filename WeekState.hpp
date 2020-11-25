#ifndef __WEEK_STATE_HPP__
#define __WEEK_STATE_HPP__

class WeekState : public Observer {
    public:
	Week() : Observer();
	void update();
    private:
};

#endif
