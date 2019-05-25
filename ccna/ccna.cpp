// ccna.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "MyComplex.h"
using namespace std;


int main()
{
	MyComplex a, b;
	MyComplex c = MyComplex(4, 2);
	MyComplex d = MyComplex(7);
	cin >> a >> b;
	cout << "a = " << a ;
	cout << "b = " << b ;
	cout << "c = " << c;
	cout << "d = " << d;

	MyComplex f1 = a + b;
	MyComplex f2 = a - b;
	MyComplex f3 = a * b;
	MyComplex f4 = a / b;

	c += d;
	MyComplex f5 = c;
	c -= d;
	MyComplex f6 = c;
	c *= d;
	MyComplex f7 = c;
	c /= d;
	MyComplex f8 = c;

	cout << "f1 = " << f1;
	cout << "f2 = " << f2;
	cout << "f3 = " << f3;
	cout << "f4 = " << f4;
	cout << "f5 = " << f5;
	cout << "f6 = " << f6;
	cout << "f7 = " << f7;
	cout << "f8 = " << f8;

}

