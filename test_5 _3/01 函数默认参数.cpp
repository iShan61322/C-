#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//����Ĭ�ϲ���
//��ĳ��λ����Ĭ�ϲ����������λ�ú󶼵���Ĭ�ϲ���
//���������뺯��ʵ��ֻ����һ����Ĭ�ϲ���
int Add(int a, int b, int c);
int Add(int a, int b = 10, int c = 20)
{
	return a + b + c;
}
//int main()
//{
//	//����Ĭ�ϲ���
//	cout << Add(5) << endl;
//
//	system("pause");
//	return 0;
//}