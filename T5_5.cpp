/*
 anthor:duan wei
 date:,Mar 25th, 2022
 function:�������
*/
#include<iostream>

using namespace std;

int main()
{
	int m,n,sum=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		sum = sum + m;
	}
	cout << ������Ϊ��" << sum << endl;
	return 0;
}
