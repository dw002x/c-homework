/*
 anthor:duan wei
 date:,Mar 25th, 2022
 function:ʹ��Ƕ�׵�forѭ������ͼ��
*/
#include<iostream>

using namespace std;

int main()
{
	int i, j;
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << "*" ;
		}
		cout << endl;
	}
	cout << endl;
	for (i = 10; i >=1 ; i--)
	{
		for (j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	for (i = 1; i <= 10 ; i++)
	{
		for (j = 1; j < i; j++)
		{
			cout << " ";
		}
		for (j = 10; j >= i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	for (i = 10; i >=1 ; i--)
	{
		for (j = 1; j < i; j++)
		{
			cout << " ";
		}
		for (j = 10; j >= i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
