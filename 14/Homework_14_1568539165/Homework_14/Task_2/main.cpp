/*2: Написать функцию, которая удаляет из строки все вхождения в нее заданного символа.*/

#include <iostream>
using namespace std;

void printArr(char symbolLine1[]);
void delSymbols(char symbolLine[], char symbolLine1[], char symbol);

int main() {

	char symbolLine1[100];
	char* symbolLine = new char[100];
	char symbol;

	cout << "Enter some text,pls: ";
	cin.getline(symbolLine, 100);

	printArr(symbolLine);

	cout << "Enter symbol that you want delete: ";
	cin >> symbol;

	delSymbols(symbolLine, symbolLine1, symbol);
	printArr(symbolLine1);

	delete[]symbolLine;

	system("pause");
	return 0;
}

void printArr(char symbolLine1[])
{
	for (int i = 0; i < strlen(symbolLine1); i++)
	{
		cout << symbolLine1[i];
	}
	cout << endl;
}

void delSymbols(char symbolLine[], char symbolLine1[], char symbol)
{
	for (int i = 0, j = 0; i < strlen(symbolLine); i++)
	{
		if (symbolLine[i] != symbol)
		{
			symbolLine1[j++] = symbolLine[i];
		}

		if (i == (strlen(symbolLine) - 1))
		{
			symbolLine1[j] = '\0';
		}
	}
}