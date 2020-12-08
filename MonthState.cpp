#include <iostream>
#include "MonthState.hpp"

using namespace std;

void MonthState::update(Calendar calendar, int num) {
    if(num > 12) {
	cout << "Error" << endl;
    }
    int daysToMonth[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int count = 1;
    int totalDays = 0;
    for(int i = 0; i < num; ++i) {
	totalDays += daysToMonth[i];
    }

    for(int i = 0; i < daysToMonth.at(num - 1); ++i) {
	cout << num << "/" << i + 1 << endl;   

    	if(calendar.getDay(totalDays).size() != 0) {
	    for(auto ev : calendar.getDay(totalDays)) {
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
