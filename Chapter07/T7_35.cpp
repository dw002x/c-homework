/*
 anthor:duan wei
 date:April 26.2022
 function:�������
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
		cout << "����������������۴��" << endl;
		cin >> u;
		cout << endl;
		response[n][i] = u;
		n++;
		cout << "����Ի����������۴��" << endl;
		cin >> u;
		cout << endl;
		response[n][i] = u;
		n++;
		cout << "�������ʳ����������۴��" << endl;
		cin >> u;
		cout << endl;
		response[n][i] = u;
		n++;
		cout << "������г�����������۴��" << endl;
		cin >> u;
		cout << endl;
		response[n][i] = u;
		n++;
		cout << "����Խ�������������۴��" << endl;
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
	cout << "��������" << "\t";
	for (i = 0; i < 10; i++)
	{
		cout << response[0][i] << " ";
	}
	cout << "\t" << "��10������" << "\t" << "ƽ����Ϊ��" << a << endl;
	for (b = 0, i = 0; i < 10; i++)
	{
		b += response[0][i];
	}
	b /= 10;
	cout << "��������" << "\t";
	for (i = 0; i < 10; i++)
	{
		cout << response[1][i] << " ";
	}
	cout << "\t" << "��10������" << "\t" << "ƽ����Ϊ��" << b << endl;
	for (c = 0, i = 0; i < 10; i++)
	{
		c += response[0][i];
	}
	c /= 10;
	cout << "��ʳ����" << "\t";
	for (i = 0; i < 10; i++)
	{
		cout << response[2][i] << " ";
	}
	cout << "\t" << "��10������" << "\t" << "ƽ����Ϊ��" << c << endl;
	for (d = 0, i = 0; i < 10; i++)
	{
		d += response[0][i];
	}
	d /= 10;
	cout << "�г�����" << "\t";
	for (i = 0; i < 10; i++)
	{
		cout << response[3][i] << " ";
	}
	cout << "\t" << "��10������" << "\t" << "ƽ����Ϊ��" << d << endl;
	for (e = 0, i = 0; i < 10; i++)
	{
		e += response[0][i];
	}
	e /= 10;
	cout << "��������" << "\t";
	for (i = 0; i < 10; i++)
	{
		cout << response[4][i] << " ";
	}
	cout << "\t" << "��10������" << "\t" << "ƽ����Ϊ��" << d << endl;
	f[0] = a; f[1] = b; f[2] = c; f[3] = d; f[4] = e;
	for (i = 0; i < 5; i++)
	{
		if (f[i] > max)
		{
			max = f[i];
		}
	}
	if (max == f[0])
		cout << "���������ܷ����Ϊ:" << f[0];
	else if (max == f[1])
		cout << "���������ܷ����Ϊ:" << f[1];
	else if (max == f[2])
		cout << "��ʳ�����ܷ����Ϊ:" << f[2];
	else if (max == f[3])
		cout << "�г������ܷ����Ϊ:" << f[3];
	else if (max == f[4])
		cout << "���������ܷ����Ϊ:" << f[4];
	for (i = 0; i < 5; i++)
	{
		if (f[i] < min)
		{
			min = f[i];
		}
	}
	if (min == f[0])
		cout << "���������ܷ����Ϊ:" << f[0];
	else if (min == f[1])
		cout << "���������ܷ����Ϊ:" << f[1];
	else if (min == f[2])
		cout << "��ʳ�����ܷ����Ϊ:" << f[2];
	else if (min == f[3])
		cout << "�г������ܷ����Ϊ:" << f[3];
	else if (min == f[4])
		cout << "���������ܷ����Ϊ:" << f[4];
	return 0;
}



