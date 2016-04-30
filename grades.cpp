#include<iostream>
#include<string>
#include<sstream>

using namespace std;

void main()
{
	string people[3] = {};
	double scores[3] = {};
	int nums=0;
	cout << "這是個判斷成績是否及格的程式" << endl;

	for (int i = 0; i < 3; i++)
	{
		string name;
		double score;
		int w = 0;
		cout << "請輸入第 "<<i+1<<" 個人的名字： ";
		cin >> name;
		for (int k = 0; k < i; k++)
		{
			if (name == people[k])
			{
				cout << "名字取一樣幹嘛~~換個名字再來!" << endl;
				system("pause");
				i--;
				w = 1;
			}
		}
		if (w==0)
		{
			people[i] = name;
			cout << "請輸入 " << name << " 的成績：";
			cin >> score;
			if (score>100 || score<0)
			{
				cout << "輸入的分數不在1~100內哦~" << endl;
				cout << "不給你機會了!" << endl;
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
			cout << people[i] << " 的成績為 " << scores[i] <<"分，不及格哦!哈哈哈"<< endl;
			nums++;
		}
	}
	cout << "所以說~總共有 " << nums << "個人不及格~~ㄎㄎ" << endl;
	cout << "AND " << 3 - nums << " 個人及格" << endl;
	system("pause");
}