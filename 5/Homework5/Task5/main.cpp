#include <iostream>
using namespace std;

int main()
{
	// 5.Виведіть на екран ПАРНІ числа від 1 до 100 завдяки циклу while (і внутрішньому if).

	int  number = 1;

	cout << "Even numbers(1-100): ";

	while (number <= 100)
	{
		if (number % 2 == 0)
		{
			cout << number << ", ";
		}

		number++;
	}

	cout << "end";
}