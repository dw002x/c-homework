/*
 anthor:duan wei
 date:,Mar 25th, 2022
 function:Ð½½ð¼ÆËã
*/
#include <iostream>

using namespace std;

int main()
{
    int code;
    int salary1,salary2,salary4;
    int hour1,profit,number;
    cout<<"Please input your code."<<endl;
    cin>>code;
    switch(code)
    {
        case 1:
            cout<<"Please enter your weekly salary."<<endl;
            cin>>salary1;
            cout<<"You salary this week is"<<" "<<salary1<<endl;
            break;
        case 2:
            cout<<"Please enter your hourly salary."<<endl;
            cin>>salary2;
            cout<<"Please enter your working hours this week."<<endl;
            cin>>hour1;
            if(hour1<=40)
                cout<<"You salary this week is"<<hour1*salary2<<endl;
            else
                cout<<"You salary this week is"<<" "<<(salary2*40)+(hour1-40)*1.5*salary2<<endl;
            break;
        case 3:
            cout<<"Please enter your sales profit for this week."<<endl;
            cin>>profit;
            cout<<"You salary this week is"<<" "<<(0.057*profit)+250<<endl;
            break;
        case 4:
            cout<<"Please enter the number of products you produced this week."<<endl;
            cin>>number;
            cout<<"Please enter the salary of each product you produce."<<endl;
            cin>>salary4;
            cout<<"You salary this week is"<<" "<<number*salary4<<endl;
            break;
    }
    return 0;
}

