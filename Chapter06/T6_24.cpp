/*
auther:duan wei
date: April 9,2022
function:Êý×Ö·ÖÀë
*/
#include<iostream>

using namespace std;

void numberSequence(int n)
{
    int g = 0;
    int m = n;
    while (m != 0)
    {
        m = m / 10;
        g++;
    }
    switch (g)
    {
    case 1:cout << n << endl; break;
    case 2:cout << n / 10<< " " << n % 10 << endl; break;
    case 3:cout << n / 100 << " " << n % 100 / 10 << " " << n % 10 << endl; break;
    case 4:cout << n / 1000 << " " << n % 1000 / 100 << " " << n % 100 / 10 << " " << n % 10 << endl; break;
    case 5:cout<< n / 10000 << " " << n % 10000 / 1000 << " " << n % 1000 / 100 << n%100/10 << " " << n % 10 << endl; break;
    }
}

int main()
{
    //a.b
    int a, b, ans1, ans2;
    cin >> a >> b;
    ans1 = a / b;
    ans2 = a % b;
    cout << ans1 << " " << ans2 << endl;
    //c
    int n;
    cout << "Please enter an integer between 1 to 32767:";
    cin >> n;
    numberSequence(n);

    return 0;
}
