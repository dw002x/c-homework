/*
 anthor:duan wei
 date:April 25.2022
 function:������ѷ˹ɸ��
*/

include<iostream>

using namespace std;

int main()
{
    int i,c;
    int a[1001]={0};
    for(i=2; i<1001; i++)
    {
        a[i]=1;
    }
    for(i=2; i<1001; i++)
    {
        for(c=i*2; c<1001; c+=i)
        {
            a[c]=0;
        }
    }
    cout<<"1000���ڵ�����Ϊ��"<<endl;
    for(i=2; i<1001; i++)
    {
        if(a[i])
            cout<<i<<" ";
    }
    return 0;
}
