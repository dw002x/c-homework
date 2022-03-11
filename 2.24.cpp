/*
 anthor:duan wei
 date:,Mar 10th, 2022
 function:输入一个整数，确定并输出他是奇数还是偶数
*/
#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num >> endl;
	if(num%2==0)
        cout<<"该数是偶数";
    else
        cout<<"该数是奇数";
	return 0;
}

