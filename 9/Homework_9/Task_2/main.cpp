#include <iostream>
using namespace std;

int sum(int number1, int number2);

int main()
{
	//Задание 2: Написать функцию, которая получает в качестве параметров 2 целых числа и 
	//возвращает сумму чисел из диапазона между ними.

	int number1, number2;

	cout << "Ennter number 1, pls: ";
	cin >> number1;

	cout << "Ennter number 2, pls: ";
	cin >> number2;

	cout << "Sum(beetwen this numbers): " << sum(number1, number2);

	return 0;
}

int sum(int number1, int number2)
{
	int sum = 0;

	for (int i = number1 + 1; i < number2; i++)
	{
		sum += i;
	}

	return sum;
}
