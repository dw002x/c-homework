/*
 anthor:duan wei
 date:,Mar 17th, 2022
 function:�������
*/
#include<iostream>
 using namespace std;
 int main()
 {

     int counter = 0, number, largest=0;

	while (counter < 10)
	{
		cin >>number;
		if (number>largest){
			largest = number;
			}
			counter++;
	}
	cout << "�����Ϊ��" << largest << endl;

     return 0;
 }
