#include<iostream>
#include "Teacher_Cadre.h"

Teacher_Cadre::Teacher_Cadre(string nam, int a, char s, string t, string p, string ad, string tel, float w) :
	Teacher(nam, a, s, t, ad, tel), Cadre(nam, a, s, p, ad, tel), wage(w) {}

Teacher_Cadre::~Teacher_Cadre()
{
}

void Teacher_Cadre::show()
{
	Teacher::display();
	cout << "post:" << Cadre::post << endl;
	cout << "wages:" << wage << endl;
}