#include <iostream>
using namespace std;

int main()
{
	// 8.Користувач вводить числа до тих пір поки не введе 0. Кожного разу лічильник вводу збільшується на 1.
	// Скористайтесь циклом do while і виведіть в кінці скільки чисел він ввів.

	int numberCount = 0, number;

	do
	{
		cout << "enter number,pls : ";
		cin >> number;

		numberCount++;

	} while (number != 0);

	cout << "You enter : " << numberCount << " numbers";
}