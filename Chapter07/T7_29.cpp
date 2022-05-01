/*
 anthor:duan wei
 date:April 25.2022
 function:八皇后问题递归
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
	for(i=0;i<n;i++){//尝试每一列的位置
		for(j=0;j<k;j++){//检查第k个皇后与0~k-1个皇后位置是否有冲突
			if(queenPos[j]==i || abs(queenPos[j]-i)==abs(j-k)){
				break;
			}
		}
		if(j==k){//如果与前k-1个皇后没有冲突
			queenPos[k] = i;
			Nqueen(k+1);
		}
	}
}
