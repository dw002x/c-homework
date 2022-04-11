/*
 anthor:duan wei
 date:,Apr.6st, 2022
 function:数的整数舍入
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, y;
    double x;
    cout << "Please enter how many numbers you want to read in:" << endl;;
    cin >> n;
    cout << "Please enter the numbers:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        y = floor(x + 0.5);
        cout << x << "\t" << y << endl;
    }
    return 0;
}
