#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

void Swap(int* num1, int* num2)
{
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}
void BubbleSort(int* arr2, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (arr2[j] > arr2[j + 1])
			{
				int tmp = arr2[j];
				arr2[j] = arr2[j + 1];
				arr2[j + 1] = tmp;
			}
		}
	}
}

void Print(int* arr2, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		cout << arr2[i] << " ";
	}
}
int main()
{
	//const ���α���
	int a = 10;
	int b = 20;
	//����ָ��:�����޸�ָ���ָ�򣬵������޸�ָ��ָ��ı���
	const int* p = &a;
	p = &b;
	cout << *p << endl;

	//ָ�볣��:�������޸�ָ���ָ�򣬵������޸�ָ��ָ��ı���
	int* const n = &a;
	*n = 30;
	cout << *n << endl;

	//����ָ���������Ԫ��
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int* p1 = arr;

	for (int i = 0; i < 10; i++)
	{
		cout << *p1 << endl;
		p1++;
	}

	//ʵ�δ���
	int num1 = 10;
	int num2 = 20;

	Swap(&num1, &num2);
	cout << num1 << " ";
	cout << num2 << endl;

	//ָ��ʵ��ð������
	int arr2[] = { 9,2,5,4,1,6,3,8,7 };
	int size = sizeof(arr2) / sizeof(arr2[0]);
	BubbleSort(arr2,size);
	Print(arr2, size);
	system("pause");
	return 0;
}