/*
auther:duan wei
date: April 9,2022
function:找最小数
*/
#include<iostream>

using namespace std;

double getMinimum(double n1, double n2, double n3)
{
    double min;
    if (n1 >= n2 && n2 >= n3)
        min = n3;
    else if (n1 >= n2 && n3 >= n2)
        min = n2;
    else min = n1;
    return min;

}
int main()
{
    double n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    cout << "The minimum value is " << getMinimum(n1, n2, n3) << endl;
    return 0;
}
