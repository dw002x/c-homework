/*
 anthor:duan wei
 date:April 26.2022
 function:民意测试
*/
#include<iostream>
#include<array>
using namespace std;
int main()
{
	int n = 0, i = 0, u, a, b, c, d, e, max = 0, min = 10;
	int f[5] = { 0 };
	array<int, 5 >topics = { 1,2,3,4,5 };
	array<array<int, 10>, 5> response = { 0 };
	for (; n != 4 || i != 9;)
	{
		n = 0;
		cout << "请你对政治问题评价打分" << endl;
		cin >> u;
		cout << endl;
		response[n][i] = u;
		n++;
		cout << "请你对环境问题评价打分" << endl;
		cin >> u;
		cout << endl;
		response[n][i] = u;
		n++;
		cout << "请你对粮食问题进行评价打分" << endl;
		cin >> u;
		cout << endl;
		response[n][i] = u;
		n++;
		cout << "请你对市场问题进行评价打分" << endl;
		cin >> u;
		cout << endl;
		response[n][i] = u;
		n++;
		cout << "请你对教育问题进行评价打分" << endl;
		cin >> u;
		cout << endl;
		response[n][i] = u;
		i++;
	}
	for (a = 0, i = 0; i < 10; i++)
	{
		a += response[0][i];
	}
	a /= 10;
	cout << "政治问题" << "\t";
	for (i = 0; i < 10; i++)
	{
		cout << response[0][i] << " ";
	}
	cout << "\t" << "有10个评价" << "\t" << "平均分为：" << a << endl;
	for (b = 0, i = 0; i < 10; i++)
	{
		b += response[0][i];
	}
	b /= 10;
	cout << "环境问题" << "\t";
	for (i = 0; i < 10; i++)
	{
		cout << response[1][i] << " ";
	}
	cout << "\t" << "有10个评价" << "\t" << "平均分为：" << b << endl;
	for (c = 0, i = 0; i < 10; i++)
	{
		c += response[0][i];
	}
	c /= 10;
	cout << "粮食问题" << "\t";
	for (i = 0; i < 10; i++)
	{
		cout << response[2][i] << " ";
	}
	cout << "\t" << "有10个评价" << "\t" << "平均分为：" << c << endl;
	for (d = 0, i = 0; i < 10; i++)
	{
		d += response[0][i];
	}
	d /= 10;
	cout << "市场问题" << "\t";
	for (i = 0; i < 10; i++)
	{
		cout << response[3][i] << " ";
	}
	cout << "\t" << "有10个评价" << "\t" << "平均分为：" << d << endl;
	for (e = 0, i = 0; i < 10; i++)
	{
		e += response[0][i];
	}
	e /= 10;
	cout << "教育问题" << "\t";
	for (i = 0; i < 10; i++)
	{
		cout << response[4][i] << " ";
	}
	cout << "\t" << "有10个评价" << "\t" << "平均分为：" << d << endl;
	f[0] = a; f[1] = b; f[2] = c; f[3] = d; f[4] = e;
	for (i = 0; i < 5; i++)
	{
		if (f[i] > max)
		{
			max = f[i];
		}
	}
	if (max == f[0])
		cout << "政治问题总分最高为:" << f[0];
	else if (max == f[1])
		cout << "环境问题总分最高为:" << f[1];
	else if (max == f[2])
		cout << "粮食问题总分最高为:" << f[2];
	else if (max == f[3])
		cout << "市场问题总分最高为:" << f[3];
	else if (max == f[4])
		cout << "教育问题总分最高为:" << f[4];
	for (i = 0; i < 5; i++)
	{
		if (f[i] < min)
		{
			min = f[i];
		}
	}
	if (min == f[0])
		cout << "政治问题总分最低为:" << f[0];
	else if (min == f[1])
		cout << "环境问题总分最低为:" << f[1];
	else if (min == f[2])
		cout << "粮食问题总分最低为:" << f[2];
	else if (min == f[3])
		cout << "市场问题总分最低为:" << f[3];
	else if (min == f[4])
		cout << "教育问题总分最低为:" << f[4];
	return 0;
}



