/*
 anthor:duan wei
 date:,Apr.1st, 2022
 function:成绩的绩点
*/

 #include<iostream>

 using namespace std;

 int qualityPoints(int num)
 {
    switch(num/10)
    {
    case 10:
    case 9:
        return 4;
        break;
    case 8:
        return 3;
        break;
    case 7:
        return 2;
        break;
    case 6:
        return 1;
        break;
    default:
        return 0;
    }
}
 int main()
 {
     int score;
     cin>>score;
     cout<<qualityPoints(score)<<endl;
     return 0;
 }
