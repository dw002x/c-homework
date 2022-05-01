/*
 anthor:duan wei
 date:April 23.2022
 function:ÖÀË«÷»
*/

 #include<iostream>
 #include<random>
 #include<ctime>

 using namespace std;

 int main()
 {
     int num=36000;
     int sum;
     int arr[13]={0};
     default_random_engine engine(static_cast <unsigned int> (time(0)));
     uniform_int_distribution<unsigned int> randomInt(1,6);
    while(num>0)
    {
        unsigned int a1=randomInt(engine);
        unsigned int a2=randomInt(engine);
        sum=a1+a2;
        switch(sum)
        {
        case 12:
            arr[12]++;
            break;
        case 11:
            arr[11]++;
            break;
        case 10:
            arr[10]++;
            break;
        case 9:
            arr[9]++;
            break;
        case 8:
            arr[8]++;
            break;
        case 7:
            arr[7]++;
            break;
        case 6:
            arr[6]++;
            break;
        case 5:
            arr[5]++;
            break;
        case 4:
            arr[4]++;
            break;
        case 3:
            arr[3]++;
            break;
        case 2:
            arr[2]++;
            break;
        }
        num--;
    }
    for(int i=2;i<=12;i++)
    {
        cout<<i<<" "<<arr[i]<<endl;
    }
     return 0;
 }
