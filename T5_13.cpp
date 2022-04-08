/*
 anthor:duan wei
 date:,Mar 25th, 2022
 function:条形图
*/
#include<iostream>

using namespace std;

int main()
{
	int num;
	cout << "请输入5个大于1小于30的整数:";
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
