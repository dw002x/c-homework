/*
 anthor:duan wei
 date:,Apr.1st, 2022
 function:递归的最大公约数
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
    cout << "请输入x与y的值，x必须大于y" << endl;
    cin >> x;
    cin >> y;
    cout << gcd(x, y) << endl;
    return 0;
}
