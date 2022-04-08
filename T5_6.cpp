/*
	Author:Ji xiaona
	Date:March 25,2022
	Function:整数求平均值
	5.6(整数求平均值)编写一个程序，使用一条for语句求若干个整数的平均值并打印结果
	假定最后读入的是标记值9999，一次运行的示范输入序列如下：10 8 11 7 9 9999
	表明程序应计算9999之前的所有整数的平均值
*/
#include<iostream>

using namespace std;

int main()
{
	int n,m,sum=0;
	cout << "请输入你要求几个数字的平均值：";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		sum = sum + m;
	}
	cout << sum/n << endl;
	return 0;
}