#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//13.Створити гру, де гравець з комп’ютером по черзі кидають гральний кубик. Обидва кидають 3 рази. 
	//В кого в кінці більше очок, той і виграв. Тобто значення кубику – це рандом від 1 до 6. В switch 
	//аналізуйте це значення і малюйте сторону кубика. Тобто на екрані показує «Хід 1», «Кубик противника»,
	// «Ваш кубик», показується малюнки і так 3 рази, після яких виводиться рахунок. Врахуйте ніччю.

	srand(time(nullptr));

	int userNumber, compNumber, number, usersSum = 0, compSum = 0;

	cout << "\tA game where a gaming cube is thrown\n";

	for (int i = 0; i < 6; i++)
	{
		cout << " Move " << i + 1 << " : \n";
		userNumber = rand() % (7 - 1) + 1;
		compNumber = rand() % (7 - 1) + 1;

		usersSum += userNumber;
		compSum += compNumber;

		number = userNumber;
		cout << "Your cube : \n";

		for (int j = 0; j < 2; j++)
		{
			switch (number)
			{
			case 1:
				for (int k = 0; k < 9; k++)
				{
					if (k == 4)
					{
						cout << " * ";
					}
					else
					{
						cout << "  ";
					}
					if (k == 2 || k == 5 || k == 8)
					{
						cout << endl;
					}
				}
				break;
			case 2:
				for (int k = 0; k < 9; k++)
				{
					if (k == 4 || k == 3)
					{
						cout << " * ";
					}
					else
					{
						cout << "  ";
					}
					if (k == 2 || k == 5 || k == 8)
					{
						cout << endl;
					}
				}
				break;
			case 3:
				for (int k = 0; k < 9; k++)
				{
					if (k == 4 || k == 3 || k == 5)
					{
						cout << " * ";
					}
					else
					{
						cout << "  ";
					}
					if (k == 2 || k == 5 || k == 8)
					{
						cout << endl;
					}
				}
				break;
			case 4:
				for (int k = 0; k < 9; k++)
				{
					if (k == 4 || k == 3 || k == 6 || k == 7)
					{
						cout << " * ";
					}
					else
					{
						cout << "  ";
					}
					if (k == 2 || k == 5 || k == 8)
					{
						cout << endl;
					}
				}
				break;
			case 5:
				for (int k = 0; k < 9; k++)
				{
					if (k == 0 || k == 2 || k == 4 || k == 6 || k == 8)
					{
						cout << " *";
					}
					else
					{
						cout << "  ";
					}
					if (k == 2 || k == 5 || k == 8)
					{
						cout << endl;
					}
				}
				break;
			case 6:
				for (int k = 0; k < 9; k++)
				{
					if (k == 0 || k == 3 || k == 6 || k == 2 || k == 5 || k == 8)
					{
						cout << " * ";
					}
					else
					{
						cout << "  ";
					}
					if (k == 2 || k == 5 || k == 8)
					{
						cout << endl;
					}
				}
				break;
			default:
				break;
			}

			number = compNumber;
			if (j < 1)
			{
				cout << "Cube of your enemy : \n";
			}
		}
	}

	cout << "Your score : " << usersSum << endl;
	cout << "Enemy score : " << compSum << endl;

	if (usersSum > compSum)
	{
		cout << "Greeting! You won!\n";
	}
	else if (compSum > usersSum)
	{
		cout << " You lose!\n";
	}
	else
	{
		cout << "A draw.Account is equeal!";
	}

	system("pause");
	return 0;
}