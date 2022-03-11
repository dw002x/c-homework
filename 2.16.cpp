/*
 anthor:duan wei
 date:,Mar 10th, 2022
 function:输出两个数的和，乘积，差，商。
*/

#include <iostream>

using namespace std;

int main()
{
    int num1,num2;
    cout<<"请输入两个数"<<endl;
    cin>>num1>>num2;

    cout<<"两个数的和为"<<num1+num2<<endl;
    cout<<"两个数的乘积为"<<num1*num2<<endl;
    cout<<"两个数的差为"<<num1-num2<<endl;
    cout<<"两个数的商为"<<num1/num2<<endl;

    return 0;
}
