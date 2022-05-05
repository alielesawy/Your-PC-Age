
#include<time.h>
#pragma warning(disable: 4996)
#pragma once 
class curr_time
{
private:
	time_t now = time(0);
	tm *ltm = localtime(&now);
public:
	int getYear();
	int getMonth();
	int getDay();

};

