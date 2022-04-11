/*
 anthor:duan wei
 date:,Apr.1st, 2022
 function:C++ 11 的随机数：掷双骰子游戏的改进
*/
#include <iostream>
#include <random>
#include <ctime>
using namespace std;

unsigned int rollDice();

int main()
{

	enum Status { CONTINUE, WON, LOST };

	unsigned int myPoint = 0;
	Status gameStatus = CONTINUE;
	unsigned int sumOfDice = rollDice();

	switch (sumOfDice)
	{
	case 7:
	case 11:
		gameStatus = WON;
		break;
	case 2:
	case 3:
	case 12:
		gameStatus = LOST;
		break;
	default:
		gameStatus = CONTINUE;
		myPoint = sumOfDice;
		cout << "Point is " << myPoint << endl;
		break;
	}

	while (CONTINUE == gameStatus)
	{
		sumOfDice = rollDice();

		if (sumOfDice == myPoint)
			gameStatus = WON;
		else
			if (sumOfDice == 7)
				gameStatus = LOST;
	}

	if (WON == gameStatus)
		cout << "Player wins" << endl;
	else
		cout << "Player loses" << endl;


	system("pause");
}

unsigned int rollDice()
{
	default_random_engine engine(static_cast<unsigned int>(time(0)));
	uniform_int_distribution <unsigned int> randomInt(1, 6);

	unsigned int die1 = randomInt(engine);
	unsigned int die2 = randomInt(engine);

	unsigned int sum = die1 + die2;

	cout << "Player rolled " << die1 << " + " << die2
		<< " = " << sum << endl;
	return sum;
}
