#include<iostream>
#include<string>
#include<sstream>

using namespace std;

void main()
{
	string people[3] = {};
	double scores[3] = {};
	int nums=0;
	cout << "�o�O�ӧP�_���Z�O�_�ή檺�{��" << endl;

	for (int i = 0; i < 3; i++)
	{
		string name;
		double score;
		int w = 0;
		cout << "�п�J�� "<<i+1<<" �ӤH���W�r�G ";
		cin >> name;
		for (int k = 0; k < i; k++)
		{
			if (name == people[k])
			{
				cout << "�W�r���@�˷F��~~���ӦW�r�A��!" << endl;
				system("pause");
				i--;
				w = 1;
			}
		}
		if (w==0)
		{
			people[i] = name;
			cout << "�п�J " << name << " �����Z�G";
			cin >> score;
			if (score>100 || score<0)
			{
				cout << "��J�����Ƥ��b1~100���@~" << endl;
				cout << "�����A���|�F!" << endl;
				system("pause");
				exit(0);
			}
			scores[i] = score;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if (scores[i]<60)
		{
			cout << people[i] << " �����Z�� " << scores[i] <<"���A���ή�@!������"<< endl;
			nums++;
		}
	}
	cout << "�ҥH��~�`�@�� " << nums << "�ӤH���ή�~~�}�}" << endl;
	cout << "AND " << 3 - nums << " �ӤH�ή�" << endl;
	system("pause");
}