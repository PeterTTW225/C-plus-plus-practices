#include<iostream>
#include<string>
using namespace std;



void main()
{
	int k;
	cout << "�Q�n�X�h���P�P?" << endl;
	cin >> k;

	for (int j = 1; j <= k; j++)
	{
		for (int w = 1; w <= (k - j); w++)
		{
			cout << " ";
		}
		for (int q = 1; q <= j; q++)
		{
			cout << "��";
		}
		cout << endl;
	}




	system("pause");
}



