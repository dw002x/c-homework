/*
 anthor:duan wei
 date:,Mar 26th, 2022
 function:facebook用户基数增长
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
    cout<<"当月增长率为0.02时，在第"<<month<<"月Facebook的用户将达到25亿"<<endl;
    num=10;
    month=1;
    while(num<=25)
    {
        num*=1.03;
        month++;
    }
    cout<<"当月增长率为0.03时，在第"<<month<<"月Facebook的用户将达到25亿"<<endl;
    num=10;
    month=1;
    while(num<=25)
    {
        num*=1.04;
        month++;
    }
    cout<<"当月增长率为0.04时，在第"<<month<<"月Facebook的用户将达到25亿"<<endl;
    num=10;
    month=1;
    while(num<=25)
    {
        num*=1.05;
        month++;
    }
    cout<<"当月增长率为0.05时，在第"<<month<<"月Facebook的用户将达到25亿"<<endl;
    return 0;

}

