/*
 anthor:duan wei
 date:April 26.2022
 function:寻找array对象中的最小值
*/


 #include<iostream>
 #include<array>

 using namespace std;

int  recursiveMinimum(array<int,10>a)
{
    int min=a[0];
    for(int i=1;i<10;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    return min;
}
 int main()
 {
     array<int,10>a={0,1,2,3,4,5,6,7,8,9};
     cout<<recursiveMinimum(a)<<endl;
     return 0;
 }
