#ifndef __CLASS_INTERFACE__
#define __CLASS_INTERFACE__

#include "class_observer.hpp"

class InterfaceDis {
    public:
	InterfaceDis();
	void attach(Observer Obs);
	void getState();
    private:
	
};

#endif;
