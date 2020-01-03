#include"pch.h"
#include<iostream>
using namespace std;
void main() {
	//普通引用
	int a = 10;
	int &b = a;
	printf("%d\n", a);
	//用变量初始化 常量引用
	int x = 20;
	const int &y = x; //常引用的作用：让变量 引用只读属性 不能通过y去修改x;
	cout << y << endl;

	{
		//用字变量初始化常量引用
		const int a = 10; //c++编译器把a放在符号表中
		const int &m = 43;
		cout << m << endl;
	}


	cout << "ho";
}