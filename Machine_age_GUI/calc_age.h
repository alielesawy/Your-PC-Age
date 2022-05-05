#include "cmd.h"
#include<iostream>
using namespace std;
#pragma once
class calc_age :public cmd
{

public:
	int y = Year, m = Month, d = Day;

	void calc();

};

