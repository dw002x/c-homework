/*
 anthor:duan wei
 date:,Mar 26th, 2022
 function:ȫ���ů��ʵ���
*/
#include <iostream>

using namespace std;

int main()
{
    int answer;
    int score=0;

    cout<<"��ش����й���ȫ���ů�ļ�����";
    cout<<"1. ����������Ҫ��ָ�������壿"<<endl;
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
    cout<<"2.�����ж�����̼�����ԭ���ǣ�"<<endl;
    cout<<"1.����ʹ�û�ʯȼ�� 2.��ƽ������ 3.ֲ������ 4.�˿�����"<<endl;
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
    cout<<"3.�������������ŷŴ�ʩ����ȷ���ǣ�"<<endl;
    cout<<"1.ȫ�����������ҵ���� 2.�������� 3.ֲ������ 4.������Դ���ѽṹ"<<endl;
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
    cout<<"4.��ɱ������������ڻ�����Ҫԭ���ǣ�"<<endl;
    cout<<"1.ȫ���ů 2.�ŷ�SO2���� 3.�������ƻ� 4.�˿�����"<<endl;
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
    cout<<"5.ȫ���ů�ĺ���У�"<<endl;
    cout<<"1.��ƽ������ 2.������ʺ������ס 3.ֲ���������� 4.�˿�����"<<endl;
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
