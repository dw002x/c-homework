/*
 anthor:duan wei
 date:,Mar 25th, 2022
 function:½×³Ë
*/
#include<iostream>

using namespace std;

int main()
{
	int m = 1;
	cout << "1  " << "2  " << "3  " << "4  " << "5  " << endl;
	for (int i = 1; i <= 5; i++)
	{
		m = m * i;
		cout << m << "  ";
	}
	cout<<endl;
	for (int i = 1; i <= 20; i++)
	{
		m = m * i;
	}
	cout<<"20µÄ½×³ËÊÇ"<<m;
	return 0;
}
