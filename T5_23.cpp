/*
 anthor:duan wei
 date:,Mar 25th, 2022
 function:�Ǻ���ɵ�����ͼ��
*/
#include <iostream>

using namespace std;

int main()
{

    int i,j,k;

    for(i=1;i<=5;i++)
        {
            k=1;
            for(j=1;j<=i+4;j++)
            {
                if(k<=5-i)
                {
                    cout<<" ";
                    k++;
                }
                else
                    cout<<"*";
            }
            cout<<endl;
        }
    for(i=1;i<=5;i++)
    {
        k=1;
        for(j=1;j<=9-i;j++)
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
    return 0;
}
