/*
 anthor:duan wei
 date:,Apr.1st, 2022
 function:抛硬币
*/

 #include<iostream>
 #include<cstdlib>

 using namespace std;

 int flip(int x)
 {
     int num=1+rand()%2;
     return num;
 }
 int main()
 {
     int a=0,b=0;
     for(int i=1;i<=100;i++)
     {
         if(1==flip(i))
            cout<<0<<" ";
            else
            cout<<1<<" ";
     }


     return 0;
 }
