#include <iostream>
using namespace std;

int main()
{
	// 10.Користувач вводить ціле додатне число (більше за 0). Виведіть на екран це число в оберненому вигляді цифра 
	//за цифрою. Для цього скористайтесь циклом while. Підказка: вираз число % 10 дасть вам останню цифру. 
	//Вираз число /= 10 відкине від числа останню цифру. Ваше діло добавити вивід і придумати умову.
	// Не забутьте добавити if, який перевірятиме, чи користувач дійсно ввів додатне число, яке більше за 0.

	int number1, conversely;

	cout << "enter number 1,pls : ";
	cin >> number1;

	if (number1 > 0)
	{
		cout << "Your number conversely: ";

		while (number1 != 0)
		{
			conversely = number1 % 10;
			number1 /= 10;
			cout << conversely;
		}
	}
	else
	{
		cout << "Inccorect! Your number <= 0\n";
	}

	cout << endl;
}