/*
 anthor:duan wei
 date:,Mar 10th, 2022
 function:������������������ϴ�ֵ��
*/

#include <iostream>

using namespace std;

int main()
{
    int num1,num2;
    cout<<"��������������"<<endl;
    cin>>num1>>num2;
    if(num1==num2)
        cout<<"These numbers are equal."<<endl;
    else
        {
            if (num1 > num2)
            cout<<num1 <<" is large."<< endl;
            else
            cout<<num2 <<" is large."<< endl;
        }

    return 0;
}
