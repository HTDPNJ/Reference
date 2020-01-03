#include "pch.h"
#include "iostream"
using namespace std;
struct Teacher {
	char name[64];
	int age;
};
//�ڱ����ú��� ��ȡ��Դ
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
//�ڱ����ú��� ��ȡ��Դ
int getTeacher2(Teacher* &myp) {
	// c++�е�����
	myp = (Teacher *)malloc(sizeof(Teacher));
	if (myp == NULL) {
		return -1;
	}
	myp->age = 36;
}
void main12281() {
	//C �����еĶ���ָ��
	Teacher *pT1 = NULL;
	getTeacher(&pT1);
	cout << "age " << pT1->age<<endl;
	FreeTeacher(pT1);

	getTeacher2(pT1);
	cout << "age " << pT1->age << endl;
	cout << "age " << pT1->age<<endl;
	FreeTeacher(pT1);
}