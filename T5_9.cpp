/*
 anthor:duan wei
 date:,Mar 25th, 2022
 function:奇整数的乘积
*/
#include<iostream>

using namespace std;

int main()
{
	int m = 1;
	for (int i = 1; i <= 15; i++)
	{
		if (i % 2 != 0)
		{
			m = m * i;
		}
	}
	cout << "1到15中奇数的乘积为：" << m << endl;
	return 0;
}
