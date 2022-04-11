/*
auther:duan wei
date: April 9,2022
function:秒数计算
*/
#include<iostream>

using namespace std;

int secondscalculation(int hour,int minute,int second)
{
    int result;
    result = second + minute * 60 + hour * 3600;
    return result;
}

int main()
{
    int hour, minute, second;
    cin >> hour >> minute >> second;
    cout << secondscalculation(hour, minute, second) << endl;
    return 0;
}
