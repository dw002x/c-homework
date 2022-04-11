/*
 anthor:duan wei
 date:,Apr.1st, 2022
 function:递归的求幂运算
*/
#include <iostream>
#include <cmath>

using namespace std;

double power(double, int);

int main()
{
	int exponet = 0;
	double base = 0;

	cout << "Input base(double) and exponent(positive integer): ";
	cin >> base >> exponet;

	cout << "The answer: " << power(base, exponet) << endl;

	system("pause");
}

double power(double base, int exponet)
{
	if (exponet == 1)
		return base;
	else
		return base * power(base, exponet - 1);
}
