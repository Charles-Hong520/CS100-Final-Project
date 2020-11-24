#include "month_index.hpp"
#include <cmath>
double Month_index::calculate(int time, int events){
    return time*sqrt(events)/28;
}
~
~

