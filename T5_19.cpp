/*
 anthor:duan wei
 date:,Mar 25th, 2022
 function:�ϴ��˹������Ԫ��
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a=0;
    double pi=4;
    double num=3;
    cout << "��i��" <<"  "<< "�е�ֵ" << endl;
    for (int i = 1;i <= 1000;i++)
    {
        if(a==0)
            pi-=4/num;
        else
            pi+=4/num;
        a=(1-a);
        num += 2;
        cout << i <<"\t"<< fixed << setprecision(6) << pi << endl;
    }
    return 0;
}
