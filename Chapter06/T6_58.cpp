/*
 anthor:duan wei
 date:,Apr.8st, 2022
 function:计算机辅助教学：消除学生疲劳
*/
#include <iostream>
#include<stdlib.h>
#include<time.h>//使每轮生成的随机数不再重复
int rand(int result);
void PraiseComment();
void EncourageComment();
using namespace std;

int main()
{
    int result=rand(result);
        cout<<"How much is num1 times num2 ?"<<endl;
        int result1;
        cin>>result1;
    if(result==result1)
    {
        PraiseComment();
        int result=rand(result);
        cout<<"How much is num1 times num2 ?"<<endl;
        int result1;
        cin>>result1;
    }

    else
    {
        EncourageComment();
        int result3=rand(result);
        cout<<"How much is num1 times num2 ?"<<endl;
        int result4;
        cin>>result4;
        while(result3!=result4)
        {
            EncourageComment();
            result3=rand(result);
            cout<<"How much is num1 times num2 ?"<<endl;
            cin>>result4;
        }
        PraiseComment();
    }


	return 0;
}



int rand(int result)
{
    srand((int)time(0));//使每轮生成的随机数不再重复
    int num1=1+rand()%9;
    int num2=1+rand()%9;
    result=num1*num2;
    cout<<"num1="<<num1<<endl;
    cout<<"num2="<<num2<<endl;
    return result;

}
void PraiseComment()
{
    srand((int)time(0));
    int c=1+rand()%3;
    switch(c)
    {
    case 1:
        cout<<"Very good!"<<endl;
        break;
    case 2:
        cout<<"Excellent!"<<endl;break;
    case 3:
        cout<<"Nice work!"<<endl;break;
    case 4:
        cout<<"Keep up the good work!"<<endl;break;
    }

}
void EncourageComment()
{
    srand((int)time(0));
    int e=1+rand()%3;
    switch(e)
    {
    case 1:
        cout<<"No.Please try again."<<endl;
        break;
    case 2:
        cout<<"Wrong.Try once more."<<endl;break;
    case 3:
        cout<<"Don't give up."<<endl;break;
    case 4:
        cout<<"No.Try again."<<endl;break;
    }

}

