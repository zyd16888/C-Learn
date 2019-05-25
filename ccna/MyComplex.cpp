#include <iostream>
#include "MyComplex.h"
using namespace std;

MyComplex::MyComplex()
{
	real = 0; imag = 0;
}

MyComplex::~MyComplex()
{
}

MyComplex::MyComplex(int a)
{
	real = a;
	imag = 0;
}

MyComplex::MyComplex(int a, int b)
{
	real = a;
	imag = b;
}

MyComplex::MyComplex(const MyComplex& v)
{
	real = v.real;
	imag = v.imag;
}

MyComplex operator+(MyComplex m, MyComplex n)
{
	return MyComplex(m.real + n.real, m.imag + n.imag);
}
MyComplex operator-(MyComplex m, MyComplex n)
{
	return MyComplex(m.real - n.real, m.imag - n.imag);
}
MyComplex operator*(MyComplex m, MyComplex n) 
{
	MyComplex c;
	c.real = m.real * n.real - m.imag * n.imag;
	c.imag = m.imag * n.real + m.real * n.imag;
	return c;
}
MyComplex operator/(MyComplex m, MyComplex n)
{
	MyComplex c;
	c.real = (m.real * n.real + m.imag * n.imag) / (n.real * n.real + n.imag * n.imag);
	c.imag = (m.imag * n.real - m.real * n.imag) / (n.real * n.real + n.imag * n.imag);
	return c;
}

ostream& operator<<(ostream& s, MyComplex& t)
{
	s << "(" << t.real << "," << t.imag << "i) " << endl;
	return s;
}

istream& operator>>(istream& s, MyComplex& t)
{
	cout << "please input real: " ;
	s >> t.real;
	cout << "please input imag: ";
	s >> t.imag;

	return s;
}

MyComplex& MyComplex::operator=(const MyComplex& rhs)
{
	real = rhs.real;
	imag = rhs.imag;
	return *this;
}

MyComplex& MyComplex::operator+=(const MyComplex& rhs)
{
	real += rhs.real;
	imag += rhs.real;
	return *this;
}

MyComplex& MyComplex::operator-=(const MyComplex& rhs)
{
	real -= rhs.real;
	imag -= rhs.real;
	return *this;
}
MyComplex& MyComplex::operator*=(const MyComplex& rhs)
{
	real = real * rhs.real - imag * rhs.imag;
	imag = imag * rhs.real + real * rhs.imag;
	return *this;
}
MyComplex& MyComplex::operator/=(const MyComplex& rhs)
{
	real = (real * rhs.real + imag * rhs.imag) / (rhs.real * rhs.real + rhs.imag * rhs.imag);
	imag = (imag * rhs.real - real * rhs.imag) / (rhs.real * rhs.real + rhs.imag * rhs.imag);
	return *this;
}