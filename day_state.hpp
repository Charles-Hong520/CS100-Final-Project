#ifndef __DAY_STATE_HPP__
#define __DAY_STATE_HPP__

class Day : public Observer {
    public:
	Day() : Observer();
	void update();
    private:
};

#endif;
