/*
 anthor:duan wei
 date:,Mar 17th, 2022
 function:信用额度问题
*/
#include <iostream>
#include<iomanip>
using namespace std;

int main14()
{
    double a=0,b,c,d,e;
    while(a>-1)
    {
    cout << "Enter account nuber(-1 to quit):" ;
    cin>>a;
    if(a<=-1) break;
    cout << "Enter beginning balance:";
    cin>>b;
    cout << "Enter total charges:";
    cin>>c;
    cout << "Enter total credits:";
    cin>>d;
    cout << "Enter credit limit:";
    cin>>e;
    if(b+c-d>e){
    cout << "New balance is:" << fixed <<setprecision(2) << b+c-d <<endl;
    cout << "Account:" <<a<< endl;
    cout << "Credit limit:" << e<<endl;
    cout << "Balance:" << fixed <<setprecision(2) << b+c-d <<endl;
    cout << "Credit Limit Exceeded"<<endl;}
    else
    cout << "New balance is:" << fixed <<setprecision(2) << b+c-d <<endl;

    }
    return 0;
}
