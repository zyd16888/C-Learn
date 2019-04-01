#include<bits/stdc++.h>
#include "pch.h"
#include "volume.h"

void volume::setLine()
{
	cout << "please input length width height:" << endl;
	cin >> length;
	cin >> width;
	cin >> height;
}

void volume::volumeNum()
{
	tttt = length * width * height;
}

void volume::out()
{
	cout << "volume is :" << tttt << endl;
}