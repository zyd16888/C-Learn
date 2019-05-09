#include <iostream>
#include "Matrix.h"
using namespace std;

Matrix::Matrix()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = 0;
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
		for (int j = 0; j < 3; j++)
		{
			c.arr[i][j] = a.arr[i][j] + b.arr[i][j];
		}
	return c;
}

void Matrix::input()
{
	cout << "input value of matrix:" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
	}
		
}

void Matrix::display()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << "  " ;
		}
		cout << endl;
	}
}