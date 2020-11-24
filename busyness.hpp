#ifndef __BUSYNESS_HPP__
#define __BUSYNESS_HPP__

#include <vector>

class Busyness{
    public:
	Base() {};

	virtual double calculate(int time, int events) = 0;

};
#endif __BUSYNESS_HPP__

