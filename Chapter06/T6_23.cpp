/*
auther:duan wei
date: April 9,2022
function:任意符号组成的正方形图案
*/
#include<iostream>
#include<string>
using namespace std;

void fillCharacter(int side,string a)
{
    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++)
        {
            cout << a;
        }
        cout << endl;
    }
}
int main()
{
    int side;
    cin >> side;
    string a;
    cin >> a;
    fillCharacter(side, a);
    return 0;
}
