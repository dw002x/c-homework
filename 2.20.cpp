/*
 anthor:duan wei
 date:,Mar 10th, 2022
 function:输入圆的半径，输出圆的直径，周长和面积，π的值取3.14159。
*/

#include <iostream>
using namespace std;
int main()
{
    float PI=3.1415,R=0,C=0,S=0;
    int r=0;
    cout<<"请输入圆的半径"<<endl;
    cin>>r;
    R=2*r;
    C=2*PI*r;
    S=PI*r*r;
    cout<<"圆的直径是"<<R<<" 圆的周长是"<<C<<" 圆的面积是"<<S<<endl;

return 0;
}
