#include "Product.h"
#include <iostream>
using namespace std;

Product::Product(){}

Product::Product(int num, int quantity, float price) 
{
	n1 = quantity;
	if (quantity > 10)
	{
		s = quantity * price * 0.98;
	}
	else
	{
		s = quantity * price;
	}
	s = s * 0.95;
}

void Product::total()
{
	sum = sum + s;
	n = n + n1;
}
void Product::display()
{
	cout << "总价：" << sum << endl << "平均价：" << sum / n;
}


Product::~Product()
{
}