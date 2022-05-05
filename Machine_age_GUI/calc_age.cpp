#include "calc_age.h"

void calc_age::calc()
{
	y = getYear() - Year;
	if (getMonth() <= Month)
	{
		m = 12 + (getMonth() - Month);
		y--;
	}
	else
	{
		m = (getMonth() - Month);
	}
	if (getDay()<Day) {
		d = 30 + (getDay() - Day);
		m++;
	}
	else
	{
		d = getDay() - Day;
	}
}
