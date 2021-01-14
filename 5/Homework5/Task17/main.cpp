#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	/*17.Ви вже створювати калькулятор. Але його проблемою було те, що після вибору операції він закінчував свою роботу.
	Верніться до тієї задачі (код у вас уже має бути або пишіть заново), і засуньте калькулятор в цикл do while.
	Тобто до пунктів меню добавите пункт виходу і пункт «Піднести до степеню». Використайте функцію, з якою познайомились
	в бібліотеці cmath. Разом з цим добавите пункт «Показати корінь».  В цій же бібліотеці є функція sqrt яка приймає
	число і повертає його корінь, тобто вираз cout << sqrt(9); виведе на екран 3.*/

	double number1, number2, result, counter = 1;

	char operation;

	//1) menu
	do {
		cout << "1 - number1 + number2\n";
		cout << "2 - number1 - number2\n";
		cout << "3 - number1 * number2\n";
		cout << "4 - number1 / number2\n";
		cout << "5 - number1^( number2)\n";
		cout << "6 - sqrt(number)\n";
		cout << "7 - Nothing(exit)\n";       //виходить з циклу
		cout << "enter operation,pls : ";
		cin >> operation;

		if (operation == '6')
		{
			cout << "enter number 1,pls: ";
			cin >> number1;
		}
		else if (operation == '7')
		{
			cout << "Goodbye\n";
		}
		else
		{
			cout << "enter number 1,pls: ";
			cin >> number1;

			cout << "enter number 2,pls: ";
			cin >> number2;
		}

		//дія
		switch (operation)
		{
		case '1':
			result = number1 + number2;
			cout << "Result: " << result << endl;
			break;
		case '2':
			result = number1 - number2;
			cout << "Result: " << result << endl;
			break;
		case '3':
			result = number1 * number2;
			cout << "Result: " << result << endl;
			break;
		case '4':
			if (number2 == 0)
			{
				cout << "number2 = 0.Sorry it's impossible ";
			}
			else
			{
				result = number1 / number2;
				cout << "Result: " << result << endl;
			}
			break;
		case '5':
			result = pow(number1, number2);
			cout << "Result: " << result << endl;
			break;
		case '6':
			result = sqrt(number1);
			cout << "Result: " << result << endl;
			break;
		case '7':
			counter -= 2;         //виходить з циклу
			break;
		default:
			cout << "Incorrect direction\n";
			break;
		}
		cout << endl;
	} while (counter > 0);
}
