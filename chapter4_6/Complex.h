#pragma once
#include <iostream>
using namespace std;
class Complex
{
public:
	Complex();
	Complex(double r);
	Complex(double r, double i);
	operator double();
	void display();
	~Complex();

private:
	double real;
	double imag;
};


