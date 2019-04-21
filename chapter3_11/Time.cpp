#include<iostream>
#include"php.h"
using namespace std;
Time::Time()
{
}

Time::~Time()
{
}

Time::Time(int h, int m, int s) :hour(h), minute(m), sec(s) { }
void Time::display(const Date& d)
{
	cout << d.month << "/" << d.day << "/" << d.year << endl;
	cout << hour << ":" << minute << ":" << sec << endl;
}