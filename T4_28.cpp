/*
 anthor:duan wei
 date:,Mar 18th, 2022
 function:–«∫≈∆Â≈Ã ΩÕº∞∏
*/
#include<iostream>

using namespace std;

int main()
{
	int c = 4;
	while (c != 0)
	{
		for (int i = 0; i < 8; i++)
		{
			cout << "*";
			cout << " ";
		}
		cout << endl;
		for (int j = 0; j < 8; j++)
		{
			cout << " ";
			cout << "*";
		}
		cout << endl;
		c--;
	}
	return 0;
}
