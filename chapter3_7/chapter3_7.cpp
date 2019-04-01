// chapter3_7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "pch.h"
#include <iostream>
using namespace std;
const class Student {
public:
	const Student(int n, float s) :num(n), score(s) {}
	const void change(int n, float s) {
		num = n;
		score = s;
	}
	const void display() {
		cout << num << " " << score << endl;
	}
private:
	int num;
	float score;
};

int main() {
	const Student stud(101, 78.5);
	stud.display();
	stud.change(101, 80.5);
	stud.display();
	return 0;
}
