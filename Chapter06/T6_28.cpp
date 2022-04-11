/*
auther:duan wei
date: April 9,2022
function：完数
*/
#include<iostream>

using namespace std;

void isperfect(int i)
{
    int m = 0,s=0;
    int arr[100];
    for (int j = 1; j < i; j++)
    {
        if (i % j == 0)
        {
            arr[m] = j;
            m++;
            s = s + j;
        }
    }
    if (s == i)
    {
        int t;
        cout << i << "是完数," << i << "=1";
        for (t = 1; t < m; t++)
        {
            cout << "+" << arr[t];
        }cout << endl;
    }
}

int main()
{
    for (int i = 1; i <= 1000; i++)
    {
        isperfect(i);
    }
    return 0;
}
