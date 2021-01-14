#include <iostream>
using namespace std;

int main()
{
	// 6.Виведіть на екран НЕ ПАРНІ числа від 100 до 0 завдяки циклу do while.

	int  number = 100;

	cout << "Numbers(100-0)that not is paried: ";

	do
	{
		number--;

		if (number % 2 != 0)
		{
			cout << number << ", ";
		}

		number--;

	} while (number > 0);

	cout << "end";
}