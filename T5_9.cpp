/*
 anthor:duan wei
 date:,Mar 25th, 2022
 function:�������ĳ˻�
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
	cout << "1��15�������ĳ˻�Ϊ��" << m << endl;
	return 0;
}
