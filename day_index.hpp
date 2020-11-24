#ifndef __DAY_INDEX_HPP__
#define __DAY_INDEX_HPP__

#include "Busyness.hpp"

class Day_index : public Busyness{
    public:
	Day_index() : Busyness() {};
	double calculate(int time, int events);

};
#endif __DAY_INDEX_HPP__
