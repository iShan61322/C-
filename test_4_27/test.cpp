#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

struct Rat
{
	string name;
	int weight;
	float iq;
};
//�ṹ��Ƕ��
struct RatVillage
{
	string name;
	int population;
	struct Rat Ratcouple;
};
void Print1(struct Rat Liu)
{
	cout << Liu.name << " " << Liu.weight << " " << Liu.iq << endl;
}

void Print2(struct Rat* p)
{
	cout << "Name:" << p->name << " " << "Weight: " << p->weight << " " << "IQ: " << p->iq << endl;
}
int main()
{
	//�ṹ��
	struct Rat Liu = { "lys",90,100};//��������ʱ����ʡ��struct
	cout << Liu.name << " " << Liu.weight << " " << Liu.iq << endl;

	//�ṹ������
	//��������
	Rat couple[2] = { {"wife",90,100},
					{"hasband",120,10000} };
	//�޸ı���
	couple[1].iq = 20000;

	//����
	for (int i = 0; i < 2; i++)
	{
		cout << "Name:  " << couple[i].name<<" " << "Weight:  " << couple[i].weight <<" " << "IQ:  " << couple[i].iq<< endl;
	}

	//�ṹ��ָ��
	Rat Mousegod = { "God",99999,99999 };

	//����ָ��
	Rat* p = &Mousegod;

	//���
	cout << "Name:" << p->name << " " << "Weight: " << p->weight << " " << "IQ: " << p->iq << endl;

	//�ṹ��Ƕ��
	struct RatVillage n = { "Couple",2,{"couple",100,100} };
	
	//�ṹ���뺯��
	Print1(Liu);
	Print2(p);
	system("pause");

	return 0;
}