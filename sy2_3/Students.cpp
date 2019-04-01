#include<bits/stdc++.h>
#include"pch.h"

using namespace std;

void Students::setValue()
{
	cout << "please input id name chinese math english: " << endl;
	cin >> id >> name >> chinese >> math >> english ;
}

void Students::totalScore()
{
	int total = chinese + math + english;
	cout << "totalScote = " << total << endl;
}

void Students::sortScore()
{
	int sort = (chinese + math + english) / 3;
	cout << "sortScore = " << sort << endl;
}