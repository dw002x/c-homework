/*
	Author:Ji xiaona
	Date:March 25,2022
	Function:������ƽ��ֵ
	5.6(������ƽ��ֵ)��дһ������ʹ��һ��for��������ɸ�������ƽ��ֵ����ӡ���
	�ٶ���������Ǳ��ֵ9999��һ�����е�ʾ�������������£�10 8 11 7 9 9999
	��������Ӧ����9999֮ǰ������������ƽ��ֵ
*/
#include<iostream>

using namespace std;

int main()
{
	int n,m,sum=0;
	cout << "��������Ҫ�󼸸����ֵ�ƽ��ֵ��";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		sum = sum + m;
	}
	cout << sum/n << endl;
	return 0;
}