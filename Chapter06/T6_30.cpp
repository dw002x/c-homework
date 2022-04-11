/*
 anthor:duan wei
 date:,Apr.1st, 2022
 function:数字反向
*/
#include<iostream>
int contrary(int x);
using namespace std;
int main()
{
    int num;
    cin>>num;
    cout<<contrary(num)<<endl;
    return 0;
}

int contrary(int x)
{
    int y=x;
    int num=0;
    while(y>0)
    {
        num=num*10+y%10;
        y=y/10;
    }
    return num;
}
