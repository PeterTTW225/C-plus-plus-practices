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
	cout << "哈囉我是王麒淞，想知道我的學號嗎?" << endl;
	cout << "請回答y or n" << endl;
	cin >> q1;
	char y=121 ;
	char n=110 ;
	if (q1 ==y)
	{
		cout << "好啦好啦勉強告訴你" << endl;
		cout << "104328031" << endl;
	}
	else if (q1 == n)
	{
		cout << "好啊不想知道就不想知道" << endl;
		cout << "哼" << endl;
	}
	else
	{
		cout << "請你回答yes或no，那就乖乖回答yes或no吧!" << endl;
		cout << "這樣不好哦!" << endl;
	}
	late(5000, 10000);
	system("pause");
	//Part2------------------------------------------------------------------------------------------

	cout << endl;
	cout << "好啦~正經點，現在來玩個大樂透遊戲" << endl;
	cout << "您必須從01~49中任選6個號碼進行投注。" << endl;
	int dlt[6] = {};//樂透獎號碼
	int p;//等等暫存用
	srand(time(NULL));//重整	
	check_repeat(dlt,0);//用亂數隨機產生6個數字[不重複]
	ascending(dlt,0);//使6數字[升冪排列]

	int num[6] = {};//讀取使用者輸入的數值
	cout << "從0~49之間一個一個填入吧，好了按Enter。不要重複哦!!" << endl;
	cout << "WARNING--如果輸入非數字，會直接拒絕play!" << endl;
	for (int w = 0; w < 6; w++)
	{
		int n = 0;
		cout << "請輸入第" << w+1 << "個數字：";
		cin >> n;
		num[w] = n;
	}
	check_range(num);//確認白目使用者輸入的數字範圍對不對
	check_repeat(num, 1);//確認白目使用者無輸入重複的字
	ascending(num,0);//按照順序排
	cout << "本期樂透開獎號碼是~" << endl;
	late(65000, 10000);
	out(dlt);
	cout << endl;
	late(45000, 10000);
	cout << "您輸入的號碼是~" << endl;
	late(30000, 10000);
	out(num);
	late(20000, 10000);
	lotter(num, dlt);//對獎
	return(0);
}

int* check_repeat(int DLT[6],int t)
{	
	//t=0:確認無重複的產生亂數
	//t=1:確認白目使用者輸入數字是否相同
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
							cout << "就說這樣不好齁！" << endl;
					}
					for (int i = 0; i < 5; i++)
					{
						cout << "不要重複數字嘛！" << endl;
					}
					for (int i = 0; i < 5; i++)
					{
						cout << "不給你玩了！" << endl;
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
					cout << "範圍在1～49不是嗎？" << endl;
				}
				for (int i = 0; i < 5; i++)
				{
					cout << "竟然不遵守，以為我不知道！" << endl;
				}
				for (int i = 0; i < 5; i++)
				{
					cout << "不給你玩了！" << endl;
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
			cout << "沒中獎啦!!" << endl;
			cout << "哈哈哈" << endl;
			late(65000, 10000);
			cout << "掰掰拉~" << endl;
			system("pause");
			return(0);
		}
	}
	cout << "哇!竟然中獎了!!快去買大樂透!!" << endl;
	cout << "記得要分我一點哦XD" << endl;
	system("pause");
	exit(0);
	return(0);
}

int* late(int q, int qq)
{
	for (int i = 0; i < q; i++)for (int j = 0; j<qq; j++);//延遲用~~
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