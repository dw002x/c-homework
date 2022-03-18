/*
 anthor:duan wei
 date:,Mar 18th, 2022
 function:回文
*/
#include<iostream>

using namespace std;

int main()
{
	char a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	if (a == e && b == d)
		cout << "该数是回文数" << endl;
	else
        cout << "该数不是回文数" << endl;
	return 0;
}
