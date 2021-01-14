#include <iostream>
using namespace std;

int main() {
	//Написати простий калькулятор. Користувач вводить 2 числа. Потім він в змінну char вводить операцію, яку хоче провести над ними.
	// Якщо «+» додати два числа, якщо «-» - відняти і так само з множенням і діленням. Результат операції запишіть в змінну result і саме її виводьте на екран.
	// Врахуйте помилку з діленням на 0.

	double number1, number2, result;

	cout << "enter number 1,pls: ";
	cin >> number1;

	cout << "enter number 2,pls: ";
	cin >> number2;

	char operation;

	cout << "enter operation(+,-,*,/),pls : ";
	cin >> operation;

	switch (operation)
	{
	case '+':
		result = number1 + number2;
		cout << "Result: " << result;
		break;
	case '-':
		result = number1 - number2;
		cout << "Result: " << result;
		break;
	case '*':
		result = number1 * number2;
		cout << "Result: " << result;
		break;
	case '/':
		if (number2 == 0)
		{
			cout << "number2 = 0.Sorry it's impossible ";
		}
		else 
		{
			result = number1 / number2;
			cout << "Result: " << result;
		}
		break;
	default:
		cout << "Incorrect direction";
		break;
	}
	cout << endl;

	system("pause");
	return 0;
}