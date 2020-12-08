#ifndef __MONTH_STATE_HPP
#define __MONTH_STATE_HPP

class MonthState : public ClassObserver {
    public:
	MonthState() : ClassObserver() { };
	virtual void update(int num);
	
};

#endif
