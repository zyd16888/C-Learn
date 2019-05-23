#pragma once
#include <iostream>
using namespace std;
class Teacher
{
public:
	Teacher(string nam, int a, char s, string tit, string ad, string t);
	~Teacher();
	void display();
protected:
	string name;
	int age;
	char sex;
	string title;
	string addr;
	string tel;
};

