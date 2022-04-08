/*
 anthor:duan wei
 date:,Mar 26th, 2022
 function:修改星号组成的菱形图案
*/
#include <iostream>

using namespace std;

int main()
{

    int i,j,k;
    int h;//行数
    cout<<"请输入图案的行数";
    cin>>h;
    if(h%2==1&&h>0&&h<20)
    {
        for(i=1; i<=1+h/2; i++)
        {
            k=1;
            for(j=1; j<=i+h/2; j++)
            {
                if(k<=1+h/2-i)
                {
                    cout<<" ";
                    k++;
                }
                else
                    cout<<"*";
            }
            cout<<endl;
        }
        for(i=1; i<=1+h/2; i++)
        {
            k=1;
            for(j=1; j<=h-i; j++)
            {
                if(k<=i)
                {
                    cout<<" ";
                    k++;
                }
                else
                    cout<<"*";
            }
            cout<<endl;
        }
    }

    return 0;
}
