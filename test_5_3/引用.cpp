#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//��������������ֵ
int& test1()
{
	//���ܷ��ؾֲ���������
	int a = 10;//�ֲ�����
	return a;
}

//����������Ϊ��ֵ
int& test2()
{
	//��̬���������ȫ����
	static int a = 20;
	return a;
}

void test3(const int& num)//����const�����޸�num�����Ӧ�ĵ�ַ��ֵ
{
	cout << num << endl;
}
int main()
{
	//��������������ֵ
	int& ret1 = test1();

	cout << ret1 << endl;//��һ�η�����ȷֵ����Ϊ����������
	cout << ret1 << endl;//�ڶ�����ʾ���룺�ֲ����������ջ�����������ý����Զ�����

	//ȫ������������ı�
	int& ret2 = test2();
	cout << ret2 << endl;
	cout << ret2 << endl;

	//����������Ϊ��ֵ
	test2() = 30;
	cout << ret2 << endl;
	cout << ret2 << endl;

	//��������
	//��Ҫ���������β� ��ֹ�����
	const int& ret3 = 10;//��const����ֱ�Ӹ�ֵ  ����ϵͳ������ĳɣ�int tmp=10;int& ret3=tmp;
	//�����������޸�ret3��ֵ
	test3(5);

	system("pause");
	return 0;
}