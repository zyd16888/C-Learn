// skt3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	Rectangle a(2, 3), b(4, 6);
	cout << "information of a:" << endl;
	a.display();
	cout << "information of b:" << endl;
	b.display();
	bool result;
	result = a > b;
	cout << "a > b ? result is:" << result;
	cout << endl;
	result = a < b;
	cout << "a < b ? result is:" << result;
}
