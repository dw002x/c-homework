/*
 anthor:duan wei
 date:,Mar 10th, 2022
 function:输入三个整数，输出它们的和，平均值，乘积，最小值和最大值。
*/

#include <iostream>

using namespace std;

int main()
{
    int num1,num2,num3;
    cout<<"Input three different integers"<<endl;
    cin>>num1>>num2>>num3;

    cout<<"Sum is"<<" "<<num1+num2+num3<<endl;
    cout<<"Average is"<<" "<<(num1+num2+num3)/3<<endl;
    cout<<"Product is"<<" "<<num1*num2*num3<<endl;


    if (num1 < num2)
	{
		if (num1 < num3)
		{
			cout<<"Smallest is "<< num1 << endl;
		}
		else
		{
			cout<<"Smallest is "<< num3 << endl;
		}
	}
	else
	{
		if (num2 < num3)
		{
			cout<<"Smallest is "<< num2 << endl;
		}
		else
			cout<<"Smallest is "<< num3 << endl;
	}



    if (num1 > num2)
	{
		if (num1 > num3)
		{
			cout<<"Largest is "<< num1 << endl;
		}
		else
		{
			cout<<"Largest is "<< num3 << endl;
		}
	}
	else
	{
		if (num2 > num3)
		{
			cout<<"Largest is "<< num2 << endl;
		}
		else
			cout<<"Largest is "<< num3 << endl;
	}


    return 0;
}
