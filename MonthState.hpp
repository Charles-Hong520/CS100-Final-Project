#ifndef __MONTH_STATE_HPP
#define __MONTH_STATE_HPP

class MonthState : public ClassObserver {
    public:
	MonthState() : ClassObserver() { };
	void update(int num);
    private:
	
};

#endif
