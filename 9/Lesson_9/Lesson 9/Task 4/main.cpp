#include <iostream>
#include <ctime>
using namespace std;

float addition(int b, int c);
float substraction(int b, int c);
float division(int b, int c);
float multiplication(int b, int c);

int main()
{
	float number1, number2;
	int operation;

	cout << "\tSimple calculator\n";

	cout << "Enter number 1: ";
	cin >> number1;

	cout << "Enter number 2: ";
	cin >> number2;

	cout << "Enter operation,pls: \n";
	cout << " 1 - addition ( + )\n";
	cout << " 2 - substraction ( - )\n";
	cout << " 3 - division ( / )\n";
	cout << " 4 - multiplication ( * )\n";
	cout << " 5 - Nothing\n";
	cout << "Answer: ";
	cin >> operation;

	switch (operation)
	{
	case 1: 
		cout << number1 << " + " << number2 << " = " << addition(number1, number1) << endl;
		break;
	case 2:
		cout << number1 << " - " << number2 << " = " << substraction(number1, number1) << endl;
		break;
	case 3:
		if (number1 == 0)
		{
			cout << "You can't 0 /! Please enter other number!";
		}
		cout << number1 << " / " << number2 << " = " << division(number1, number1) << endl;
		break;
	case 4:
		cout << number1 << " * " << number2 << " = " << multiplication(number1, number1) << endl;
		break;
	case 5:
		cout << "Bye!\n";
		break;
	default:
		cout << "Incorrect direction!\n";
		break;
	}
	
	system("pause");
	return 0;
}

float addition(int b, int c)
{
	return b + c;
}

float substraction(int b, int c)
{
	return b - c;
}

float division(int b, int c)
{
	return b / c;
}

float multiplication(int b, int c)
{
	return  b * c;
}
