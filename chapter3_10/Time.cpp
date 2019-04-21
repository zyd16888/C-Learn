#include"php.h"
#include<iostream>
Time::Time()
{
}

Time::~Time()
{
}

Time::Time(int h, int m, int s)
{
	hour = h;
	minute = m;
	sec = s;
}