/*
 anthor:duan wei
 date:,Mar 10th, 2022
 function:编写一个程序，输出键盘上键入的字符所对应的整数。
*/
#include <iostream>

using namespace std;

int main()
{
    char c;
   cout<<"请输入一个字符"<<endl;
   cin>>c;

   cout<<"对应的整数是"<<static_cast<int>(c);
    return 0;
}
