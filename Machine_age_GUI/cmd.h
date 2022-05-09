#include "curr_time.h"
#pragma once
class cmd : public curr_time
{
	char var[40];
	char a[9];
	void swap(char&a, char&b);

public:
	int Month, Year, Day;
	void Doing_cmd();
	void getDate();
	

};

