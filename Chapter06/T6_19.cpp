/*
anthor:duan wei
date:,Apr.6st, 2022
function:直角三角形斜边的计算
*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double hypotenuse(double a, double b)
{
    double c;
    c = sqrt(a * a + b * b);
    return c;
}

int main()
{
    double a=1.0, b=1.0;
    while (a != 0 && b != 0)
    {
        cout << "Please enter the length of the two right angles of the triangle:" << endl;
        cin >> a >> b;
        cout << fixed << setprecision(1);
        cout << hypotenuse(a, b) << endl;
    }
    return 0;
}
