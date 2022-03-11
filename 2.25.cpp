/*
 anthor:duan wei
 date:,Mar 10th, 2022
 function:输入两个数，确定并输出第一个数是否是第二个数的倍数
*/
#include <iostream>

using namespace std;

int main()
{
    int num1,num2;
    cout<<"请输入两个整数"<<endl;
    cin>>num1>>num2;
    if(num1%num2==0)
        cout<<"第一个数是第二个数的倍数";
    else
        cout<<"第一个数不是第二个数的倍数";

    return 0;
}
