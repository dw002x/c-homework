/*
 anthor:duan wei
 date:,Mar 17th, 2022
 function:找最大数
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
	cout << "最大数为：" << largest << endl;

     return 0;
 }
