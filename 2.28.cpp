
/*
 anthor:duan wei
 date:,Mar 10th, 2022
 function:����һ����λ�������ֽ�����ÿλ���ֲ����
*/
#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"��������λһ������"<<endl;
    cin>>num;
    int g,s,b,q,w;
    g=num%10;
    s=num%100/10;
    b=num%1000/100;
    q=num%10000/1000;
    w=num/10000;
    cout<<w<<"   ";
    cout<<q<<"   ";
    cout<<b<<"   ";
    cout<<s<<"   ";
    cout<<g;

    return 0;
}
