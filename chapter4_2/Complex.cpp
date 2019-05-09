#include<iostream>
#include "Complex.h"
using namespace std;

Complex::Complex()
{
	real = 0;
	imag = 0;
}
Complex::Complex(double r, double i) 
{
	real = r;
	imag = i;
}
Complex::~Complex()
{
}

Complex Complex::operator+(Complex &c2)
{
	Complex c;
	c.real = real + c2.real;
	c.imag = imag + c2.imag;
	return c;
}

Complex Complex::operator-(Complex &c2)
{
	Complex c;
	c.real = real - c2.real;
	c.imag = imag - c2.imag;
	return c;
}

Complex Complex::operator*(Complex &c2)
{
	Complex c;
	c.real = real * c2.real - imag * c2.imag;
	c.imag = imag * c2.real + real * c2.imag;
	return c;
}

Complex Complex::operator/(Complex &c2)
{
	Complex c;
	c.real = (real * c2.real + imag * c2.imag) / (c2.real * c2.real + c2.imag * c2.imag);
	c.imag = (imag * c2.real - real * c2.imag) / (c2.real * c2.real + c2.imag * c2.imag);
	return c;
}

void Complex::display()
{
	cout << "(" << real << "," << imag << "i) " << endl;
}

