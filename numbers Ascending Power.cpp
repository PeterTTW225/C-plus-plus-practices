#include<iostream>

using namespace std;

double* piepiejan(double num[11], double p);
double* check_repeat(double num[11]);


void main()
{
	double input[11];
	for (int i = 0; i < 10; i++)
	{
		double p = 0;
		cout << "請輸入第" << i + 1 << "個數字：";
		cin >> p;
		input[i] = p;
	}
	piepiejan(input, 0);
	check_repeat(input);
	cout << "按照順序排之後依序是~" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << input[i] << " ";
	}
	cout << endl;
	cout << "GOOD!GOOD!" << endl;
	system("pause");
}


double* piepiejan(double num[11], double p)
{
	for (int i = 0; i < 10; i++)
	{
		for (int i = 0; i < 10; i++)
		{
			for (int h = 0; h < i; h++)
			{
				if (num[i] > num[h])
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

double* check_repeat(double num[11])
{
	for (int i = 0; i < 9; i++)
	{
		double nums = 0, times = 1;
		int k = i;
		int w = i + 1;
		for (int j = w; j < 10; j++)
		{
			if (num[k]==num[j])
			{
				nums = num[k];
				times++;
			}
			
		}
		if (times>1)
		{
			i += times-1;
			cout << "重複出現 " << times << " 個" << nums << endl;
			cout << "我很貼心的幫你把他們排再一起了!" << endl;
			cout << "不錯吧~~" << endl;
		}
	}
	return(0);
}


