/*
 anthor:duan wei
 date:,Mar 25th, 2022
 function:����ͼ
*/
#include<iostream>

using namespace std;

int main()
{
	int num;
	cout << "������5������1С��30������:";
	for (int i = 0; i < 5; i++)
	{
		cin >> num;
		cout << num << " ";
		for (int j = 0; j < num; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
