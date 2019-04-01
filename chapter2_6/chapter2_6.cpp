// chapter2_6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "volume.h"

int main()
{
	volume t1;
	t1.setLine();
	t1.volumeNum();
	t1.out();

	volume t2;
	t2.setLine();
	t2.volumeNum();
	t2.out();

	volume t3;
	t3.setLine();
	t3.volumeNum();
	t3.out();
}