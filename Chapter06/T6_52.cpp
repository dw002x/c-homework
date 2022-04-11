/*
 anthor:duan wei
 date:,Apr.1st, 2022
 function:函数模板minimum
*/
#include <iostream>
#include "minimum.h"

using namespace std;

int main2()
{
	int int1, int2;
	cout << "Input two integer values: " << endl;
	cin >> int1 >> int2 ;
	cout << "The two integer values are: " << int1 << ' '<< int2 << endl;
	cout << "The minimum integer value is: " << minimum(int1, int2) <<endl;

	double d1, d2;
	cout << "\nInput two double values: " << endl;
	cin >> d1 >> d2 ;
	cout << "The two double values are: " << d1 << ' ' << d2 << endl;
	cout << "The minimum double value is: " << minimum(d1, d2) << endl;

	char c1, c2;
	cout << "\nInput two characters: " << endl;
	cin >> c1 >> c2;
	cout << "The two characters are: " << c1 << ' ' << c2 << endl;
	cout << "The minimum character value is: " << minimum(c1, c2) << endl;

	system("pause");
}
