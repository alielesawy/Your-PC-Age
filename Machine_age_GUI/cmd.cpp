#include "cmd.h"
#include "curr_time.h"
#include<cstdlib>
#include<iostream>
using namespace std;

void cmd::getDate()
{
	FILE *fp;
	fp = _popen("wmic bios get Name", "r");
	while (fgets(var, sizeof(var), fp) != NULL)
	{
		var;
	}
	_pclose(fp);
}
void cmd::crop()
{
	for (size_t i = 0; i < 9; i++)
	{
		a[i] = var[i + 11];
	}
	for (size_t i = 0; i < 9; i++)
	{
		cout << a[i];
	}
}
void cmd::m_age()
{
	int m = atoi(a);
	Month = m;

	swap(a[0], a[3]);
	swap(a[1], a[4]);
	int day = atoi(a);
	Day = day;

	swap(a[0], a[6]);
	swap(a[1], a[7]);
	int year = atoi(a) + 2000;
	Year = year;
}
void cmd::swap(char&a, char&b)
{
	int temp = a;
	a = b;
	b = temp;
}
