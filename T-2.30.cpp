/*
 anthor:duan wei
 date:,Mar 10th, 2022
 function:��������ָ��������
*/
#include <iostream>

using namespace std;

int main()
{
    float a,b;
    cout<<"������������ߺ�����(��λ���׺�ǧ��)";
    cin>>a>>b;
    float BMI=b/(a*a);
    cout<<"����BMIָ����"<<BMI<<endl;
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
