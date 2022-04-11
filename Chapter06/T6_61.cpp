/*
 anthor:duan wei
 date:,Apr.8st, 2022
 function:计算机辅助教学：监控学生表现
*/
#include <iostream>
#include<stdlib.h>
#include<time.h>//使每轮生成的随机数不再重复
int rand11(int result);
int rand12(int result);
int rand13(int result);
int rand14(int result);

int rand21(int result);
int rand22(int result);
int rand23(int result);
int rand24(int result);

void PraiseComment();
void EncourageComment();
using namespace std;

int main()
{
    int level;
    cout<<"Please choose the level:1 or 2"<<endl;
    cin>>level;
    int type;
    cout<<"Please choose the type:1,2,3or4 ."<<endl;
    cout<<"1 represents addition;2 represents subtraction;3 represents multiplication；4 represents division"<<endl;
    cin>>type;

    int t=0,f=0;


    if(1==level)
    {
        if(1==type)
        {
            for(int i=1; i<=10; i++)
            {
                int result=rand11(result);
                cout<<"How much is num1 times num2 ?"<<endl;
                int result1;
                cin>>result1;
                if(result==result1)
                {
                    PraiseComment();

                    t++;
                }
                else
                {
                    EncourageComment();

                    f++;
                }
            }
        }
        else if(2==type)
        {
            for(int i=1; i<=10; i++)
            {
                int result=rand12(result);
                cout<<"How much is num1 times num2 ?"<<endl;
                int result1;
                cin>>result1;
                if(result==result1)
                {
                    PraiseComment();

                    t++;
                }
                else
                {
                    EncourageComment();

                    f++;
                }
            }
        }
        else if(3==type)
        {
            for(int i=1; i<=10; i++)
            {
                int result=rand13(result);
                cout<<"How much is num1 times num2 ?"<<endl;
                int result1;
                cin>>result1;
                if(result==result1)
                {
                    PraiseComment();

                    t++;
                }
                else
                {
                    EncourageComment();

                    f++;
                }
            }
        }
        else if(4==type)
        {
            for(int i=1; i<=10; i++)
            {
                int result=rand14(result);
                cout<<"How much is num1 times num2 ?"<<endl;
                int result1;
                cin>>result1;
                if(result==result1)
                {
                    PraiseComment();

                    t++;
                }
                else
                {
                    EncourageComment();

                    f++;
                }
            }
        }

        if(t>=7.5)
            cout<<"Congratulations,you are ready to the next lever.";
        else
            cout<<"Please ask your teacher for extra help.";
    }



    if(2==level)
    {
        if(1==type)
        {
            for(int i=1; i<=10; i++)
            {
                int result=rand21(result);
                cout<<"How much is num1 times num2 ?"<<endl;
                int result1;
                cin>>result1;
                if(result==result1)
                {
                    PraiseComment();

                    t++;
                }
                else
                {
                    EncourageComment();

                    f++;
                }
            }
        }
        else if(2==type)
        {
            for(int i=1; i<=10; i++)
            {
                int result=rand22(result);
                cout<<"How much is num1 times num2 ?"<<endl;
                int result1;
                cin>>result1;
                if(result==result1)
                {
                    PraiseComment();

                    t++;
                }
                else
                {
                    EncourageComment();

                    f++;
                }
            }
        }
        else if(3==type)
        {
            for(int i=1; i<=10; i++)
            {
                int result=rand23(result);
                cout<<"How much is num1 times num2 ?"<<endl;
                int result1;
                cin>>result1;
                if(result==result1)
                {
                    PraiseComment();

                    t++;
                }
                else
                {
                    EncourageComment();

                    f++;
                }
            }
        }
        else if(4==type)
        {
            for(int i=1; i<=10; i++)
            {
                int result=rand24(result);
                cout<<"How much is num1 times num2 ?"<<endl;
                int result1;
                cin>>result1;
                if(result==result1)
                {
                    PraiseComment();

                    t++;
                }
                else
                {
                    EncourageComment();

                    f++;
                }
            }
        }

        if(t>=7.5)
            cout<<"Congratulations,you are ready to the next lever.";
        else
            cout<<"Please ask your teacher for extra help.";
    }

	return 0;
}


int rand11(int result)
{
    srand((int)time(0));//使每轮生成的随机数不再重复
    int num1=1+rand()%9;
    int num2=1+rand()%9;
    result=num1+num2;
    cout<<"num1="<<num1<<endl;
    cout<<"num2="<<num2<<endl;
    return result;

}
int rand12(int result)
{
    srand((int)time(0));//使每轮生成的随机数不再重复
    int num1=1+rand()%9;
    int num2=1+rand()%9;
    result=num1-num2;
    cout<<"num1="<<num1<<endl;
    cout<<"num2="<<num2<<endl;
    return result;

}
int rand13(int result)
{
    srand((int)time(0));//使每轮生成的随机数不再重复
    int num1=1+rand()%9;
    int num2=1+rand()%9;
    result=num1*num2;
    cout<<"num1="<<num1<<endl;
    cout<<"num2="<<num2<<endl;
    return result;

}
int rand14(int result)
{
    srand((int)time(0));//使每轮生成的随机数不再重复
    int num1=1+rand()%9;
    int num2=1+rand()%9;
    result=num1/num2;
    cout<<"num1="<<num1<<endl;
    cout<<"num2="<<num2<<endl;
    return result;

}

int rand21(int result)
{
    srand((int)time(0));//使每轮生成的随机数不再重复
    int num1=1+rand()%99;
    int num2=1+rand()%99;
    result=num1+num2;
    cout<<"num1="<<num1<<endl;
    cout<<"num2="<<num2<<endl;
    return result;

}
int rand22(int result)
{
    srand((int)time(0));//使每轮生成的随机数不再重复
    int num1=1+rand()%99;
    int num2=1+rand()%99;
    result=num1-num2;
    cout<<"num1="<<num1<<endl;
    cout<<"num2="<<num2<<endl;
    return result;

}
int rand23(int result)
{
    srand((int)time(0));//使每轮生成的随机数不再重复
    int num1=1+rand()%99;
    int num2=1+rand()%99;
    result=num1*num2;
    cout<<"num1="<<num1<<endl;
    cout<<"num2="<<num2<<endl;
    return result;

}
int rand24(int result)
{
    srand((int)time(0));//使每轮生成的随机数不再重复
    int num1=1+rand()%99;
    int num2=1+rand()%99;
    result=num1/num2;
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

