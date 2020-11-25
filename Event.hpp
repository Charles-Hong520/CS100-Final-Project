#ifndef __EVENT_HPP__
#define __EVENT_HPP__
#include <string>
#include "Minute.hpp"
using std::string;

class Event {
private:
	string tag;
	int startMin;
	int endMin;
	string name;
	string description;
public:
	Event(int startMin,int endMin, string name, string description, string tag);
	string getTag();
	int getStartMin();
	int getEndMin();
	string getName();
	string getDescription();
	int getDuration();
};


#endif //__EVENT_HPP__