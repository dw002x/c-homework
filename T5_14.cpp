/*
 anthor:duan wei
 date:,Mar 25th, 2022
 function:计算总销售量
*/
#include<iostream>

using namespace std;

int main()
{
    int n,m;
    double p, sum;
    cout << "请输入产品编号和销售量:";
    cin >> n >> m;
    switch (n)
    {
    case 1:
        p = 2.98;
        sum = p * m;
        break;
    case 2:
        p = 4.50;
        sum = p * m;
        break;
    case 3:
        p = 9.98;
        sum = p * m;
        break;
    case 4:
        p = 4.49;
        sum = p * m;
        break;
    case 5:
        p = 6.87;
        sum = p * m;
        break;
    }
    cout << "所有售出产品的总销售额为:" << sum << endl;
    return 0;
}
