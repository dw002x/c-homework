/*
 anthor:duan wei
 date:,Mar 26th, 2022
 function:全球变暖事实检测
*/
#include <iostream>

using namespace std;

int main()
{
    int answer;
    int score=0;

    cout<<"请回答下列关于全球变暖的简单问题";
    cout<<"1. 温室气体主要是指哪种气体？"<<endl;
    cout<<"1.CO2 2.SO2 3.H2O 4.NO2"<<endl;
    cin>>answer;
    switch(answer)
    {
        case 1:
            score++;
            break;
        case 2: ;
        case 3: ;
        case 4: ;
    }
    cout<<"2.大气中二氧化碳增多的原因是？"<<endl;
    cout<<"1.大量使用化石燃料 2.海平面上升 3.植树造林 4.人口增多"<<endl;
    cin>>answer;
    switch(answer)
    {
        case 1:
            score++;
            break;
        case 2: ;
        case 3: ;
        case 4: ;
    }
    cout<<"3.减少温室气体排放措施不正确的是？"<<endl;
    cout<<"1.全球大量削减工业生产 2.车辆限行 3.植树造林 4.调整能源消费结构"<<endl;
    cin>>answer;
    switch(answer)
    {
        case 1:
            score++;
            break;
        case 2: ;
        case 3: ;
        case 4: ;
    }
    cout<<"4.造成北极冰川大量融化的主要原因是？"<<endl;
    cout<<"1.全球变暖 2.排放SO2过多 3.臭氧被破坏 4.人口增多"<<endl;
    cin>>answer;
    switch(answer)
    {
        case 1:
            score++;
            break;
        case 2: ;
        case 3: ;
        case 4: ;
    }
    cout<<"5.全球变暖的后果有？"<<endl;
    cout<<"1.海平面上升 2.气候更适合人类居住 3.植物生长更快 4.人口增多"<<endl;
    cin>>answer;
    switch(answer)
    {
        case 1:
            score++;
            break;
        case 2: ;
        case 3: ;
        case 4: ;
    }
    switch(score)
    {
        case 5:
            cout<<"Excellent";
            break;
        case 4:
            cout<<"Very good";
            break;
        case 3: ;
        case 2: ;
        case 1: ;
            cout<<"Time to brush up on your knowledge of global warming";
            break;

    }



}
