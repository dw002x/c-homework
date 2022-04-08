/*
 anthor:duan wei
 date:,Mar 26th, 2022
 function:È¥³ýbreakºÍcontinue
*/
#include <iostream>

using namespace std;

int main()
{
    int num=1;
    bool a=false;
    while (!a)
    {
        cout << num << " ";
        num++;
        a = (num == 5);
    }
    cout << endl << "break when number = " << num << endl;
    return 0;
}
