/*
 anthor:duan wei
 date:,Mar 17th, 2022
 function:ÆûÓÍÁ¨Êı
*/
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    double mile=0,gallen,MPG;
    while(mile>-1)
    {
    cout << "Enter miles driven(-1 to quit):" ;
    cin>>mile;
    if(mile<=-1) break;
    cout << "Enter gallens used:";
    cin>>gallen;
    MPG=mile/gallen;
    cout << "MPG this trip:" << fixed <<setprecision(6) << MPG <<endl;
    cout << "Total MPG:" << fixed <<setprecision(6) << MPG << endl;
    }
    return 0;
}
