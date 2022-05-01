/*
 anthor:duan wei
 date:April 25.2022
 function:回文
*/

#include<iostream>

#include<string>

#include<algorithm>

using namespace std;

int main()
{
    string a;
    cin>>a;
    int l=0,r=a.length()-1;
    while(l<r)
    {
        if(a[l] != a[r])
            break;
        l++;
        r--;
    }
    if (l < r)
        cout << "false" << endl;
    else
        cout << "true" << endl;
    return 0;
}
