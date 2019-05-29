#pragma once
#include <iostream>
using namespace std;

class MyString
{
public:
	MyString();
	~MyString();
	MyString(const char* ptr);
	MyString(const MyString& str);
	MyString operator+(MyString& str);
	MyString operator=(MyString& str);
	bool operator>(MyString& str);
	bool operator<(MyString& str);
	bool operator== (MyString& str);
	friend ostream& operator<<(ostream& s, MyString& str);
	friend istream& operator>>(istream& s, MyString& str);
	int LenString();
	MyString LwrString(MyString& str);
	MyString UprString(MyString& str);

private:
	char *str;
};