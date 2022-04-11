/*
 anthor:duan wei
 date:,Apr.8st, 2022
 function:Ô²Ãæ»ý¼ÆËã
*/
#include <iostream>

using namespace std;

inline double CircleArea(double r)
{
	return 3.14159*r*r;
}

int main()
{
	double r,a;
	cout<<"Enter the radius of the circie"<<endl;
    cin>>r;
    a=CircleArea(r);
    cout<<a<<endl;

	return 0;
}
