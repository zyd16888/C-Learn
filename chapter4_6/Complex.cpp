#include "Complex.h"
#include <iostream>
using namespace std;


Complex::Complex()
{
	real = 0; imag = 0;
}
Complex::~Complex()
{
}
Complex::Complex(double r)
{
	real = r;
	imag = 0;
}
Complex::Complex(double r, double i)
{
	real = r;
	imag = i;
}
void Complex::display()
{
	cout << "(" << real << ", " << imag << ")" << endl;
}

Complex::operator double()
{
	return real;
}