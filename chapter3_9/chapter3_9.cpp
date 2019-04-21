// chapter3_9.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <iomanip>
#include "Product.h"
using namespace std;

float Product::discount = 0.05;
float Product::sum = 0;
int Product::n = 0;
int main()
{
	const int NUM = 10;
	Product Prod[10];
	int m, i;
	cout << "数据数量：" << endl;
	cin >> m;
	int num;
	int quantity;
	float price;
	cout << "输入数据：" << endl;
	for ( i = 0; i < m; i++)
	{
		cin >> num >> quantity >> price;
		Product temp(num, quantity, price);
		Prod[i] = temp;
	}

	for ( i = 0; i < m; i++)
	{
		Prod[i].total();
	}
	cout << setiosflags(ios::fixed);
	cout << setprecision(2);
	Product::display();
	return 0;
}

