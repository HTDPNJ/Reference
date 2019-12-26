// Reference.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;
int main12251()
{
	int a = 10;
	int &b = a;
	b = 100;
	cout << a;
	return 0;
}
int getAA1() {
	int a;
	a = 10;
	return a;
}
int& getAA2() {
	int a;
	a = 10;
	return a;
}
int* getAA3() {
	int a;
	a = 10;
	return &a;
}
int main12261() {
	int a1 = getAA1();
	int a2 = getAA2();
	int &a3 = getAA2();///该调用错误，不能用引用
	cout << a2 << endl;
	cout << a3 << endl;
	return 0;
}
