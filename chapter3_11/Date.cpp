#include <iostream>
#include "php.h"
using namespace std;
Date::Date()
{
}

Date::~Date()
{
}
Date::Date(int m, int d, int y) :month(m), day(d), year(y) { }