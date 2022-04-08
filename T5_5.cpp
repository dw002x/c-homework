/*
 anthor:duan wei
 date:,Mar 25th, 2022
 function:整数求和
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
	cout << 整数和为：" << sum << endl;
	return 0;
}
