/*
 anthor:duan wei
 date:,Mar 18th, 2022
 function:ֱ�������εı�
*/
#include<iostream>

using namespace std;

int main()
{
	int a, b, c;
	cout << "����������������0������";
	cin >> a >> b >> c;
	while( a <= 0 || b <= 0 || c <= 0){
        cout << "����������" << endl;
        cin >> a >> b >>c;
	}
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
		{
			cout << "������ֵ���Ա�ʾһ��ֱ�������ε�������";
		}
		else
            cout<< "������ֵ���Բ���ʾһ��ֱ�������ε�������";
	}
	else
        cout << "������ֵ���Բ���ʾһ��ֱ�������ε�������";
	return 0;
}
