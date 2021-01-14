#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//Створити дві змінні, дати їм рандомні значення. Вивести ці змінні на екран. Помінять їх значення місцями і знову вивести.

	srand(time(nullptr));

	int number1, number2, number;

	number1 = rand();
	number2 = rand();

	cout << "Number1 is " << number1 << endl;
	cout << "Number2 is " << number2 << endl;

	number = number1;
	number1 = number2;
	number2 = number;
	cout << endl;

	cout << "Number1 is " << number1 << endl;
	cout << "Number2 is " << number2 << endl;

	system("pause");
	return 0;
}