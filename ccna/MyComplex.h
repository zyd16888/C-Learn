#pragma once
#include <iostream>
using namespace std;

class MyComplex
{
public:
	MyComplex();
	MyComplex(int a);
	MyComplex(int a, int b);
	MyComplex(const MyComplex& v);
	MyComplex& operator=(const MyComplex& rhs);
	MyComplex& operator+=(const MyComplex& rhs);
	MyComplex& operator-=(const MyComplex& rhs);
	MyComplex& operator*=(const MyComplex& rhs);
	MyComplex& operator/=(const MyComplex& rhs);
	friend MyComplex operator+(MyComplex m, MyComplex n);
	friend MyComplex operator-(MyComplex m, MyComplex n);
	friend MyComplex operator*(MyComplex m, MyComplex n);
	friend MyComplex operator/(MyComplex m, MyComplex n);
	friend ostream& operator<<(ostream& s, MyComplex t);
	friend istream& operator>>(istream& s, MyComplex& t);
	~MyComplex();

private:
	double real;
	double imag;
};
