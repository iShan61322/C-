#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

int main()
{
	//ˮ�ɻ�����1.��λ��2.ÿһλ���������η���ӵ��ڸ���λ��
	int num = 100;
	do
	{
		
		int a = 0;
		int b = 0;
		int c = 0;

		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;

		if (a* a* a + b * b * b + c * c * c == num)
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);

	//forѭ��
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}

	//1-100������1.7�ı���  2.��λ����7  3.ʮλ����7���ӡ�����ӣ�������ӡԭ����
	for (int i = 1; i < 100; i++)
	{
		i % 7 == 0 || i % 10 == 7 || i / 10 == 7 ? cout << "������" << endl : cout << i << endl;
	}

	//forǶ��
	for (int i = 0; i < 10; i++)
	{
		for (int i = 0; i < 10; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	//�˷��ھ���
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << "*" << i << "=" << j * i << "\t";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}