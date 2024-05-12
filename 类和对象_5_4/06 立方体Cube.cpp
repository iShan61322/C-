#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//���һ����������Cube
//���ԣ���  ��  ��  
//��Ϊ�� ��ȡ���������������
//�ֱ�ͨ��ȫ�ֱ����;��ڱ����ж������������Ƿ�һ��

class Cube
{
public:
	//��Ϊ
	//���ó�
	void setL(int L)
	{
		c_L = L;
	}
	//��ȡ��
	int getL()
	{
		return c_L;
	}
	//���ÿ�
	void setW(int W)
	{
		c_W = W;
	}
	//��ȡ��
	int getW()
	{
		return c_W;
	}
	//���ø�
	void setH(int H)
	{
		c_H = H;
	}
	//��ȡ��
	int getH()
	{
		return c_H;
	}

	//��������������
	int CalS()
	{
		return 2 * (c_L * c_W + c_W * c_H + c_L * c_H);
	}

	//�������������
	int CalV()
	{
		return c_L * c_W * c_H;
	}
	
	//�����ж�
	bool isSameByClass(Cube& c)
	{
		if (c.getL() == c_L && c.getW() == c_W && c.getH() == c_L)
		{
			return true;
		}
		return false;
	}
	


	//��������
private:
	int c_L;
	int c_W;
	int c_H;
};

//ȫ�ֺ����ж��Ƿ�Ϊ��ͬ������
bool isSame(Cube* c1, Cube* c2)
{
	if (c1->getL() == c2->getL() && c1->getW() == c2->getW() && c1->getH() == c2->getH())
	{
		return true;
	}

	return false;
}
/*int main()
{
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);
	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);

	int ret = isSame(&c1, &c2);
	if (ret == true)
	{
		cout << "Same" << endl;
	}
	else 
	{
		cout << "Different" << endl;
	}

	ret = c1.isSameByClass(c2);
	if (ret == true)
	{
		cout << "Class:Same" << endl;
	}
	else
	{
		cout << "Class:Different" << endl;
	}
	system("pause");
	return 0;
}*/