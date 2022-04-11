/*
 anthor:duan wei
 date:,Apr.8st, 2022
 function:计算机辅助教学
*/
#include <iostream>
#include<stdlib.h>
int rand(int result);
using namespace std;

int main()
{
    int result=rand(result);
        cout<<"How much is num1 times num2 ?"<<endl;
        int result1;
        cin>>result1;
    if(result==result1)
    {
        cout<<"Very good!"<<endl;
        int result=rand(result);
        cout<<"How much is num1 times num2 ?"<<endl;
        int result1;
        cin>>result1;
    }

    else
    {
        cout<<"No.Please try again."<<endl;
        int result3=rand(result);
        cout<<"How much is num1 times num2 ?"<<endl;
        int result4;
        cin>>result4;
        while(result3!=result4)
        {
            cout<<"No.Please try again."<<endl;
            result3=rand(result);
            cout<<"How much is num1 times num2 ?"<<endl;
            cin>>result4;
        }
    }


	return 0;
}
int rand(int result)
{
    int num1=1+rand()%9;
    int num2=1+rand()%9;
    result=num1*num2;
    cout<<"num1="<<num1<<endl;
    cout<<"num2="<<num2<<endl;
    return result;

}
