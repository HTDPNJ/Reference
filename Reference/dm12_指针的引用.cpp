#include "pch.h"
#include "iostream"
using namespace std;
struct Teacher {
	char name[64];
	int age;
};
//在被调用函数 获取资源
int getTeacher(Teacher **p) {

}
void main() {
	Teacher *pT1 = NULL;
	getTeacher(&pT1);
	cout << "hello..." << endl;
}