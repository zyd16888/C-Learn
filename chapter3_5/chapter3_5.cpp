// chapter3_5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;
void max(Student *p, int len);
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
	max(p, 5);
	
}

void max(Student *p, int len)
{
	int max = 0;
	Student t = *p;

	for (int i = 0; i < len; i++)
	{
		if (p->gread > max)
		{
			t = *p;
			max = p->gread;
		}
		p++;
	}

	cout << "maxGread: "<< max <<endl;
}