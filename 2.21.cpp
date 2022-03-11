/*
 anthor:duan wei
 date:,Mar 10th, 2022
 function:输出矩形，椭圆，箭头，菱形。
*/
#include <iostream>

using namespace std;

int main1()
{
    //输出一个9行的空心矩形
    cout<<"*********"<<endl;
    for(int i=0;i<7;i++){
        cout<<"*       *"<<endl;
    }
    cout<<"*********"<<endl;

    //输出一个九行的椭圆
    cout<<"   ***"<<endl;
    cout<<" *     *"<<endl;
    for(int i=0;i<5;i++){
        cout<<"*       *"<<endl;
    }
    cout<<" *     *"<<endl;
    cout<<"   ***"<<endl;

    //输出一个九行的箭头
    cout<<"   *"<<endl;
    cout<<"  ***"<<endl;
    cout<<" ***** "<<endl;
    for(int i=0;i<6;i++){
        cout<<"   *"<<endl;
    }

    //输出一个空心菱形
    cout<<"    *"<<endl;
    cout<<"   * *"<<endl;
    cout<<"  *   *"<<endl;
    cout<<" *     *"<<endl;
    cout<<"*       *"<<endl;
    cout<<" *     *"<<endl;
    cout<<"  *   *"<<endl;
    cout<<"   * *"<<endl;
    cout<<"    *"<<endl;



    return 0;
}
