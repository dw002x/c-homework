/*
 anthor:duan wei
 date:,Apr.1st, 2022
 function:���Լ��
*/

 #include<iostream>

 using namespace std;

 int num(int x,int y)
 {
     if(y==0)
        return x;
     else
        return num(y,x%y);
 }
 int main()
 {
     int x,y;
     cin>>x>>y;
     cout<<num(x,y)<<endl;
     return 0;
 }
