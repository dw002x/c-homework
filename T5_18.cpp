/*
 anthor:duan wei
 date:,Mar 25th, 2022
 function:进制表
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << "Binary"<< setw(9)<< "Octal"<< setw(12)<< "Hexadecimal"<<endl;
    for (int i = 1;i <= 256;i++)
    {
        cout << setw(3) << dec << i << setw(9) << oct << i << setw(9) << hex << i << endl;
    }
    return 0;
}
