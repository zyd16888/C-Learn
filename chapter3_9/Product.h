#pragma once
#include <iostream>
class Product
{
public:
	Product();
	~Product();
	int n1;
	float s;
	static int n;
	static float discount;
	static float sum;
	Product(int num, int quantity, float price);
	void total();
	static void display();
private:

};

