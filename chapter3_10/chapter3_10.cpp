// chapter3_10.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "php.h"

void display(const Date& d, const Time& t)
{
	cout << d.month << "/" << d.day << "/" << d.year << endl;
	cout << t.hour << ":" << t.minute << ":" << t.sec << endl;
}

int main()
{
	Time t1(10, 13, 56);
	Date d1(12, 25, 2004);
	display(d1, t1);
	return 0;
}