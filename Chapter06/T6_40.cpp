/*
 anthor:duan wei
 date:,Apr.6st, 2022
 function:递归的可视化
*/
#include<iostream>

using namespace std;

unsigned long fibonacci( unsigned long);

int main()
{
    for(unsigned int counter=0;counter<=10;counter++)
        cout<<"fibonacci("<<counter<<")="<<fibonacci(counter)<<endl;

}

unsigned long fibonacci( unsigned long number)
{
    if((0==number)||(1==number))
        return number;

    else
        return fibonacci(number-1)+fibonacci(number-2);

}
