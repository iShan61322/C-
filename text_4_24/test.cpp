#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

int main()
{
	//ָ��
	int a = 0;
	int* p = &a;
	
	cout << "a�ĵ�ַ�� " << &a << endl;
	cout << "p�ĵ�ַ�� " << p << endl;

	//ָ����ռ��ַ��С��ȡ���ڲ���ϵͳ��С 32λ��Ϊ4 64λ��Ϊ8
	cout << "int*:" << sizeof(int*) << endl;
	cout << "char*:" << sizeof(char*) << endl;
	cout << "float*:" << sizeof(float*) << endl;
	cout << "double*:" << sizeof(double*) << endl;
	system("pause");
	return 0;
}