/*
 anthor:duan wei
 date:,Mar 18th, 2022
 function:�����εı�
*/
#include<iostream>

using namespace std;

int main()
{
	double a, b, c;
	cout << "������������������ֵ��";
	cin >> a >> b >> c;
	while(a<=0||b<=0||c<=0){
        cout << "����������" << endl;
        cin >> a >> b >>c;
	}

	if (a+b>c&&a+c>b&&b+c>a)
	{
		cout << "������ֵ���Ա�ʾһ�������ε�������" << endl;
	}
	else
        cout << "������ֵ�����Ա�ʾһ�������ε�������" << endl;
	return 0;
}
