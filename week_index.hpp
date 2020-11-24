#ifndef __WEEK_INDEX_HPP__
#define __WEEK_INDEX_HPP__

#include "Busyness.hpp"

class Week_index : public Busyness{
    public:
        Week_index() : Busyness() {};
        double calculate(int time, int events);

};
#endif __Week_INDEX_HPP__

