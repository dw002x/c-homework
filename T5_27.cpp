/*
 anthor:duan wei
 date:,Mar 26th, 2022
 function:ȥ��break��continue
*/
#include <iostream>

using namespace std;

int main()
{
    for (int num = 1;num <= 10;++num)
    {
        if (num != 5)
        {
            cout << num << " ";
        }
    }
    cout << endl << "Skipped printing 5 without continue" << endl;
    return 0;
}
