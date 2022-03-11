/*
 anthor:duan wei
 date:,Mar 10th, 2022
 function:输入一个整数，确定并输出他是奇数还是偶数
*/
#include <iostream>

using namespace std;

int main()
{
	int a[5];
	int min,max;
	for(int i=0;i<5;i++)
		cin >> a[i];
	max=a[0];min=a[0];
	for(int i=0;i<5;i++){
		if(max<a[i])
			max=a[i];
		if(min>a[i])
			min=a[i];
	}
	cout << min << " " << max <<endl;
	return 0;
}
