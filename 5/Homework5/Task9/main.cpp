#include <iostream>
using namespace std;

int main()
{
	// 9.Користувач вводить 2 числа. Виведіть на екран всі числа між цими числами. 
	//Врахуйте помилку, якщо користувач спочатку введе більше а потім менше число. Використовуйте цикл while.

	int numberCount, number1, number2;

	cout << "enter number 1,pls : ";
	cin >> number1;

	cout << "enter number 2,pls : ";
	cin >> number2;

	if (number1 < number2)
	{
		cout << "Between " << number1 << " and " << number2 << " is numbers: ";

		while (number1 != number2)
		{
			if (number2 - number1 != 1)
			{
				number1++;
				cout << number1 << ",";
			}
			else
			{
				number1++;
			}
		}
	}
	else
	{
		cout << "Incorect! (How numbers can be between" << number1 << " and " << number2 << ". You know? There are no such)\n";
	}

	cout << "end";
}