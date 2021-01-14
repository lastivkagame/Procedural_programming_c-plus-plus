#include <iostream>
using namespace std;

//2.Написать рекурсивную функцию, которая выводит N звезд в ряд, число N задает пользователь.
//Проиллюстрируйте работу функции примером.
void printStar(int number);

int main()
{
	//тест
	int number;

	cout << "Enter number, pls: ";
	cin >> number;

	printStar(number);

	return 0;
}

void printStar(int number)
{
	//перевірка
	if (number <= 0)
	{
		cout << "Incorrect direction!";
	}
	else
	{
		if (number != 1)
		{
			number--;
			printStar(number);
		}

		cout << " * ";
	}
}