/*
 anthor:duan wei
 date:,Mar 18th, 2022
 function:��ӡ����������ʮ����ֵ
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int i = 0, a = 0;
    string n;
    cin >> n;
    while (n.size() != i)
    {
        a *= 2;
        a += n[i] - '0';
        i++;
    }
	cout << "�ö���������ʮ����ֵΪ:" << a << endl;
	return 0;
}
