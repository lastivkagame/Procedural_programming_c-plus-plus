/*Задание 6: Пользователь вводит строку. Определить количество букв, количество цифр и количество
остальных символов, присутствующих в строке.*/

#include <iostream>
using namespace std;

//int seachSymbol(char symbolLine1[], char symbol);

int main() {
	int i = '48';
	cout << i << endl;

	int j = '49';
	cout << j << endl;
	/*
	char symbolLine1[100];   // array main
	char symbol;

	cout << "Enter some text,pls: ";
	cin.getline(symbolLine1, 100);

	cout << "Enter symbol,pls: ";
	cin >> symbol;

	cout << " Your symbol is in text : " << seachSymbol(symbolLine1, symbol) << " times\n\n";

	return 0;*/
}
/*
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
}*/