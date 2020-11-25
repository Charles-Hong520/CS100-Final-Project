#ifndef __CLASS_OBSERVER_HPP__
#define __CLASS_OBSERVER_HPP__

#include <vector>

using namespace std;

class ClassObserver {
    public:
	Observer();
	void update();
    protected:
	vector<Event*> eventHolder;
};

#endif;
