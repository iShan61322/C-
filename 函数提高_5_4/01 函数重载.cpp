#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//��������
//ͬһ��������
//����������ͬ
//�������������Ͳ�ͬ �� ˳��ͬ �� ������ͬ

void func()
{
	cout << "1" << endl;
}
void func(int a)
{
	cout << "2" << endl;
}
void func(int a, double b)
{
	cout << "3" << endl;
}
void func(double b, int a)
{
	cout << "4" << endl;
}
//ע�⣺ ��������ֵ�����Ͳ���Ϊ������������

//int main()
//{
//	func();
//	func(1);
//	func(1,0.1);
//	func(0.1, 1);
//
//	system("pause");
//	return 0;
//}