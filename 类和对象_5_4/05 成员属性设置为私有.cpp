#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>

//��Ա��������Ϊ˽���ŵ�
//1. �����Լ����ƶ�дȨ�� 2. ����дȨ�� ���ǿ��Լ��������Ч��

//��дһ���� ����Ϊ˽����
class Rat
{
public:
	//name�ɶ���д
	//��������
	void setName(string name)
	{
		r_name = name;
	}
	//��ȡ����
	void getName()
	{
		cout << "Name:" << r_name << endl;;
	}

	//��ȡ����
	void getAge()
	{
		cout << "Age:" << r_age << endl;
	}
	void setAge(int age)
	{
		if (age < 0 || age>120)
		{
			cout << "������������" << endl;
			return;
		}
		r_age = age;
	}

	//���ú���
	void setNum(string num)
	{
		r_num = num;
	}
private:
	string r_name;//�ɶ�  ��д

	int r_age=18;//�ɶ�  ����д -> �ɶ� ��д����������С��120

	string r_num;//���ɶ�  ��д
};
/*int main()
{
	Rat rat;
	rat.setName("ţ��˨");
	rat.getName();
	rat.setAge(20);
	rat.getAge();
	rat.setNum("613222");
	system("pause");
	return 0;
}*/