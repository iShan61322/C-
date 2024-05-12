#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//�жϵ��Բ�Ĺ�ϵ
//���һ������
class Point
{
public:
	//����x
	void setX(int x)
	{
		p_x = x;
	}
	//��ȡx
	int getX()
	{
		return p_x;
	}
	//����y
	void setY(int x)
	{
		p_y = x;
	}
	//��ȡy
	int getY()
	{
		return p_y;
	}
	//���ԣ�x,y����
private:
	int p_x;
	int p_y;
};


//���һ��Բ��
class Circle
{
	//��Ϊ
public:
	//���ð뾶
	void setR(int r)
	{
		c_r = r;
	}
	//��ȡ�뾶
	int getR()
	{
		return c_r;
	}
	//����Բ��
	void setCenter(Point center)
	{
		Center = center;
	}
	//��ȡԲ��
	Point getCenter()
	{
		return Center;
	}

	//����
private:
	Point Center;
	int c_r;
};
//���һ���жϵĺ���
void isIt(Circle circle, Point point)
{
	//����뾶
	int rdistance = circle.getR() * circle.getR();

	//��������֮�����
	int distance = (circle.getCenter().getX() - point.getX()) * (circle.getCenter().getX() - point.getX()) +
		((circle.getCenter().getY() - point.getY()) * (circle.getCenter().getY() - point.getY()));

	//�ж�
	if (rdistance == distance)
	{
		cout << "����Բ��" << endl;
	}
	else if (rdistance < distance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}

int main()
{
	//����һ����
	Point point;
	point.setX(10);
	point.setY(10);

	//����һ��Բ
	Circle circle;
	circle.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	circle.setCenter(center);

	//�ж�
	isIt(circle, point);
	system("pause");
	return 0;
}