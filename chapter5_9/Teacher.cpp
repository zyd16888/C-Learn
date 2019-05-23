#include <iostream>
#include"Teacher.h"
using namespace std;

Teacher::Teacher(string nam, int a, char s, string tit, string ad, string t):name(nam),age(a),sex(s),title(tit),addr(ad),tel(t)
{
}

Teacher::~Teacher()
{
}

void Teacher::display()
{
	cout << "name: " << name << endl;
	cout << "age: " << age << endl;
	cout << "sex: " << sex << endl;
	cout << "title: " << title << endl;
	cout << "address: " << addr << endl;
	cout << "tel: " << tel << endl;
}