/*
 anthor:duan wei
 date:,Mar 18th, 2022
 function:阶乘
*/
#include<iostream>

using namespace std;

int main()
{
	//a) 计算一个数的阶乘
	int n1,m1=1;
	cout << "请输入一个非负整数：";
	cin >> n1;

	while (n1 > 0)
	{
		m1 = n1 * m1;
		n1--;
	}
	cout << "该数的阶乘为：" << m1 << endl;

	//b) 估算e的值
	double n2, m2 = 1;
	double e1 = 1;
	cout << "请输入想要的e的精度：";
	cin >> n2;
	while (n2 > 0)
	{
		m2 = n2 * m2;
		e1 = e1 + 1 / m2;
		n2--;
	}
	cout << "e的估值为：" << e1 << endl;

	//c) 估算e^x的值
	double n3, m3 = 1, x, X=1;
	double e2 = 1;
	cout << "请输入想要的e的精度：";
	cin >> n3;
	cout << "请输入x的值：";
	cin >> x;
	while (n3 > 0)
	{
		X = X * x;
		m3 = n3 * m3;
		e2 = e2 + X / m3;
		n3--;
	}
	cout << "e^x的估值为：" << e2 << endl;

	return 0;
}
