/*
auther:duan wei
date: April 9,2022
function:摄氏温度和华氏温度
*/
#include<iostream>
#include<iomanip>
using namespace std;

double celsius(double h1)
{
    double s1;
    s1 = (h1 - 32) / 1.8;
    cout << fixed << setprecision(2);
    return s1;
}
double fahrenheit(double s2)
{
    double h2;
    h2 = 1.8 * s2 + 32;
    cout << fixed << setprecision(2);
    return h2;
}
int main()
{
    int h1;
    for (h1 = 32; h1 <= 212; h1++)
    {
        cout << h1 << "  " << celsius(h1)<<"    ";
        if (h1 % 2 != 0)
        {
            cout << endl;
        }
    }
    cout <<endl;
    int s2;
    for (s2 = 0; s2 <= 100; s2++)
    {
        cout << s2 << "  " << fahrenheit(s2) << "    ";
        if (s2 % 2 != 0)
        {
            cout << endl;
        }
    }
    return 0;
}
