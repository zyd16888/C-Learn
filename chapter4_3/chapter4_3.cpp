// chapter4_3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
	Complex c1(3, 4), c2(5, -10), c3;
	int i = 5;
	c3 = c1 + c2;
	cout << "c1+c2=";
	c3.display();
	c3 = i + c1;
	cout << "i+c1=";
	c3.display();
	c3 = c1 + i;
	cout << "c1+i=";
	c3.display();
	return 0;
}