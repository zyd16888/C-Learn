#include "pch.h"
#include <iostream>
#include "student.h"
using namespace std;
void Student::display()
{
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}

void Student::set_value()
{
	cout << "please input num, name, sex" << endl;
	cin >> num >> name >> sex;
}