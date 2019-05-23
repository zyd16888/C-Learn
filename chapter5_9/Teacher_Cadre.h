#pragma once
#include <iostream>
#include "Cadre.h"
#include "Teacher.h"
using namespace std;

class Teacher_Cadre:public Teacher, public Cadre
{
public:
	Teacher_Cadre(string nam, int a, char s, string tit, string p, string ad, string t, float w);
	~Teacher_Cadre();
	void show();
private:
	float wage;
};

