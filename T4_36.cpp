/*
 anthor:duan wei
 date:,Mar 18th, 2022
 function:ʹ�ü���ϵͳ��ǿ��˽
*/

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	int num1,num2;
	cout<<"��������λ����";
	cin>>num1;
	int g,s,b,q;
	q=(7+(num1/1000))%10;
	b=(7+(num1%1000/100))%10;
	s=(7+(num1%100/10))%10;
	g=(7+(num1%10))%10;
	num2=s*1000+g*100+q*10+b;
	cout<<"���ܺ��������"<<setw(4)<<setfill('0')<<num2<<endl;
	int G,S,B,Q,num3;
	Q=(3+(num2/1000))%10;
	B=(3+(num2%1000/100))%10;
	S=(3+(num2%100/10))%10;
	G=(3+(num2%10))%10;
	num3=S*1000+G*100+Q*10+B;
	cout<<"���ܺ��������"<<setw(4)<<setfill('0')<<num3<<endl;


    return 0;
}
