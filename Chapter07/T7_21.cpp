/*
 anthor:duan wei
 date:April 25.2022
 function:ÏúÊÛ»ã×Ü
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int sales[5][6]={
        {1,1,1,1,1,0},
        {1,1,1,1,1,0},
        {1,1,1,1,1,0},
        {1,1,1,1,1,0},
        {0,0,0,0,0,0}
    };
    int i,j;
    for(i=0; i<4; i++)
    {
        sales[4][0]+=sales[i][0];
        sales[4][1]+=sales[i][1];
        sales[4][2]+=sales[i][2];
        sales[4][3]+=sales[i][3];
        sales[4][4]+=sales[i][4];
    }
    for(j=0; j<5; j++)
    {
        sales[0][5]+=sales[0][j];
        sales[1][5]+=sales[1][j];
        sales[2][5]+=sales[2][j];
        sales[3][5]+=sales[3][j];
        sales[4][5]+=sales[4][j];
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<6; j++)
            cout<<sales[i][j]<<" ";
        cout<<endl;
    }
}

