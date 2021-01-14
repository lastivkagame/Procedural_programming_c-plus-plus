#include <iostream>
using namespace std;

//1. Написать рекурсивную функцию нахождения степени числа.
//Проиллюстрируйте работу функции примером.
int bringToPower(int number, int power);

int main() {

	//тест
	int number, power;

	cout << "Enter number,pls : ";
	cin >> number;

	cout << "Enter number power,pls : ";
	cin >> power;

	cout << "Rezalt: " << number << "^" << power << " = " << bringToPower(number, power) << endl;

	return 0;
}

//глобальна змінна
int rezalt = 1;

int bringToPower(int number, int power)
{
	//перевірка
	if (power == 0)
	{
		return 1;
	}
	if (power < -1)
	{
		cout << "Incorrect direction!";
		return -1;
	}
	if (power != 1)
	{
		power--;
		bringToPower(number, power);
	}

	rezalt *= number;

	return rezalt;
}