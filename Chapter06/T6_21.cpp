/*
auther:duan wei
date: April 9,2022
function:Å¼Êý
*/
#include<iostream>

using namespace std;

int iseven(int s)
{
    int m=1;
    if ((s + 2) % 2 != 0)
    {
        m = 0;
    }
    return m;
}
int main()
{
    int s;
    for (int i = 0; i < 5; i++)
    {
        cin >> s;
        cout << iseven(s) << endl;
    }
    return 0;
}
