#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//���һ����
//Բ�� ������Ȩ��Ϊ����  �����а뾶 ���ܳ�
const double PI = 3.14;
class Circle
{
	//����Ȩ��
public:

	//���ԣ��뾶
	double radius;
	
	//���ܳ�
	double circumference()
	{
		return 2 * PI * radius;
	}
};
/*int main()
{
	//ͨ���ഴ������
	Circle c;
	//�����Խ��и�ֵ
	c.radius = 2.0;
	//����ܳ�
	cout << "Բ���ܳ���" << c.circumference() << endl;
	system("pause");
	return 0;
}*/