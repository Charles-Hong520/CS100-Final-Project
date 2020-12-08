#include "CalendarInterface.hpp"

void CalendarInterface::attach(ClassObserver Obs) {
    stateObj = Obs;
}

void CalendarInterface::getState(int num1) {
    stateObj.update(num1);
}
