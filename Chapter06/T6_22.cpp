/*
auther: Jixiaona
date: April 9,2022
function:星号组成的正方形图案
*/
#include<iostream>

using namespace std;

void figure(int side)
{
    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int side;
    cin >> side;
    figure(side);
    return 0;
}
