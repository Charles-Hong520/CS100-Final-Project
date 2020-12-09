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

#include "CalendarInterface.hpp"
#include "ClassObserver.hpp"
#include "DayState.hpp"
#include "WeekState.hpp"
#include "MonthState.hpp"

#include "Minute.hpp"

using namespace std;

string intro = "\nCalendar App, by CH, KM, ZW\n";
string promptMain = "\nSelect the following options to use the calendar.\n";
string menu = "\n1. Add Event\n2. Remove Event\n3. View Event Details\n4. Determine Busyness\n5. View Events\n6. Quit\n";

string invalidInputMM = "\nInvalid input, going back to main menu.\n";
string invalidInputName = "\nInvalid input, Need a name! Going back to main menu.\n";


string promptTag1 = "\nSelect Tag:\n1. No Tag\n2. Appointment\n3. Class\n";
string promptName1 = "\nEnter Name of Event:\n";
string promptDate1 = "\nEnter Date in this format: MM DD (ex: 5 23, 12 4, 10 31)\n";
string promptStartTime1 = "\nEnter Starting Time of the Event, followed by an AM or PM\n";
string promptEndTime1 = "\nEnter Ending Time of the Event, followed by an AM or PM\n";
string promptDescription1 = "\nEnter Description of the Event\n";
string addEventComplete = "\nEvent has been created\n";

string promptView5 = "\nSelect Viewing Options:\n1. View a Day\n2. View a Week\n3. View a Month\n";
string promptDay5 = "\nEnter the day you wish to view in this format: MM DD (ex: 5 23, 12 4, 10 31)\n";
string promptWeek5 = "\nEnter the date of the beginning of the week in this format: MM DD (ex: 5 23, 12 4, 10 31)\n";
string promptMonth5 = "\nEnter the month number that you wish to view. (1-12)\n";

string exitProgram = "\nExiting program\n";


bool isNumber(string input) {
	if(input.size() == 0) return false;
	unsigned j = 0;
	if(input.at(0) == '-' && input.size() != 1) {
		j++;
	}
	for(unsigned i = j; i < input.size(); i++) {
		if(input.at(i) < '0' || input.at(i) > '9') {
			return false;
		}
	}
	return true;
}

int cinInt() {
	string input;
	getline(cin, input); cout << endl;
	if(isNumber(input)) return std::stoi(input);
	else return -1;
}

int cinInt(char stopper) {
	string input;
	getline(cin, input, stopper);

	if(isNumber(input)) return std::stoi(input);
	else return -1;
}



int main() {

	Calendar c;

	CalendarInterface ci;
	ClassObserver* co = new WeekState();

	cout << intro << endl;
	cout << promptMain << menu << endl;

	int menuInput = cinInt();



	while(menuInput != 6) {

		if(menuInput == 1) {
			cout << promptTag1 << endl;
			int inNum1 = cinInt();
			if(inNum1 >= 1 && inNum1 <= 3) {

				int inMonth1, inDay1;
				cout << promptDate1 << endl;
	
				inMonth1 = cinInt(' ');
				inDay1 = cinInt();
				int calculatedDayIndex1 = c.dateToDays(inMonth1, inDay1);
				if(calculatedDayIndex1 != -1) {

					string inName1 = "";
					cout << promptName1 << endl;
					getline(cin, inName1); cout << endl;
					if(inName1 != "") {
						Minute min;

						string inStartTime1 = "";
						cout << promptStartTime1 << endl;
					
						getline(cin, inStartTime1); cout << endl;
						min.parse(inStartTime1);
						int startTime1 = min.getMinute();
						if(startTime1 != -1) {
							string inEndTime1 = "";
							cout << promptEndTime1 << endl;
						
							getline(cin, inEndTime1); cout << endl;
							min.parse(inEndTime1);
							int endTime1 = min.getMinute();
							if(endTime1 != -1) {

								string inDescription1 = "";
								cout << promptDescription1 << endl;
							
								getline(cin, inDescription1); cout << endl;

								EventFactory* factory;
								if(inNum1 == 1) {
									factory = new EventFactory();
								} else if(inNum1 == 2) {
									factory = new AppointmentFactory();
								} else {
									factory = new ClassFactory();
								}
								Event* ev = factory->createEvent(startTime1, endTime1, inName1, inDescription1);
								c.addEvent(calculatedDayIndex1, ev);
								cout << addEventComplete << endl;
							} else {
								cout << invalidInputMM << endl;
							}
						} else {
							cout << invalidInputMM << endl;
						}
					} else {
						cout << invalidInputMM << endl;
					}
				} else {
					cout << invalidInputMM << endl;
				}
			} else {
				cout << invalidInputMM << endl;
			}
		} else if(menuInput == 2) {

		} else if(menuInput == 3) {
			
		} else if(menuInput == 4) {
			
		} else if(menuInput == 5) {

			cout << promptView5 << endl;
			int inNum5 = cinInt();
			if(inNum5 >= 1 && inNum5 <= 3) {
				if(inNum5 == 1) {
					int inMonth5, inDay5;
					cout << promptDay5 << endl;
		
					inMonth5 = cinInt(' ');
					inDay5 = cinInt();
					int calculatedDayIndex5 = c.dateToDays(inMonth5, inDay5);
					if(calculatedDayIndex5 != -1) {
					
						
						ci.attach(co);
						ci.getState(c, calculatedDayIndex5);

					} else {
						cout << invalidInputMM << endl;
					}
					// ci.attach(new DayState());
				} else if(inNum5 == 2) {
					int inMonth5, inDay5;
					cout << promptWeek5 << endl;
		
					inMonth5 = cinInt(' ');
					inDay5 = cinInt();
					int calculatedDayIndex5 = c.dateToDays(inMonth5, inDay5);
					if(calculatedDayIndex5 != -1) {
					
					
						ci.attach(co);
						ci.getState(c, calculatedDayIndex5);

					} else {
						cout << invalidInputMM << endl;
					}
					
				} else {
					int inMonth5 = cinInt();
					if(inMonth5 != -1) {


						ci.attach(co);
						ci.getState(c, inMonth5);
					} else {
						cout << invalidInputMM << endl;
					}
				}
			} else {
				cout << invalidInputMM << endl;
			}

		} else {
			cout << invalidInputMM << endl << endl;
		}

		cout << promptMain << menu << endl;

		menuInput = cinInt();

	}

	cout << exitProgram << endl;
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