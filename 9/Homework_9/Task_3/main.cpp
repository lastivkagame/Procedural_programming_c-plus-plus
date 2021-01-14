#include <iostream>
using namespace std;

void sumIdealNumbers(int number1, int number2);

int main()
{
	//Задание 3: Число называется совершенным, если сумма всех его делителей равна ему самому.
	//Напишите функцию поиска таких чисел во введенном интервале.

	int number1, number2;

	cout << "\tIdeal number(in your diapazon)!\n";

	cout << "Enter number 1(from): ";
	cin >> number1;

	cout << "Enter number 2(to): ";
	cin >> number2;

	cout << "Ideal numbers: ";
	sumIdealNumbers(number1, number2);

	return 0;
}

void sumIdealNumbers(int number1, int number2)
{
	for (int i = number1; i < number2; i++)
	{
		int resaltdel = 0;

		for (int j = 1; j < i; j++)
		{
			if ((i % j) == 0)
			{
				resaltdel += j;
			}
		}

		if (resaltdel == i)
		{
			cout << resaltdel << "  ";
		}
	}
}
