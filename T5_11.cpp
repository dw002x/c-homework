/*
 anthor:duan wei
 date:,Mar 25th, 2022
 function:¸´Àû
*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	double amount;
	double principal=1000.0;
	double rate;

	while (1)
	{
		cout << "please enter the rate:";
		cin >> rate;
		cout << "Year" << setw(21) << "Amount on deposit" << endl;
		cout << fixed << setprecision(2);
		for (unsigned int year = 1; year <= 10; ++year)
		{
			amount = principal * pow(1.0 + rate, year);
			cout << year <<"\t"<< amount << endl;
		}
	}
	return 0;
}
