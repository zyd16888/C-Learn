// chapter4_6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
	Complex c1(3, 4), c2;
	double d1;
	d1 = 2.5 + c1;
	cout << "d1 = " << d1 << endl;
	c2 = Complex(d1);
	cout << "c2 = ";
	c2.display();
	return 0;
}