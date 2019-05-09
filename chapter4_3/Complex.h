#pragma once
#include <iostream>
using namespace std;
class Complex
{
public:
	Complex();
	Complex(double r, double i);
	Complex operator+(Complex& c2);
	Complex operator+(int& i);
	friend Complex operator+(int& i, Complex& c);
	void display();
	~Complex();

private:
	double real;
	double imag;
};

