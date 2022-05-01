/*
 anthor:duan wei
 date:April 25.2022
 function:�˻ʺ�����ݹ�
*/
#include<iostream>
#include<cmath>
using namespace std;
int n;
int queenPos[100];
void Nqueen(int k);
int main(){
	cin>>n;
	Nqueen(0);
	return 0;
}
void Nqueen(int k){
	int i,j;
	if(k==n){
		for(i=0;i<n;i++){
			cout<<queenPos[i]<<" ";
		}
		cout<<endl;
		return;
	}
	for(i=0;i<n;i++){//����ÿһ�е�λ��
		for(j=0;j<k;j++){//����k���ʺ���0~k-1���ʺ�λ���Ƿ��г�ͻ
			if(queenPos[j]==i || abs(queenPos[j]-i)==abs(j-k)){
				break;
			}
		}
		if(j==k){//�����ǰk-1���ʺ�û�г�ͻ
			queenPos[k] = i;
			Nqueen(k+1);
		}
	}
}
