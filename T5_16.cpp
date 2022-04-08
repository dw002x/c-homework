/*
 anthor:duan wei
 date:,Mar 25th, 2022
 function:修改gradebook
*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	int amount;
	double principal = 1000.0;
	double rate = 0.05;

	cout << "Year" << setw(21) << "Amount on deposit" << endl;
	cout << fixed << setprecision(2);

	for (unsigned int year=1; year <= 10; ++year)
	{
		amount = principal * pow(1.0 + rate, year)*100;
		int a = amount / 100;
		int b = amount % 100;
		cout << setw(4) << year << setw(18) << a << "." << b << endl;
	}

	return 0;
}
