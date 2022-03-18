
/*
 anthor:duan wei
 date:,Mar 10th, 2022
 function:共乘汽车节省计算器
*/
#include <iostream>

using namespace std;

int main()
{
    float a,b,c,d,e;
    cout << "每天开的总英里数" << endl;
    cin>>a;
    cout << "每加仑汽油的价格" << endl;
    cin>>b;
    cout << "每加仑汽油可以开的平均英里数" << endl;
    cin>>c;
    cout << "每日的停车费" << endl;
    cin>>d;
    cout << "每日的通行费" << endl;
    cin>>e;
    cout<<"您每日开车的费用是"<<(a/c*b)+d+e<<endl;
    return 0;
}
