/*
 anthor:duan wei
 date:,Mar 18th, 2022
 function:计算圆的直径、周长和面积
*/
#include<iostream>

using namespace std;

int main()
{
	double r, pi = 3.14159;
	cout << "输入圆的半径：";
	cin >> r;
	cout << "直径:" << 2 * r << endl;
	cout << "周长：" << 2 * pi * r << endl;
	cout << "面积：" << pi * r * r << endl;
	return 0;
}
