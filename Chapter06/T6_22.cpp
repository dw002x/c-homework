/*
auther: Jixiaona
date: April 9,2022
function:�Ǻ���ɵ�������ͼ��
*/
#include<iostream>

using namespace std;

void figure(int side)
{
    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int side;
    cin >> side;
    figure(side);
    return 0;
}
