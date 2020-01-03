#include "pch.h"
#include "iostream"
using namespace std;
struct Teacher {
	char name[64];
	int age;
};
//在被调用函数 获取资源
int getTeacher(Teacher **p) {
	Teacher *tmp = NULL;
	if (p == NULL) {
		return - 1;
	}
	tmp = (Teacher *)malloc(sizeof(Teacher));
	if (tmp == NULL) {
		return -2;
	}
	tmp->age = 33;
	*p = tmp;
}

void FreeTeacher(Teacher *pT1) {
	if (pT1 == NULL) {
		return;
	}
	free(pT1);
}
//在被调用函数 获取资源
int getTeacher2(Teacher* &myp) {
	// c++中的引用
	myp = (Teacher *)malloc(sizeof(Teacher));
	if (myp == NULL) {
		return -1;
	}
	myp->age = 36;
}
void main12281() {
	//C 语言中的二级指针
	Teacher *pT1 = NULL;
	getTeacher(&pT1);
	cout << "age " << pT1->age<<endl;
	FreeTeacher(pT1);

	getTeacher2(pT1);
	cout << "age " << pT1->age << endl;
	cout << "age " << pT1->age<<endl;
	FreeTeacher(pT1);
}