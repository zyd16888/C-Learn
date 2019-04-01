// chapter3_4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include "student.h"
#include <iostream>
using namespace std;

int main()
{
	Student a[5] = {
		Student(10001, 80),
		Student(10002, 90),
		Student(10003, 85),
		Student(10004, 82),
		Student(10005, 96)
	};
	Student *p;
	p = &a[0];

	for (int i = 0; i < 3; i++)
	{
		cout << "学号：" << (*p).num << "	成绩：" << p->gread << endl;
		p += 2;
	}
}
