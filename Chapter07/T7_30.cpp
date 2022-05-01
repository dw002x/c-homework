/*
 anthor:duan wei
 date:April 26.2022
 function:´òÓ¡array¶ÔÏó
*/


#include<iostream>
#include<array>

using namespace std;

void printarray(array<int,9>&a)
{
   for(array<int,9>::iterator it=a.begin();it!=a.end();it++)
   {
       cout<<*it<<" ";
   }
   cout<<endl;
}
int main()
{
    array<int,9>a={0,1,2,3,4,5,6,7,8};
    printarray(a);
    return 0;
}
