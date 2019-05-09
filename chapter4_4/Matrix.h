#pragma once
#include<iostream>
using namespace std;

class Matrix
{
public:
	Matrix();
	friend Matrix operator+(Matrix&, Matrix&);
	void input();
	void display();
	~Matrix();

private:
	int arr[2][3];
};

