#include <iostream>
#include <list>
#include <vector>
#include <string>


#include "Calendar.hpp"
#include "Event.hpp"

#include "EventFactory.hpp"
#include "AppointmentFactory.hpp"
#include "ClassFactory.hpp"

#include "Busyness.hpp"
#include "DayIndex.hpp"
#include "WeekIndex.hpp"
#include "MonthIndex.hpp"

#include "Minute.hpp"

using namespace std;

string intro = "Calendar App, by CH, KM, ZW";
string prompt = "Select the following options to use the calendar."
string menu; = "1. Add Event\n2. Remove Event\n3. View Event Details\n4. Determine Busyness"

string invalid_input = "Invalid input, going back to main menu";

int main() {

	cout << intro << endl << endl;
	
	cout << prompt << endl;
	int menuInput; cin >> menuInput;

	while(menuInput != 6) {
		if(menuInput == 1) {

		} else if(menuInput == 2) {

		} else if(menuInput == 3) {
			
		} else if(menuInput == 4) {
			
		} else if(menuInput == 5) {
			
		} else {
			cout << invalid_input << endl << endl;
		}
	}

	/*
	while {
		print menu 
			1. add event
				give tag first
					. none
					. appt
					. class
				prompt user to enter in specific format
					month, day, name, descr (newline between each)
			
			2. remove event
				prompt user to enter number that is currently displayed on screen (based on observer)
				print all events in day
					ex: 1. talk 2. class 3. play game
				user enters a number to delete the event.

			3. get event Details (includes description)
				prompt user to enter number that is currently displayed on screen (based on observer)
				
				print all events in day
					ex: 1. talk 2. class 3. play game


			4. determine busyness
				prompt Day/Week/Month
				1. day
					user enters specific date
				2. week
					user enters start of week
				3. month
					user enters 1-12

			5. change view (no description displayed)
				1. display day only
				2. display week
				3. display month 1-12.
				Anytime the display is called, it will only display those day(s)
				The remove and get will revolve around that as well
			6. quit program
	}
	*/

	return 0;
}