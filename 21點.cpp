#include<iostream>
#include<string>
#include<time.h>
using namespace std;

int j = 51 , cards[52] = {};
int points = 0, a;
int wtf = 0;

int give_cards(int d,int c);
int check_cards(int cardnum,int c);
int check_cardnum(int q);
int scores(int score);
int my_cards(int f);
int* late(int q, int qq);

void main()
{
	cout << "�Ӫ�21�I�K~!!" << endl;
	cout << "�W�h�O�G" << endl;
	cout << " A �� 1 �I�� 10 �I�A�ڷ|�۰����A�P�_�X�A��(�K�K)" << endl;
	cout << " 2 - 10 ���ӵP���I��" << endl;
	cout << " J , Q , K �� 10 �I�C" << endl;
	cout << "�X�P�����H���A�ȱo�H��" << endl;
	system("pause");
	for ( ; ; )//���s�~�P
	{
		for (int b = 0; b < 52; b++)
		{
			cards[b] = b + 1;
		}
		j = 51;
		cout << "�~���P�o!!" << endl;
		for (int i = 0; i != 1;  )//�~��C��
		{
			if (j < 10)//�w���P
			{
				cout << "�P�ֵo���o�I"<<endl;
				cout << "���s�~�P���I" << endl;
				i = 1;
			}
			else
			{
				give_cards(0, 0);
				int d = 0;
				for (d = 1; d != 0; )
				{
					cout << "�A�٭n�P�ܡH(Y/N)" << endl;
					string k;
					cin >> k;
					if (k == "y" || k == "yes" || k == "Y" || k == "YES")
					{
						cout << "�n���I" << endl;
						cout << "�o��";
						give_cards(0, 0);
					}
					else if (k == "n" || k == "no" || k == "N" || k == "NO")
					{
						cout << "�n���I" << endl;
						d = 2;
					}
					else
					{
						cout << "�A��J�����OYES�]���ONO" << endl;
						cout << "�A�n���s��J�ܡH" << endl;
						string idiot;
						cin >> idiot;
						if (idiot == "yes" || idiot == "y" || idiot == "YES" || idiot == "Y")
						{}
						else
						{
							cout << "���T�T�o!" << endl;
							system("pause");
							exit(0);
						}
					}
					ex = scores(0);
					if (ex > 21)
					{
						cout << "���������A�A��F!!!!" << endl;
						cout << "�A�w�g " << ex << " �I�F" << endl;
						system("pause");
					}
					if (d == 2)
					{
						cout << "----------XXXXXXXXXXXXXXXXXXXXXXXXXX----------" << endl;
						int point = my_cards(0);
						cout << "���`�@ " << point << " �I" << endl;
						if (point > 21)
						{
							cout << "OMG!!" << endl;
							cout << "�A�`�@ " << ex << " �I" << endl;
							cout << "�ڳ��M " << point << " �I�����z���FQAQ" << endl;
							cout << "�ӧQ�Q�A�ߨ��F���A�A�Ӱ�!�A���|�b�o�򩯹B�F!" << endl;
						}
						else if (point == ex)
						{
							cout << "���ڭ̥���C�I��OK��~" << endl;
						}
						else if (point > ex)
						{
							cout << "��������Ĺ�o�I" << endl;
							cout << "�ڥ� " << point << " �IĹ�A�� " << ex << " �I�AĹ�F " << point - ex << " �I" << endl;
						}
						else
						{
							cout << "QQ��A�Ȩ�A�u�r!" << endl;
							cout << "���]�u���L�O�H " << ex << " �IĹ�ڪ� " << point << " �I�Ӥw" << endl;
							cout << "�A�ӳ�D�@��!!" << endl;
						}						
					}
					if (ex > 21 || d == 2)
					{
						late(25000, 10000);
						cout << endl;
						cout << "�A�n�~�򪱿�JYES" << endl;
						cout << "�n���s�~�P��Jnew" << endl;
						cout << "���Q���N�H�K��J�a�I" << endl;
						a = 0;
						points = 0;
						string want;
						cin >> want;
						if (want == "y" || want == "yes" || want == "Y" || want == "YES")
						{
							cout << "�n�@~~" << endl;
							d = 0;
							i = 0;
						}
						else if (want == "new" || want == "NEW")
						{
							cout << "�n���I" << endl;
							d = 0;
							i = 1;
						}
						else
						{
							cout << "�A�T�w�n�h�X?" << endl;
							string check;
							cin >> check;
							if (check == "n" || check == "no" || check == "N" || check == "NO")
							{
								cout << "�n�@~~" << endl;
								cout << "���A���|" << endl;
								d = 0;
								i = 1;
							}
							else
							exit(0);
						}					
					}	
				}
				system("pause");
			}	
		}
	}
}

int give_cards(int d,int c)
{
	int p;
	srand(time(NULL));
	p = rand() % (j + 1);
	check_cards(p,c);
	return(0);
}


int check_cards(int cardnum,int c)
{
	int k = cards[cardnum] - 1;
	if (c == 0)
		cout << "�A";
	else
		cout << "��";
	cout << "�o�쪺�P�O	";
	if (k / 13 == 0)
		cout << "���� ";
	else if (k / 13 == 1)
		cout << "��� ";		
	else if (k / 13 == 2)
		cout << "�R�� ";
	else
		cout << "�®� ";
	check_cardnum(k);
	cards[cardnum] = cards[ j ];
	j--;
	return(0);
}

int check_cardnum(int q)
{
	int w = 0;
	w = q % 13;
	for (int i = 1; i < 10; i++)
	{
		if (w==i)
		{
			cout << i + 1 ;
			points += i + 1;
		}
	}
	if (w == 0)
	{
		cout << "A";
		a++;
		points += 1;
	}
	if (w == 10)
	{
		cout << "J";
		points += 10;
	}
	if (w == 11)
	{
		cout << "Q";
		points += 10;
	}
	if (w == 12)
	{
		cout << "K";
		points += 10;
	}
	cout<<endl;
	return(0);
}

int scores(int score)
{
	int h = points;
	if (a != 0)
	{
		for (int i = 0; i < a; i++)
		{
			if (points + (a - i) * 10 - a + i <= 21)
			{
				h += (a - i) * 10 - a + i;
				i = 5;
			}
		}
	}
	return(h);
}

int my_cards(int f)
{
	cout << "����(��)��P�o�I" << endl;
	cout << "�ڷ|�Χڪ��D����Ĺ�A��!" << endl;
	a = 0;
	points = 0;
	late(25000, 10000);
	give_cards(0, 1);
	int g = 0;
	for (int i = 0; i != 1 ; )
	{
		g = scores(0);
		int s = 0;
		if (g < 16 && a < 2)
		{
			s = 1;
		}
		if (g < 16 || s == 1)
		{
			cout << "�ڭn�A��@��!!" << endl;
			late(25000, 10000);
			give_cards(0, 1);
		}
		else
			i = 1;
	}
	return(g);
}

int* late(int q, int qq)
{
	for (int i = 0; i < q; i++)for (int j = 0; j<qq; j++);//�����~~
	return(0);
}