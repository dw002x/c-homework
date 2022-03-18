/*
 anthor:duan wei
 date:,Mar 18th, 2022
 function:打印二进制数的十进制值
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int i = 0, a = 0;
    string n;
    cin >> n;
    while (n.size() != i)
    {
        a *= 2;
        a += n[i] - '0';
        i++;
    }
	cout << "该二进制数的十进制值为:" << a << endl;
	return 0;
}
