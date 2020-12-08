#include "CalendarInterface.hpp"

void CalendarInterface::attach(ClassObserver Obs) {
    stateObj = Obs;
}

void CalendarInterface::getState() {
    stateObj.update();
}
