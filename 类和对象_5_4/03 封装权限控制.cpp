#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//��װ����Ȩ��
//public      ���ڿ��Է���  ������Է���
//protected   ���ڿ��Է���  ���ⲻ���Է���   ���ӿ��Է��ʸ��׵ı���Ȩ��
//private     ���ڿ��Է���  ���ⲻ���Է���   ���Ӳ����Է��ʸ��׵�˽��Ȩ��

class Rat
{
public:
	//����Ȩ��
	string name;

protected:
	//����Ȩ��
	string food;

private:
	//˽��Ȩ��
	string bankID;

public:
	void Print()
	{
		name = "ţ��˨";
		food = "С��ţɧ��";
		bankID = "613222";
	}

};
/*int main()
{
	Rat rat;
	rat.name = "Mywife";
	rat.Print();
	system("pause");
	return 0;
}*/