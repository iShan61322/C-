#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
#include<ctime>
//��ʦѧ������
struct Student
{
	string sName;
	int score;
};
struct Teacher
{
	string tName;
	struct Student sArray[5];
};


//��ֵ
void AllocateSpace(struct Teacher tArray[], int len)
{
	string nameSeed = "ABCDEFGH";
	//����ʦ�ṹ�帳ֵ
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];

		//��ѧ���ṹ�帳ֵ
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];

			//ѧ���ɼ������
			tArray[i].sArray[j].score = rand() % 61 + 40;
		}
	}
}

void PrintInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "tName: " << tArray[i].tName << endl;

		for (int j = 0; j < 5; j++)
		{
			cout << "\tsName: " << tArray[i].sArray[j].sName 
			 << "    s.score: " << tArray[i].sArray[j].score << endl;
		}
	}
}
int main()
{
	//���������
	srand((unsigned int)time(NULL));
	//������ʦ��һ����ʦ������ѧ��
	//��������
	Teacher tArray[3];
	int len = sizeof(tArray) / sizeof(tArray[0]);

	//��ֵ
	AllocateSpace(tArray, len);

	//��ӡ
	PrintInfo(tArray, len);
	system("pause");
	return 0;
}