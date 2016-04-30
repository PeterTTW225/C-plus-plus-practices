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
	cout << "來玩21點八~!!" << endl;
	cout << "規則是：" << endl;
	cout << " A 做 1 點或 10 點，我會自動幫你判斷合適的(嘿嘿)" << endl;
	cout << " 2 - 10 做該牌之點數" << endl;
	cout << " J , Q , K 做 10 點。" << endl;
	cout << "出牌完全隨機，值得信賴" << endl;
	system("pause");
	for ( ; ; )//重新洗牌
	{
		for (int b = 0; b < 52; b++)
		{
			cards[b] = b + 1;
		}
		j = 51;
		cout << "洗完牌囉!!" << endl;
		for (int i = 0; i != 1;  )//繼續遊戲
		{
			if (j < 10)//安全牌
			{
				cout << "牌快發完囉！"<<endl;
				cout << "重新洗牌唄！" << endl;
				i = 1;
			}
			else
			{
				give_cards(0, 0);
				int d = 0;
				for (d = 1; d != 0; )
				{
					cout << "你還要牌嗎？(Y/N)" << endl;
					string k;
					cin >> k;
					if (k == "y" || k == "yes" || k == "Y" || k == "YES")
					{
						cout << "好的！" << endl;
						cout << "這次";
						give_cards(0, 0);
					}
					else if (k == "n" || k == "no" || k == "N" || k == "NO")
					{
						cout << "好的！" << endl;
						d = 2;
					}
					else
					{
						cout << "你輸入的不是YES也不是NO" << endl;
						cout << "你要重新輸入嗎？" << endl;
						string idiot;
						cin >> idiot;
						if (idiot == "yes" || idiot == "y" || idiot == "YES" || idiot == "Y")
						{}
						else
						{
							cout << "那掰掰囉!" << endl;
							system("pause");
							exit(0);
						}
					}
					ex = scores(0);
					if (ex > 21)
					{
						cout << "哈哈哈哈，你輸了!!!!" << endl;
						cout << "你已經 " << ex << " 點了" << endl;
						system("pause");
					}
					if (d == 2)
					{
						cout << "----------XXXXXXXXXXXXXXXXXXXXXXXXXX----------" << endl;
						int point = my_cards(0);
						cout << "我總共 " << point << " 點" << endl;
						if (point > 21)
						{
							cout << "OMG!!" << endl;
							cout << "你總共 " << ex << " 點" << endl;
							cout << "我竟然 " << point << " 點直接爆炸了QAQ" << endl;
							cout << "勝利被你撿走了嗚嗚，再來啊!你不會在這麼幸運了!" << endl;
						}
						else if (point == ex)
						{
							cout << "挖我們平手耶！還OK嘛~" << endl;
						}
						else if (point > ex)
						{
							cout << "哈哈哈我贏囉！" << endl;
							cout << "我用 " << point << " 點贏你的 " << ex << " 點，贏了 " << point - ex << " 點" << endl;
						}
						else
						{
							cout << "QQ算你賺到，真猛!" << endl;
							cout << "其實也只不過是以 " << ex << " 點贏我的 " << point << " 點而已" << endl;
							cout << "再來單挑一場!!" << endl;
						}						
					}
					if (ex > 21 || d == 2)
					{
						late(25000, 10000);
						cout << endl;
						cout << "你要繼續玩輸入YES" << endl;
						cout << "要重新洗牌輸入new" << endl;
						cout << "不想玩就隨便輸入吧！" << endl;
						a = 0;
						points = 0;
						string want;
						cin >> want;
						if (want == "y" || want == "yes" || want == "Y" || want == "YES")
						{
							cout << "好哦~~" << endl;
							d = 0;
							i = 0;
						}
						else if (want == "new" || want == "NEW")
						{
							cout << "好的！" << endl;
							d = 0;
							i = 1;
						}
						else
						{
							cout << "你確定要退出?" << endl;
							string check;
							cin >> check;
							if (check == "n" || check == "no" || check == "N" || check == "NO")
							{
								cout << "好哦~~" << endl;
								cout << "給你機會" << endl;
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
		cout << "你";
	else
		cout << "我";
	cout << "得到的牌是	";
	if (k / 13 == 0)
		cout << "梅花 ";
	else if (k / 13 == 1)
		cout << "方塊 ";		
	else if (k / 13 == 2)
		cout << "愛心 ";
	else
		cout << "黑桃 ";
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
	cout << "換我(莊)抽牌囉！" << endl;
	cout << "我會用我的主機來贏你的!" << endl;
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
			cout << "我要再抽一次!!" << endl;
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
	for (int i = 0; i < q; i++)for (int j = 0; j<qq; j++);//延遲用~~
	return(0);
}