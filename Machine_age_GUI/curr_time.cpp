#include "curr_time.h"
#define _CRT_SECURE_NO_WARRINIGS
#include<time.h>


int curr_time::getYear()
{
	return 1900 + ltm->tm_year;
}
int curr_time::getMonth()
{
	return 1 + ltm->tm_mon;
}
int curr_time::getDay()
{
	return ltm->tm_wday;
}


