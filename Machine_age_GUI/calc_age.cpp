#include "calc_age.h"

void calc_age::calc()
{
	y = getYear() - Year;
	if (getMonth()<Month)
	{
		m = 12 + (getMonth() - Month);
		y--;
	}
	else if (getMonth() == Month)
	{
		if (getDay()<Day) {
			d = 30 + (getDay() - Day);
			y--;
			m = 11;
		}
		else if (getDay() == Day) {
			d = 0;
			m = 0;
		}
		else
		{
			d = getDay() - Day;
		}
	}
	else
	{
		m = (getMonth() - Month);
	}
	if (getDay()<Day) {
		d = 30 + (getDay() - Day);
		if (getMonth() == Month)
			m = m;
		else
			m++;
	}
	else if (getDay() == Day) {
		d = 0;
	}
	else
	{
		d = getDay() - Day;
	}
	if (getMonth()>2)
	{
		d += 2;
	}
}
