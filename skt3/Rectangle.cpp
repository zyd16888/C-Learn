#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle()
{
	lenth = 0;
	width = 0;
}
Rectangle::Rectangle(int a, int b)
{
	lenth = a;
	width = b;
}
Rectangle::~Rectangle()
{
}
bool operator > (Rectangle& a, Rectangle& b)
{
	if (a.lenth * a.width > b.lenth * b.width)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool operator < (Rectangle& a, Rectangle& b)
{
	if (a.lenth * a.width < b.lenth * b.width)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Rectangle::display()
{
	cout << "lenth: " << lenth << "  width: " << width << endl;
	cout << "area: " << lenth * width << endl;
}