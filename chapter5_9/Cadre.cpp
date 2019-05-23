#include <iostream>
#include "Cadre.h"
using namespace std;

Cadre::Cadre(string nam, int a, char s, string p, string ad, string t):name(nam),age(a),sex(s),post(p),addr(ad),tell(t)
{}
Cadre::~Cadre()
{
}
void Cadre::display()
{
	cout << "name:" << name << endl;
	cout << "age:" << age << endl;
	cout << "sex:" << sex << endl;
	cout << "post:" << post << endl;
	cout << "address:" << addr << endl;
	cout << "tel:" << tell << endl;
}



