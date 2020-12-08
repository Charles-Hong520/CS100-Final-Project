#include <iostream>
#include "WeekState.hpp"

using namespace std;

void WeekState::update(int num) {
    int count = 1;
    for(int j = num; j < num + 7; ++j) {
	int numDays = num;
        int monthCount = 1;
        int daysToMonth[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30};
        for(int i = 0; i < 11; ++i) {
	    numDays -= daysToMonth[i];
	    if(numDays < 0) {
	        numDays += daysToMonth[i];
	        break;
	    }
	    monthCount++;
	}
   	cout << monthCount << "/" << numDays + 1 << endl;   

    	if(calendar.getDay(num).size() != 0) {
	    for(auto ev : calendar.at(num)) {
	    	cout << count << ". " << ev -> getName() << endl;
	    	count++;
	    }
        }
	else {
	    cout << "No events" << endl;
	}
	cout << endl;
    }  
}
