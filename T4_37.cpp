/*
 anthor:duan wei
 date:,Mar 18th, 2022
 function:�����˿�����
*/

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	float num1,num2;
	cout<<"�������˿�������Ϊ�ٷ�֮1.7"<<endl;
	cout<<"���������˿�Ϊ";
	cin>>num1;
    double a=log(2)/log(1.017);
    cout<<"��"<<a<<"�������˿����ǽ��������"<<endl;
    cout<<endl;
    cout<<"��i��"<<"\t����ĩԤ�ڵ������˿�"<< "\t������ܵ������˿�������"<<endl;
    cout<<endl;

	for(int i=1;i<76;i++)
	{
	    num2=0.17*num1;
	    num1=1.017*num1;

        cout<<"��"<<i<<"��"<<"\t"<<num1<<"              \t  "<<num2<<endl;
	}


    return 0;
}
