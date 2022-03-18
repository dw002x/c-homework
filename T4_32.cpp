/*
 anthor:duan wei
 date:,Mar 18th, 2022
 function:三角形的边
*/
#include<iostream>

using namespace std;

int main()
{
	double a, b, c;
	cout << "请输入任意三个非零值：";
	cin >> a >> b >> c;
	while(a<=0||b<=0||c<=0){
        cout << "请重新输入" << endl;
        cin >> a >> b >>c;
	}

	if (a+b>c&&a+c>b&&b+c>a)
	{
		cout << "这三个值可以表示一个三角形的三条边" << endl;
	}
	else
        cout << "这三个值不可以表示一个三角形的三条边" << endl;
	return 0;
}
