/*
 anthor:duan wei
 date:,Mar 18th, 2022
 function:直角三角形的边
*/
#include<iostream>

using namespace std;

int main()
{
	int a, b, c;
	cout << "请输入任意三个非0整数：";
	cin >> a >> b >> c;
	while( a <= 0 || b <= 0 || c <= 0){
        cout << "请重新输入" << endl;
        cin >> a >> b >>c;
	}
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
		{
			cout << "这三个值可以表示一个直角三角形的三条边";
		}
		else
            cout<< "这三个值可以不表示一个直角三角形的三条边";
	}
	else
        cout << "这三个值可以不表示一个直角三角形的三条边";
	return 0;
}
