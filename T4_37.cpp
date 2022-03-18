/*
 anthor:duan wei
 date:,Mar 18th, 2022
 function:世界人口增长
*/

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	float num1,num2;
	cout<<"设世界人口增长率为百分之1.7"<<endl;
	cout<<"今年世界人口为";
	cin>>num1;
    double a=log(2)/log(1.017);
    cout<<"第"<<a<<"年世界人口数是今年的两倍"<<endl;
    cout<<endl;
    cout<<"第i年"<<"\t该年末预期的世界人口"<< "\t该年可能的世界人口增长数"<<endl;
    cout<<endl;

	for(int i=1;i<76;i++)
	{
	    num2=0.17*num1;
	    num1=1.017*num1;

        cout<<"第"<<i<<"年"<<"\t"<<num1<<"              \t  "<<num2<<endl;
	}


    return 0;
}
