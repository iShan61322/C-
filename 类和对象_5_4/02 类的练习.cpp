#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>

//���һ��ѧ����  ������������ѧ�� ���Ը�������ѧ�Ÿ�ֵ  ������ʾѧ����������ѧ��
class Student
{
	//����Ȩ��
public:

	//����
	string name;
	string ID;

	//��ʾ����
	void Print()
	{
		cout << "Name:" << name << endl;
		cout << "ID:" << ID << endl;
	}

};
/*int main()
{
	Student s;
	s.name = "Bob";
	s.ID = "613";

	s.Print();
	system("pause");
	return 0;
}*/