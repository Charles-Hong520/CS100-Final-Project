#include "CalendarInterface.hpp"

CalendarInterface::Interface() {

}

CalendarInterface::attach(Observer Obs) {
    Obs.update();
}

CalendarInterface::getState() {

}
