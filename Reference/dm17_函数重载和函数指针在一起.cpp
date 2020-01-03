#include "pch.h"
#include <iostream>
using namespace std;
typedef void (myTypeFunc)(int a, int b);//int
//myTypeFunc *myfuncp=NULL;//定义一个函数指针 这个指针指向函数的入口地址

//申明一个函数指针类型
typedef void (*myPTypeFunc)(int a, int b);//申明了一个指针数据类型
//myPTypeFunc fp=NULL; //通过函数指针类型 定义了一个函数指针

//定义一个函数指针 变量
void(*myVarPFunc)(int a, int b);

//
int main() {

}