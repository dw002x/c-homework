/*
 anthor:duan wei
 date:,Apr.1st, 2022
 function:�ݹ�����Լ��
*/
#include<iostream>
using namespace std;
int gcd(int x, int y)
{
    if (x%y == 0)
    return y;
    else
    return gcd(y, x % y);
}
int main()
{
    int x, y;
    cout << "������x��y��ֵ��x�������y" << endl;
    cin >> x;
    cin >> y;
    cout << gcd(x, y) << endl;
    return 0;
}
