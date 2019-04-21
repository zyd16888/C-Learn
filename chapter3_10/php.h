#pragma once
#include <iostream>
using namespace std;

class Date;
class Time
{
public:
	Time();
	~Time();
	Time(int, int, int);
	friend void display(const Date&, const Time&);
private:
	int hour;
	int minute;
	int sec;
};

class Date
{
public:
	Date();
	~Date();
	Date(int, int, int);
	friend void display(const Date&, const Time&);
private:
	int month;
	int day;
	int year;
};

