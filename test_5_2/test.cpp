#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//���Ժ����ֲ��������ؾֲ�������ַ
int* function()
{
	int a = 10;
	return &a;
}

//����new�ڶ������� ���Է��ص�ַ
int* function1()
{
	int* p = new int(10);
	return p;
}

//new ������
void func2()
{
	int* p = new int(10);
	cout << *p << endl; 
	cout << *p << endl;

	delete p;
}

//new ����һ������
void func3()
{
	int* arr = new int[10];

	//�����鸳ֵ
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 1;
	}

	//��ӡ
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	//����  ����������ʱ�����һ��������
	delete[]arr;
}

//��������������
void Swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
int main()
{
	int* p = function();
	cout << *p << endl;//��һ���ܴ����ȷ��ֵ����Ϊ�����˵�ַ
	cout << *p << endl;//����

	int* p1 = function1();
	cout << *p1 << endl;
	cout << *p1 << endl;

	func2();
	func3();

	//���� �����������
	//���ñ����ʼ��
	//�����ڳ�ʼ���󲻿��Ը���
	int a = 10;
	//�﷨�� �������� &���� = ԭ��
	int& b = a;

	cout << "a:" << a << endl;
	cout << "b:" << b << endl;

	b = 100;

	cout << "a:" << a << endl;
	cout << "b:" << b << endl;

	int a1 = 10;
	int b1 = 20;
	Swap(a1, b1);
	cout << a1 << endl;
	cout << b1 << endl;
	system("pause");
	return 0;
}