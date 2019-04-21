#pragma once
#include<iostream>
using namespace std;
class Time
{
public:
	Time();
	~Time();
	Time(int, int, int);

	void display(const Date &);
	
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
	friend Time;
private:
	int month;
	int day;
	int year;
};

