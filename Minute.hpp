#ifndef __MINUTE_HPP__
#define __MINUTE_HPP__
#include <string>
using std::string;

class Minute {
private:
	int totalMin;
public:
	Minute();
	void parse(string input);
};


#endif //__MINUTE_HPP__