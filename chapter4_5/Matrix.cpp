#include "Matrix.h"
#include <iostream>
using namespace std;

Matrix::Matrix()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			mat[i][j] = 0;
		}
	}
}

Matrix::~Matrix()
{
}

Matrix operator+(Matrix& a, Matrix& b)
{
	Matrix c;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			c.mat[i][j] = a.mat[i][j] + b.mat[i][j];
		}
	}
	return c;
}

istream& operator >> (istream& aa, Matrix& m)
{
	cout << "input value of matrix:" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			aa >> m.mat[i][j];
		}
	}
	return aa;
}

ostream& operator << (ostream& oo, Matrix& m)
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			oo << m.mat[i][j] << "    ";
			//out << endl;
		}
	}
	return oo;
}