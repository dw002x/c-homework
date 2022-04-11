/*
 anthor:duan wei
 date:,Apr.1st, 2022
 function:斐波那契数列的迭代版本
*/
#include <iostream>

using namespace std;

int FibonacciD(int num);

int main()
{

	int i;
	cout << "Input the number: " << endl;
	cin >> i;

	cout << "\nFibonacci(" << i << ") = \n" << FibonacciD(i) << endl;

	system("pause");
}

int FibonacciD(int num)
{
	if (num <= 0) {
		return 0;
	}
	if (num == 1 || num == 2)
	{
		return 1;
	}
	int first = 1, second = 1, third = 0;
	for (int i = 3; i <= num; i++)
	{
		third = first + second;
		first = second;
		second = third;
	}
	return third;
}

