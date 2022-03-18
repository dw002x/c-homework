/*
 anthor:duan wei
 date:,Mar 18th, 2022
 function:星号正方形
*/
#include<iostream>

using namespace std;

int main()
{
	int l,i,j;
	cout << "请输入正方形的边长：";
	cin >> l;
	if (l == 1)
		cout << "*";
	else
	{
		for (i = 0; i < l; i++)
			cout << "*";
		cout << endl;
		for (i = 0; i < l - 2; i++)
		{
			cout << "*";
			for (j = 0; j < l - 2; j++)
			{
				cout << " ";
			}
			cout << "*" << endl;
		}
		for (i = 0; i < l; i++)
            cout << "*";

	}
	return 0;
}
