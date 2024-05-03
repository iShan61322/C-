#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>

//��ʾ�˵���ʵ�ֹ���ѡ��
void showMenu()
{
	cout << "************************************" << endl;
	cout << "***         1�������ϵ��        ***" << endl;
	cout << "***         2����ʾ��ϵ��        ***" << endl;
	cout << "***         3��ɾ����ϵ��        ***" << endl;
	cout << "***         4��������ϵ��        ***" << endl;
	cout << "***         5���޸���ϵ��        ***" << endl;
	cout << "***         6�������ϵ��        ***" << endl;
	cout << "***         0���˳�ͨѶ¼        ***" << endl;
	cout << "************************************" << endl;
}

//��ϵ�˽ṹ�壺���� �Ա� ���� �绰 ��ͥסַ
struct Person
{
	string p_Name;
	int p_Sex;
	int p_Age;
	string p_tele;
	string p_addr;
};

#define MAX 1000
//ͨѶ¼�ṹ��
struct contact
{
	struct Person p_Array[MAX];
	int con_size;//��¼�ִ������
};

//�����ϵ��
void addPerson(struct contact* con)
{
	if (con->con_size == MAX)
	{
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
	else
	{
		//�������
		string name;
		cout << "������������" ;
		cin >> name;
		con->p_Array[con->con_size].p_Name = name;

		//����Ա�
		//1->�� 2->Ů
		int sex = 0;
		cout << "�������Ա�" << endl;
		cout << "1->�� 2->Ů" << endl;
		cin >> sex;
		while (true)
		{
			if (sex == 1 || sex == 2)
			{
				con->p_Array[con->con_size].p_Sex = sex;
				break;
			}
			else
			{
				cout << "������������������" << endl;
				return;
			}
		}

		//�������
		int age = 0;
		cout << "���������䣺" ;
		cin >> age;
		while (true)
		{
			if (age > 0 && age < 120)
			{
				con->p_Array[con->con_size].p_Age = age;
				break;
			}
		}

		//��ӵ绰
		string tele;
		cout << "������绰��";
		cin >> tele;
		con->p_Array[con->con_size].p_tele = tele;

		//��ӵ�ַ
		string addr;
		cout << "�������ַ��";
		cin >> addr;
		con->p_Array[con->con_size].p_addr = addr;

		//ÿ����Ӻ�size+1
		con->con_size++;
		cout << "��ӳɹ���" << endl;

		//����
		system("pause");
		system("cls");
	}
}

//��ʾ������ϵ��
void showPerson(contact* con)
{
	//���ж�ͨѶ¼�Ƿ�Ϊ��
	if (con->con_size == 0)
	{
		cout << "ͨѶ¼Ϊ��" << endl;
		return;
	}
	else
	{
		//��������
		for (int i = 0; i < con->con_size; i++)
		{
			cout << "������" << con->p_Array[i].p_Name << endl;
			cout << "�Ա�" << con->p_Array[i].p_Sex << endl;
			cout << "���䣺" << con->p_Array[i].p_Age << endl;
			cout << "�绰��" << con->p_Array[i].p_tele << endl;
			cout << "סַ��" << con->p_Array[i].p_addr << endl;
			cout << endl;
		}

		//��ӡ������
		system("pause");
		system("cls");
	}

}

//������ϵ���Ƿ����
//�������ֲ���
int isExited(contact* con, string name)
{
	int i = 0;
	for (i = 0; i < con->con_size; i++)
	{
		if (con->p_Array[i].p_Name == name)
		{
			return i;
		}
		return -1;
	}
}

//ɾ��ָ����ϵ��
void delPerson(contact* con)
{
	cout << "������Ҫɾ������ϵ��������";
	string name;
	cin >> name;

	
	int ret= isExited(con, name);
	//��һ��������ҵ��� �����±�i
	//�ڶ��������û�ҵ� ����-1
	if (ret != -1)
	{
		//�߼����ú������ϵ�˸���ǰһ��
		for (int i = ret; i < con->con_size; i++)
		{
			con->p_Array[i] = con->p_Array[i + 1];
		}
		con->con_size--;
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���.." << endl;
	}
	//����
	system("pause");
	system("cls");
}

//������ϵ��
void findPerson(contact* con)
{
	cout << "������Ҫ���ҵ���ϵ������:";
	string name;
	cin >> name;

	int ret = isExited(con, name);
	//1.�ҵ��� ��ӡ
	//2.û�ҵ�
	if (ret == -1)
	{
		cout << "���޴���" << endl;
		return;
	}
	else
	{
		cout << "�ҵ���" << endl;
		cout << "������" << con->p_Array[ret].p_Name << endl;
		cout << "�Ա�" << con->p_Array[ret].p_Sex << endl;
		cout << "���䣺" << con->p_Array[ret].p_Age << endl;
		cout << "�绰��" << con->p_Array[ret].p_tele << endl;
		cout << "סַ��" << con->p_Array[ret].p_addr << endl;
	}
	//����
	system("pause");
	system("cls");
}

//�޸�ָ����ϵ��
void modifyPerson(contact* con)
{
	cout << "������Ҫ�޸ĵ���ϵ��������";
	string name;
	cin >> name;

	int ret = isExited(con, name);

	//�ҵ��� һһ�޸�
	//û�ҵ� ��ʾ
	if (ret != -1)
	{
		cout << "�������޸�" << endl;
		cout << "������";
		cin >> con->p_Array[ret].p_Name;
		cout << "�Ա�";
		cin >> con->p_Array[ret].p_Sex;
		cout << "���䣺";
		cin >> con->p_Array[ret].p_Age;
		cout << "�绰��";
		cin >> con->p_Array[ret].p_tele;
		cout << "��ַ��";
		cin >> con->p_Array[ret].p_addr;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	//����
	system("pause");
	system("cls");
}

//���ͨѶ¼
void cleanContact(contact* con)
{
	con->con_size = 0;
	cout << "ͨѶ¼�����" << endl;

	//����
	system("pause");
	system("cls");
}
int main()
{
	contact con;
	con.con_size = 0;
	int option = 0;//����ı���
	while (true)
	{	
		showMenu();
	
		cout << "��ѡ��:>";
		cin >> option;

		switch (option)
		{
		case 1://���:1.��ϵ�˽ṹ�� 2.ͨѶ¼�ṹ�� 3.��װ����
			addPerson(&con);
			break;
		case 2://��ʾ
			showPerson(&con);
			break;
		case 3://ɾ��
			delPerson(&con);
			break;
		case 4://����
			findPerson(&con);
			break;
		case 5://�޸�
			modifyPerson(&con);
			break;
		case 6://���
			cleanContact(&con);
			break;
		case 0://�˳�
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "�����������������" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}