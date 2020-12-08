#include <iostream>
#include "MonthState.hpp"

using namespace std;

void MonthState::update(int num) {
    int daysToMonth[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int count = 1;
    int totalDays = 0;
    for(i = 0; i < num; ++i) {
	totalDays += daysToMonth[i];
    }

    for(i = 0; i < daysToMonth.at(num - 1); ++i) {
	cout << num << "/" << i + 1 << endl;   

    	if(calendar.getDay(totalDays).size() != 0) {
	    for(auto ev : calendar.at(totalDays)) {
	    	cout << count << ". " << ev -> getName() << endl;
	    	count++;
	    }
        }
    }
}
