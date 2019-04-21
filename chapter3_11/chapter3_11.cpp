// chapter3_11.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

class Time;
class Date
{
public:
	Date(int, int, int);
	friend Time;
private:
	int month;
	int day;
	int year;
};

Date::Date(int m, int d, int y) :month(m), day(d), year(y) { }

class Time
{
public:
	Time(int, int, int);
	void display(const Date&);
private:
	int hour;
	int minute;
	int sec;
};

Time::Time(int h, int m, int s) :hour(h), minute(m), sec(s) { }

void Time::display(const Date& d)
{
	cout << d.month << "/" << d.day << "/" << d.year << endl;
	cout << hour << ":" << minute << ":" << sec << endl;
}


int main()
{
	Time t1(10, 13, 56);
	Date d1(12, 25, 2004);
	t1.display(d1);
	return 0;
}