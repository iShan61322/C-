#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

int main()
{
	//break
	//for
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			break;
		}
		cout << i << endl;
	}

	//continue���
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
		{
			continue;//ֻ��ӡ����
		}
		cout << i << endl;
	}

	//goto���
	cout << "1" << endl;
	cout << "2" << endl;
	goto FLAG;
	cout << "3" << endl;
	cout << "4" << endl;
	FLAG:
	cout << "5" << endl;

	//����
	int a[] = { 1,2,3,4,5 };
	cout << "���������С�� " << sizeof(a) << endl;
	cout << "������һ��Ԫ�ش�С�� " << sizeof(a[0]) << endl;
	cout << "�����м���Ԫ�أ� " << sizeof(a) / sizeof(a[0]) << endl;

	cout << "�����ַ�� " << a << endl;
	cout << "������Ԫ�ص�ַ�� " << &a[0] << endl;
	cout << "����ڶ���Ԫ�ص�ַ�� " << &a[1] << endl;
	system("pause");
	return 0;
}