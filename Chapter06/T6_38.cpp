/*
 anthor:duan wei
 date:,Apr.6st, 2022
 function:汉诺塔问题
*/
#include<iostream>
using namespace std;
void hannoi(int n,char A,char B,char C){//n个盘子，起始位置，中转位置，终止位置
	if(n==1){
		cout<<A<<"->"<<C<<endl; //第二步 将最后一个盘子从A移动到C
	}
	else{
		hannoi(n-1,A,C,B);  //第一步 将n-1个盘子从A移动到B
		cout<<A<<"->"<<C<<endl;
		hannoi(n-1,B,A,C); //第三步 将n-1个盘子从B移动到C
	}
}
int main()
{
    int n;
    cout<<"请输入圆盘n的个数：";
    cin >> n;
    cout<<endl;
    hannoi(n,'1','2','3');
    return 0;
}
