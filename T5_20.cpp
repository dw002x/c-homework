/*
 anthor:duan wei
 date:,Mar 25th, 2022
 function:毕达哥斯拉的三元组
*/
#include <iostream>

using namespace std;

int main()
{

    for(int hypotenuse = 2; hypotenuse <= 500; hypotenuse++)
    {
        for(int side1 = 1; side1 < hypotenuse; side1++)
        {
            for(int side2 = side1; side2 < hypotenuse; side2++)
            {
                if(side1 * side1 + side2 * side2 == hypotenuse * hypotenuse)
                    cout<<side1<<" "<<side2<<" "<<hypotenuse<<endl;
            }
        }
    }
    return 0;
}
