/*
anthor:duan wei
date:,Apr.6st, 2022
function:«Û√›º∆À„
*/
#include<iostream>

using namespace std;

int integerPower(int base, int exponent)
{
    int m = 1;
    for (int i = 0; i < exponent; i++)
    {
        m = m * base;
    }
    return m;
}
int main()
{
    int base, exponent;
    cout << "Please enter the base and the exponent:";
    cin >> base >> exponent;
    cout << integerPower(base, exponent) << endl;
    return 0;
}
