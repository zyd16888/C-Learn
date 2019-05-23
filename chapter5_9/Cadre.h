#pragma once
#include <iostream>
using namespace std;

class Cadre
{
public:
	Cadre(string nam, int a, char s, string p, string ad, string t);
	~Cadre();
	void display();

protected:
	string name;
	int age;
	char sex;
	string post;
	string addr;
	string tell;

};