/*
 anthor:duan wei
 date:,Mar 26th, 2022
 function:公平税
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a,b,c,d,e,f,g;

    cout<<"请输入你的住房，食物，衣服，交通，教育，医疗，旅游的费用。";
    cin>>a>>b>>c>>d>>e>>f>>g;
    cout<<"你所付税收的估计值为"<<setprecision(6)<<0.30*(a+b+c+d+e+f+g);

}
