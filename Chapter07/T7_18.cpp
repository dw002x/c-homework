/*
 anthor:duan wei
 date:April 23.2022
 function:掷双骰子游戏的改进
*/


 #include<iostream>
 #include<cstdlib>
 #include<ctime>
 #include<string>

 using namespace std;

 unsigned int rollDice()
 {
    unsigned int die1=1+rand()%6;
    unsigned int die2=1+rand()%6;
    unsigned int sum=die1+die2;
    return sum;
 }
 int main()
 {
      enum Status {CONTINUE,WON,LOST};
      unsigned int myPoint=0;
    Status gameStatus=CONTINUE;
     srand(static_cast<unsigned int>(time(0)));
     int i=1;
     int arr[2]={0};
     cout<<"´ÎÊý"<<" "<<"Ó®"<<" "<<"Êä"<<endl;
     while(i<=1000)
     {
     unsigned int sumOfDice=rollDice();
     switch(sumOfDice)
     {
     case 7:
        case 11: gameStatus=WON; break;
        case 2:
        case 3:
            case 12: gameStatus=LOST; break;
            default:gameStatus=CONTINUE;
            myPoint=sumOfDice;
            cout<<"Point is "<<myPoint<<endl; break;
     }
     while(CONTINUE==gameStatus)
     {
         sumOfDice=rollDice();
         if(sumOfDice==myPoint)
            gameStatus=WON;
         else if(sumOfDice==7)
            gameStatus=LOST;
     }
     if(gameStatus==WON)
        arr[1]++;
     else
        arr[0]++;
     cout<<i<<" "<<arr[1]<<" "<<arr[0]<<endl;
     i++;
     }


     return 0;
 }
