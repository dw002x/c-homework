/*
anthor:duan wei
date:,Apr.6st, 2022
function:数的特定小数舍入
*/
#include<iostream>
#include<cmath>
using namespace std;

double roundToInteger(double x)
{
    double y1;
    y1 = floor(x + 0.5);
    return y1;
}
double roundToTenths(double x)
{
    double y2;
    y2 = floor(x * 10 + 0.5) / 10;
    return y2;
}
double roundToHundredths(double x)
{
    double y3;
    y3 = floor(x * 100 + 0.5) / 100;
    return y3;
}
double roundToThousandths(double x)
{
    double y4;
    y4 = floor(x * 1000 + 0.5) / 1000;
    return y4;
}
int main()
{
    int n;
    double x;
    cout << "Please enter how many numbers you want to read in:" << endl;;
    cin >> n;
    cout << "Please enter the numbers:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        cout << x << "\t" << roundToInteger(x) << "\t" << roundToTenths(x) << "\t" << roundToHundredths(x) << "\t" << roundToThousandths(x) << endl;
    }
    return 0;
}
