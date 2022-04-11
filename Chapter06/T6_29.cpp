/*
 anthor:duan wei
 date:,Apr.1st, 2022
 function:ËØÊı
*/

 #include<iostream>

 using namespace std;

 int main()
 {
     for(int i=2;i<=10000;i++)
     {
         int flag=0;
         for(int j=2;j<=i;j++)
         {
             if(i%j==0&&i!=j)
                flag=1;
         }
         if(0==flag)
            cout<<i<<" ";
     }
     return 0;
 }
