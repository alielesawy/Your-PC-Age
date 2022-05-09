#include "cmd.h"
#include "curr_time.h"
#include<sstream>
#include<iostream>
#include<string>

using namespace std;

void cmd::Doing_cmd()
{
	FILE *fp;
	fp = _popen("systeminfo | findstr /I /c:bios ", "r");
	while (fgets(var, sizeof(var), fp) != NULL)
	{
		cout << var;
	}
	_pclose(fp);
}
void cmd::getDate()
{
	int flag = 0;
	string d = "", m = "", y = "";
	int c = 0;
	for (size_t i = 0; i <sizeof(var); i++)
	{
		if (var[i] == ',')
			flag = i;
	}
	flag += 2;
	for (size_t i = 0; i < 10; i++)
	{
		if (var[i + flag] == '/')
		{
			c++;
			continue;
		}

		if (c == 0)
			m += var[i + flag];
		else if (c == 1)
			d += var[i + flag];
		else  if (c == 2)
			y += var[i + flag];
	}
	Day = std::stoi(d);
	Month = std::stoi(m);
	Year = std::stoi(y);
}



void cmd::swap(char&a, char&b)
{
	int temp = a;
	a = b;
	b = temp;
}
