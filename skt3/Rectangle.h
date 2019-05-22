#pragma once
#include <iostream>
using namespace std;
class Rectangle
{
public:
	Rectangle();
	Rectangle(int a, int b);
	~Rectangle();
	void display();
	friend bool operator > (Rectangle &, Rectangle &);
	friend bool operator < (Rectangle&, Rectangle&);
private:
	double lenth;
	double width;
};

