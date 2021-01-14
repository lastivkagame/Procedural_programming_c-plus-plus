#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//4. Написати функцію пошуку, яка буде шукати у масиві передане значення(аргумент функції)
//і повертати кількість входжень цього значення в масив

void fillArr(int size, int userArr[]);
int findValue(int size, int userArr[], int number);

int main()
{
	const int SIZE = 10;
	int userArr[SIZE];
	int number;

	fillArr(SIZE, userArr);

	cout << "\tIs your number in an array of random numbers? \n";
	cout << "Enter your number,pls: ";
	cin >> number;

	cout << "In array, your number is found " << findValue(SIZE, userArr, number) << endl;

	return 0;
}

void fillArr(int size, int userArr[])
{
	srand(time(nullptr));

	for (int i = 0; i < size; i++)
	{
		//ВІД Y до X(не включно) : rand() % (X - Y) + Y
		userArr[i] = rand() % 1500 - 500;
	}
}

int findValue(int size, int userArr[], int number)
{
	int digits = 0;

	for (int i = 0; i < size; i++)
	{
		if (userArr[i] == number)
		{
			digits++;
		}
	}
	return digits;
}