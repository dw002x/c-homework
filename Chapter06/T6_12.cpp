/*
 anthor:duan wei
 date:,Apr.6st, 2022
 function:Í£³µ·Ñ
*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void calculateCharges(double arr1[3],double ch[3],double n)
{
    for (int i = 0; i <= 2; i++)
    {
        if (arr1[i] <= 3)
        {
            ch[i] = 2.00;
        }
        else if (arr1[i] >= 19.00)
        {
            ch[i] = 10.00;
        }
        else
        {
            n = ceil(arr1[i]);
            ch[i] = 2.00 + (n - 3) * 0.50;
        }
        cout << i + 1 << "\t";
        cout << fixed << setprecision(1) << arr1[i] << "\t";
        cout << fixed << setprecision(2) << ch[i] << endl;
    }
}
int main()
{
    double arr1[3] , ch[3], n=0.00;
    cout << "Please enter the parking time for the three customers:";
    cin >> arr1[0] >> arr1[1] >> arr1[2];
    cout << "Car\t" << "Hours\t" << "Charge" << endl;
    calculateCharges(arr1, ch, n);

    cout << "TOTAL\t" << fixed << setprecision(1) << arr1[0] + arr1[1] + arr1[2] << "\t";
    cout << fixed << setprecision(2) << ch[0] + ch[1] + ch[2] << endl;

    return 0;
}
