/*
 anthor:duan wei
 date:,Mar 26th, 2022
 function:facebook�û���������
*/
#include <iostream>

using namespace std;

int main()
{
    float num=10;
    int month=1;
    while(num<=25)
    {
        num*=1.02;
        month++;
    }
    cout<<"����������Ϊ0.02ʱ���ڵ�"<<month<<"��Facebook���û����ﵽ25��"<<endl;
    num=10;
    month=1;
    while(num<=25)
    {
        num*=1.03;
        month++;
    }
    cout<<"����������Ϊ0.03ʱ���ڵ�"<<month<<"��Facebook���û����ﵽ25��"<<endl;
    num=10;
    month=1;
    while(num<=25)
    {
        num*=1.04;
        month++;
    }
    cout<<"����������Ϊ0.04ʱ���ڵ�"<<month<<"��Facebook���û����ﵽ25��"<<endl;
    num=10;
    month=1;
    while(num<=25)
    {
        num*=1.05;
        month++;
    }
    cout<<"����������Ϊ0.05ʱ���ڵ�"<<month<<"��Facebook���û����ﵽ25��"<<endl;
    return 0;

}

