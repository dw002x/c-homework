/*
 anthor:duan wei
 date:,Apr.6st, 2022
 function:��ŵ������
*/
#include<iostream>
using namespace std;
void hannoi(int n,char A,char B,char C){//n�����ӣ���ʼλ�ã���תλ�ã���ֹλ��
	if(n==1){
		cout<<A<<"->"<<C<<endl; //�ڶ��� �����һ�����Ӵ�A�ƶ���C
	}
	else{
		hannoi(n-1,A,C,B);  //��һ�� ��n-1�����Ӵ�A�ƶ���B
		cout<<A<<"->"<<C<<endl;
		hannoi(n-1,B,A,C); //������ ��n-1�����Ӵ�B�ƶ���C
	}
}
int main()
{
    int n;
    cout<<"������Բ��n�ĸ�����";
    cin >> n;
    cout<<endl;
    hannoi(n,'1','2','3');
    return 0;
}
