// ccna2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "MyString.h"
using namespace std;


int main()
{
	MyString st1;
	cin >> st1;
	cout<< "st1 = " << st1;


	const char* st2 = "hello,world";
	MyString st3 = "ABCDEFG";
	MyString st4(st2);

	MyString st5 = st3;

	MyString st6;

	st6 = st5;

	MyString st7 = st3 + st4;

	bool flag1(st4 == st6);
	bool flag2(st5 == st3);
	bool flag3(st4 > st6);
	bool flag4(st4 < st6);

	MyString stt = "ABCD";
	MyString st8 = st3.UprString(st4);

	cout << "stt ==" << stt;

	int aa = st7.LenString();
	


	cout << "st2 = " << st2 << endl;//hello,world
	cout << "st3 = " << st3 << endl;//ni,hao
	cout << "st4 = " << st4 << endl;//hello,world
	cout << "st5 = " << st5 << endl;//ni,hao
	cout << "st6 = " << st6 << endl;//ni,hao
	cout << "st7 = " << st7 << endl;//ni,haohello,world
	cout << "flag1 = " << flag1 << endl;//false / 0
	cout << "flag2 = " << flag2 << endl;//true / 1
	cout << "flag3 = " << flag3 << endl;// 0
	cout << "flag4 = " << flag4 << endl;// 1

	cout << "st8 = " << st8 << endl;
	cout << "stt = " << stt << endl;
	//cout << "st9 = " << st9 << endl;
	cout << "a = " << aa << endl;


	MyString ptr = stt.LwrString(st5);
	cout << "ptr = " << ptr << endl;
}


void menu()
{
	cout << "字符串处理" << endl;
	cout << "1.判断字符串是否相等" << endl;
	cout << "2.判断字符串大小" << endl;
	cout << "3.判断字符串"
}
