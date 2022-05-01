/*
 anthor:duan wei
 date:April 23.2022
 function:将7.10节vector对象的例子转换成array对象
*/

 #include<iostream>

 using namespace std;

 int main()
 {
     int arr[7][6]={0};
      arr[0][1]=1;  arr[0][2]=2;   arr[0][3]=3;     arr[0][4]=4;
      arr[1][0]=1;  arr[2][0]=2;   arr[3][0]=3;     arr[4][0]=4;    arr[5][0]=5;
     int num;
     for(int i=1;i<=5;i++)
     {
         for(int j=1;j<=4;j++)
         {
             cin>>num;
             arr[i][j]=num;
         }
     }
     arr[1][5]=arr[1][1]+arr[1][2]+arr[1][3]+arr[1][4];
     arr[2][5]=arr[2][1]+arr[2][2]+arr[2][3]+arr[2][4];
     arr[3][5]=arr[3][1]+arr[3][2]+arr[3][3]+arr[3][4];
     arr[4][5]=arr[4][1]+arr[4][2]+arr[4][3]+arr[4][4];
     arr[5][5]=arr[5][1]+arr[5][2]+arr[5][3]+arr[5][4];
     arr[6][1]=arr[1][1]+arr[2][1]+arr[3][1]+arr[4][1]+arr[5][1];
      arr[6][2]=arr[1][2]+arr[2][2]+arr[3][2]+arr[4][2]+arr[5][2];
      arr[6][3]=arr[1][3]+arr[2][3]+arr[3][3]+arr[4][3]+arr[5][3];
      arr[6][4]=arr[1][4]+arr[2][4]+arr[3][4]+arr[4][4]+arr[5][4];
      for(int i=0;i<7;i++)
      {
          for(int j=0;j<6;j++)
          {
              cout<<arr[i][j]<<"\t";
          }
          cout<<endl;
      }
     return 0;
 }
