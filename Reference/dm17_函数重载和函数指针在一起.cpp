#include "pch.h"
#include <iostream>
using namespace std;
typedef void (myTypeFunc)(int a, int b);//int
//myTypeFunc *myfuncp=NULL;//����һ������ָ�� ���ָ��ָ��������ڵ�ַ

//����һ������ָ������
typedef void (*myPTypeFunc)(int a, int b);//������һ��ָ����������
//myPTypeFunc fp=NULL; //ͨ������ָ������ ������һ������ָ��

//����һ������ָ�� ����
void(*myVarPFunc)(int a, int b);

//
int main() {

}