/*
 anthor:duan wei
 date:,Mar 18th, 2022
 function:�׳�
*/
#include<iostream>

using namespace std;

int main()
{
	//a) ����һ�����Ľ׳�
	int n1,m1=1;
	cout << "������һ���Ǹ�������";
	cin >> n1;

	while (n1 > 0)
	{
		m1 = n1 * m1;
		n1--;
	}
	cout << "�����Ľ׳�Ϊ��" << m1 << endl;

	//b) ����e��ֵ
	double n2, m2 = 1;
	double e1 = 1;
	cout << "��������Ҫ��e�ľ��ȣ�";
	cin >> n2;
	while (n2 > 0)
	{
		m2 = n2 * m2;
		e1 = e1 + 1 / m2;
		n2--;
	}
	cout << "e�Ĺ�ֵΪ��" << e1 << endl;

	//c) ����e^x��ֵ
	double n3, m3 = 1, x, X=1;
	double e2 = 1;
	cout << "��������Ҫ��e�ľ��ȣ�";
	cin >> n3;
	cout << "������x��ֵ��";
	cin >> x;
	while (n3 > 0)
	{
		X = X * x;
		m3 = n3 * m3;
		e2 = e2 + X / m3;
		n3--;
	}
	cout << "e^x�Ĺ�ֵΪ��" << e2 << endl;

	return 0;
}
