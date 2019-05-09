#include<iostream>
#include"Complex.h"
using namespace std;

Complex::Complex()
{
	real = 0; imag = 0;
}

Complex::~Complex()
{
}

Complex::Complex(double r, double i) 
{
	real = r; imag = i; 
}

Complex Complex::operator+(Complex& c)
{
	return Complex(real + c.real, imag + c.imag);
}

Complex Complex::operator+(int& i)
{
	return Complex(real + i, imag);
}

Complex operator+(int& i, Complex& c)
{
	return Complex(i + c.real, c.imag);
}

void Complex::display()
{
	cout << "(" << real << "," << imag << "i)" << endl;
}