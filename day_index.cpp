#include "day_index.hpp"
#include <cmath>
double Day_index::calculate(int time, int events){
    return time*sqrt(events);
}
