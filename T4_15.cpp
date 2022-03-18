
/*
 anthor:duan wei
 date:,Mar 17th, 2022
 function:销售佣金计算器
*/
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a=0;
    while(a>-1)
    {
    cout << "Enter sales to dollars(-1 to quit):" ;
    cin>>a;
    if(a<=-1) break;
    cout << "Sales is:$"<< fixed <<setprecision(2) << 200+0.09*a <<endl;
    }
    return 0;
}
