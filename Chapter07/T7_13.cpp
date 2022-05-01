/*
 anthor:duan wei
 date:April 23.2022
 function:利用array对象去重
*/


 #include<iostream>
 #include<algorithm>

 using namespace std;

 int main()
 {
     int num;
     int arr[20];
     for(int i=0;i<20;i++)
     {
         cin>>num;
         while(num<10||num>100)
         {
            cin>>num;
         }
         arr[i]=num;
     }
     sort(arr,arr+20);
     cout<<arr[0]<<" ";
     for(int j=1;j<20;j++)
     {
         if(arr[j]!=arr[j-1])
            cout<<arr[j]<<" ";
     }
     return 0;
 }
