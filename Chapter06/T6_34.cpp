/*
 anthor:duan wei
 date:,Apr.10st, 2022
 function:猜数字游戏
*/

 #include<iostream>
 #include<cstdlib>

 using namespace std;

 int main()
 {
     cout<<"I have a number between 1 and 1000."<<endl;
     cout<<"Can you guess my number?"<<endl;
     cout<<"Please type your fisrt guess."<<endl;
     srand((unsigned int)time(0));
     flag:
     int num;
     int choice;
     int a=rand()%1000+1;
      cout<<"Please input a number: ";
         cin>>num;
     for(int i=1;i<=1000;i++)
     {

         if(num==a)
         {
             cout<<"Excellent! You guessed the number!"<<endl;  break;
         }
         if(num<a)
         {
             cout<<"Too low.Try again."<<endl;
         }
         if(num>a)
         {
             cout<<"Too high.Try again."<<endl;
         }
          cout<<"Please input a number: ";
         cin>>num;
     }
     cout<<"Would you like to play again(y or n)?  y=1;n=0"<<endl;
     cin>>choice;
     if(choice==1)
     goto flag;
     else
     return 0;
 }
