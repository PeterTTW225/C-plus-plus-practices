#include<iostream>
#include<stdlib.h>
#include <time.h>
#include<string>
using namespace std;

int* check_repeat(int DLT[6],int k);
int* ascending(int num[6],int p);
int* read(int num[6]);
int* check_range(int num[6]);
int* lotter(int num[6], int dlt[]);
int* late(int q, int qq);
int* out(int n[6]);

int* main()
{
	//Part1
	char q1;
	cout << "���o�ڬO���Q�S�A�Q���D�ڪ��Ǹ���?" << endl;
	cout << "�Ц^��y or n" << endl;
	cin >> q1;
	char y=121 ;
	char n=110 ;
	if (q1 ==y)
	{
		cout << "�n�զn�իj�j�i�D�A" << endl;
		cout << "104328031" << endl;
	}
	else if (q1 == n)
	{
		cout << "�n�ڤ��Q���D�N���Q���D" << endl;
		cout << "��" << endl;
	}
	else
	{
		cout << "�ЧA�^��yes��no�A���N�ĨĦ^��yes��no�a!" << endl;
		cout << "�o�ˤ��n�@!" << endl;
	}
	late(5000, 10000);
	system("pause");
	//Part2------------------------------------------------------------------------------------------

	cout << endl;
	cout << "�n��~���g�I�A�{�b�Ӫ��Ӥj�ֳz�C��" << endl;
	cout << "�z�����q01~49������6�Ӹ��X�i���`�C" << endl;
	int dlt[6] = {};//�ֳz�����X
	int p;//�����Ȧs��
	srand(time(NULL));//����	
	check_repeat(dlt,0);//�ζü��H������6�ӼƦr[������]
	ascending(dlt,0);//��6�Ʀr[�ɾ��ƦC]

	int num[6] = {};//Ū���ϥΪ̿�J���ƭ�
	cout << "�q0~49�����@�Ӥ@�Ӷ�J�a�A�n�F��Enter�C���n���Ʈ@!!" << endl;
	cout << "WARNING--�p�G��J�D�Ʀr�A�|�����ڵ�play!" << endl;
	for (int w = 0; w < 6; w++)
	{
		int n = 0;
		cout << "�п�J��" << w+1 << "�ӼƦr�G";
		cin >> n;
		num[w] = n;
	}
	check_range(num);//�T�{�եبϥΪ̿�J���Ʀr�d��藍��
	check_repeat(num, 1);//�T�{�եبϥΪ̵L��J���ƪ��r
	ascending(num,0);//���Ӷ��Ǳ�
	cout << "�����ֳz�}�����X�O~" << endl;
	late(65000, 10000);
	out(dlt);
	cout << endl;
	late(45000, 10000);
	cout << "�z��J�����X�O~" << endl;
	late(30000, 10000);
	out(num);
	late(20000, 10000);
	lotter(num, dlt);//���
	return(0);
}

int* check_repeat(int DLT[6],int t)
{	
	//t=0:�T�{�L���ƪ����Ͷü�
	//t=1:�T�{�եبϥΪ̿�J�Ʀr�O�_�ۦP
	srand(time(NULL));
	for (int i = 0; i < 6; i++)
	{
		if (t == 0)
		{
			DLT[i] = (rand() % 49) + 1;
		}
		for (int k = 0; k < i; k++)
		{
			if (DLT[i] == DLT[k])
			{
				if (t == 0)
				{
					i--;
				}
				else
				{
					for (int i = 0; i < 5; i++)
					{
							cout << "�N���o�ˤ��n���I" << endl;
					}
					for (int i = 0; i < 5; i++)
					{
						cout << "���n���ƼƦr���I" << endl;
					}
					for (int i = 0; i < 5; i++)
					{
						cout << "�����A���F�I" << endl;
					}
						system("pause");
						exit(1);
				}
			}
		}
	}		
	return DLT;
}

int* ascending(int num[6], int p)
{
	for (int i = 0; i < 6; i++)
	{	
		srand(time(NULL));
		for (int i = 0; i < 6; i++)
		{
			for (int h = 0; h < i; h++)
			{
				if (num[i] < num[h])
				{
					p = num[i];
					num[i] = num[h];
					num[h] = p;
					i = 0;
				}
			}
		}
	}
	return num;
}

int* check_range(int num[6])
{
	for (int i = 0; i < 6; i++)
	{
		if (num[i] < 1 || num[i] >49)
		{
			for (int j = 0; j < 2; j++)
			{
				for (int i = 0; i < 5; i++)
				{
					cout << "�d��b1��49���O�ܡH" << endl;
				}
				for (int i = 0; i < 5; i++)
				{
					cout << "���M����u�A�H���ڤ����D�I" << endl;
				}
				for (int i = 0; i < 5; i++)
				{
					cout << "�����A���F�I" << endl;
				}
			}
			system("pause");
			exit(1);
		}
	}
}

int* lotter(int num[6], int dlt[])
{
	for (int l = 0; l < 6; l++)
	{
		if (num[l] == dlt[l])
		{ }
		else
		{
			cout << "�S������!!" << endl;
			cout << "������" << endl;
			late(65000, 10000);
			cout << "�T�T��~" << endl;
			system("pause");
			return(0);
		}
	}
	cout << "�z!���M�����F!!�֥h�R�j�ֳz!!" << endl;
	cout << "�O�o�n���ڤ@�I�@XD" << endl;
	system("pause");
	exit(0);
	return(0);
}

int* late(int q, int qq)
{
	for (int i = 0; i < q; i++)for (int j = 0; j<qq; j++);//�����~~
	return(0);
}

int* out(int n[6])
{
	for (int k = 0; k < 6; k++)
	{
		cout << n[k] << " ";
	}
	return(0);
}