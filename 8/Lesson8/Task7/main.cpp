#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//Створити двовимірний масив 4 на 5, заповнити його рандомними значеннями від -10 до 10, вивести на екран кількість від’ємних елементів (ну і сам масив).

	srand(time(nullptr));

	int digits = 0;

	const int ROWS = 4, LINE = 5;
	int arr[ROWS][LINE];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < LINE; j++)
		{
			arr[i][j] = rand() % (10 - -10) - 10;
		}
	}

	cout << "Aray : \n";

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < LINE; j++)
		{
			cout << arr[i][j] << " ";
			if (arr[i][j] < 0)
			{
				digits++;
			}
		}
		cout << endl;
	}

	cout << "Numbers < 0: " << digits << endl;

	system("pause");
	return 0;
}