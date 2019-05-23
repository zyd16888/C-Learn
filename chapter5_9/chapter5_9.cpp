// chapter5_9.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Cadre.h"
#include "Teacher.h"
#include "Teacher_Cadre.h"
using namespace std;


int main()
{
	Teacher_Cadre te_ca("zyd", 20, 'm', "prof.", "student", "135 Beijing", "123456789", 15034.5);
	te_ca.show();
	return 0;
}

