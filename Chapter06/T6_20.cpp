/*
anthor:duan wei
date:,Apr.6st, 2022
function：倍数

*/
#include<iostream>

using namespace std;

double multiple(int a,int b)
{
    int m;
    if (b % a == 0)
    {
        m = 1;
    }
    else m = 0;
    return m;
}

int main()
{
    int a=1, b=1;
    cout << "Please enter two integers:";
    while (a != 0 && b != 0)
    {
        cin >> a >> b;
        cout << multiple(a, b) << endl;
    }
    return 0;
}
