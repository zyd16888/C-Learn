#include "pch.h"
#include <bits/stdc++.h>
#include "arraymax.h"
using namespace std;

void Array_max::set_value()
{
	cout << "please input ten nums:" << endl;
	int i;
	for (i = 0; i < 10; i++)
		cin >> array[i];
}
void Array_max::max_value()
{
	int i;
	max = array[0];
	for ( i = 0; i < 10; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}
}
void Array_max::show_value()
{
	cout << "max = " << max;
}