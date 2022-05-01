/*
 anthor:duan wei
 date:April 26.2022
 function:ÄæÐò´òÓ¡×Ö·û´®
*/


 #include<iostream>
 #include<string>

 using namespace std;

 void stringReverse(string a)
 {
     int n=a.length();
     char temp;
     for(int i=0;i<n/2;i++)
     {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
     }
     for(int i=0;i<n;i++)
     {
         cout<<a[i];
     }
     cout<<endl;
 }
 int main()
 {
     string a;
     cin>>a;
     stringReverse(a);

     return 0;
 }
