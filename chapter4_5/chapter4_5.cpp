// chapter4_5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Matrix.h"
using namespace std;

int main()
{
	Matrix a, b, c;
	cin >> a;
	cin >> b;
	cout << endl << "Matrix a:" << endl << a << endl;
	cout << endl << "Matrix b:" << endl << b << endl;

	c = a + b;
	cout << endl << "Matrix c = Matrix a + Matrix b :" << endl << c << endl;

	return 0;
}
