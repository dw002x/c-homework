/*
 anthor:duan wei
 date:,Mar 10th, 2022
 function:身体质量指数计算器
*/
#include <iostream>

using namespace std;

int main()
{
    float a,b;
    cout<<"请输入您的身高和体重(单位是米和千克)";
    cin>>a>>b;
    float BMI=b/(a*a);
    cout<<"您的BMI指数是"<<BMI<<endl;
    if(BMI>=30)
        cout << "Obese" << endl;
    else if(BMI>=25)
        cout << "Overweight" << endl;
    else if(BMI>=18.5)
        cout << "Normal" << endl;
    else
        cout << "Underweight" << endl;
    return 0;
}
