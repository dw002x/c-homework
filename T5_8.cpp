/*
 anthor:duan wei
 date:,Mar 25th, 2022
 function:找最小整数
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
	cout << "最小整数为：" << m << endl;
	return 0;
}
