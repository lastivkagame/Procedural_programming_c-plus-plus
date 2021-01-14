/*Задание 5: Пользователь вводит строку символов и искомый символ, посчитать сколько раз он встречается
в строке.*/

#include <iostream>
using namespace std;

int seachSymbol(char symbolLine1[], char symbol);

int main() {

	char symbolLine1[100];   // array main
	char symbol;

	cout << "Enter some text,pls: ";
	cin.getline(symbolLine1, 100);

	cout << "Enter symbol,pls: ";
	cin >> symbol;

	cout << " Your symbol is in text : " << seachSymbol(symbolLine1, symbol) << " times\n\n";

	return 0;
}

int seachSymbol(char symbolLine1[], char symbol)
{
	int digits = 0;

	for (int i = 0, j = 0; i < strlen(symbolLine1); i++)
	{
		if (symbolLine1[i] == symbol)
		{
			digits++;
		}
	}

	return digits;
}