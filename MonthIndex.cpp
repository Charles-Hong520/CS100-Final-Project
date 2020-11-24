#include "MonthIndex.hpp"
#include <cmath>
double MonthIndex::calculate(int time, int events){
    return time*sqrt(events)/28;
}
~
~

