#include "DayIndex.hpp"
#include <cmath>
double DayIndex::calculate(int time, int events){
    return time*sqrt(events);
}
