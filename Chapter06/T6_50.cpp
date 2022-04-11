/*
 anthor:duan wei
 date:,Apr.8st, 2022
 function:按值传递与按引用传递
*/
#include <iostream>

using namespace std;

int tripleByValue(int count);
void tripleByReference(int &);

int main()
{
	int count;
	cin>>count;
	cout<<"tripleByValue:"<<tripleByValue(count)<<endl;
	cout<<"tripleByReference:"<<tripleByReference(count)<<endl;
	return 0;
}

int tripleByValue(int count)
{
    return count*count*count;
}
int tripleByReference(int &count)
{
    count=count*count*count;
}


