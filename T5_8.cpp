/*
 anthor:duan wei
 date:,Mar 25th, 2022
 function:����С����
*/
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n, a,m=10000000;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		m = min({ a,m });
	}
	cout << "��С����Ϊ��" << m << endl;
	return 0;
}
