// Chapter1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <bits/stdc++.h>  //万能头文件
using namespace std;

//函数前置声明
int sortArr(int arr[10]);
float sortArr(float arr[10]);
double sortArr(double arr[10]);

int main() 
{
	float arr[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	sortArr(arr);

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "  ";
	}
}
int sortArr(int arr[10]) 
{
	sort(arr,arr + 10);
	return 0;
}

float sortArr(float arr[10])
{
	sort(arr, arr + 10);
	return 0;
}

double sortArr(double arr[10]) 
{
	sort(arr, arr + 10);
	return 0;
}


