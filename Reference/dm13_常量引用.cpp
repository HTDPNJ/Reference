#include"pch.h"
#include<iostream>
using namespace std;
void main() {
	//��ͨ����
	int a = 10;
	int &b = a;
	printf("%d\n", a);
	//�ñ�����ʼ�� ��������
	int x = 20;
	const int &y = x; //�����õ����ã��ñ��� ����ֻ������ ����ͨ��yȥ�޸�x;
	cout << y << endl;

	{
		//���ֱ�����ʼ����������
		const int a = 10; //c++��������a���ڷ��ű���
		const int &m = 43;
		cout << m << endl;
	}


	cout << "ho";
}