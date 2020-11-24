#ifndef __MONTH_INDEX_HPP__
#define __MONTH_INDEX_HPP__

#include "Busyness.hpp"

class Month_index : public Busyness{
    public:
        Month_index() : Busyness() {};
        double calculate(int time, int events);

};
#endif __MONTH_INDEX_HPP__
~                                                                               
