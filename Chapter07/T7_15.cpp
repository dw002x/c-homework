/*
 anthor:duan wei
 date:April 23.2022
 function:二维array对象初始化
*/

 #include<iostream>

 using namespace std;

 int main()
 {
     int sales[3][5];
     for(int i=0;i<3;i++)
     {
         for(int j=0;j<5;j++)
          sales[i][j]=0;
     }
     cout<<sales[2][4]<<endl;
     return 0;
 }
