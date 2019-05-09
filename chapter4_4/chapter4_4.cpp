// chapter4_4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Matrix.h"
using namespace std;

int main()
{
	Matrix a, b, c;
	a.input();
	b.input();
	cout << endl << "Matrix a:" << endl;
	a.display();
	cout << endl << "Matrix b:" << endl;
	b.display();
	c = a + b; //用重载运算符“+”实现两个矩阵相加
	cout << endl << "Matrix c = Matrix a + Matrix b :" << endl;
	c.display();
	return 0;
}
