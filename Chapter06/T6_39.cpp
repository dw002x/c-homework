/*
 anthor:duan wei
 date:,Apr.1st, 2022
 function:��ŵ������ĵ����汾
*/
#include<iostream>
using namespace std;
void hannoi(int n,char A,char B,char C)

int main()
{
    int n;
    cout<<"������Բ��n�ĸ�����";
    cin >> n;
    cout<<endl;
    hannoi(n,'1','2','3');
    return 0;
}

void hannoi(int n,char A,char B,char C)
{
	if(n==1){
		cout<<A<<"->"<<C<<endl;
	}
	else{
		hannoi(n-1,A,C,B);
		cout<<A<<"->"<<C<<endl;
		hannoi(n-1,B,A,C);
	}
}
