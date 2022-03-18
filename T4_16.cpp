/*
 anthor:duan wei
 date:,Mar 17th, 2022
 function:Ð½½ð¼ÆËãÆ÷
*/
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    double a=0,b;
    while(a>-1)
    {
    cout << "Enter hours worked(-1 to quit):" ;
    cin>>a;
    if(a<=-1) break;
    cout << "Enter hourly rate of the employee:";
    cin>>b;
    if(a<=40)
    cout << "Sales is:$"<< fixed <<setprecision(2) << a*b <<endl;
    else
    cout << "Sales is:$"<< fixed <<setprecision(2) << a*b+0.5*b <<endl;

    }
    return 0;
}

