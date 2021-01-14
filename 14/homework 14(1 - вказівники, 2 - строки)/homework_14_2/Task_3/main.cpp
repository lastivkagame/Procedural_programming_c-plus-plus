/*Задание 3:  Написать функцию, которая вставляет в строку в указанную позицию заданный символ.*/

#include <iostream>
using namespace std;

void printArr(char symbolLine1[]);
void addSymbol(char symbolLine1[], char symbolLine[], int position, char symbol);

int main() {

	char symbolLine1[100];   // array main
	char* symbolLine = new char[100];
	char symbol;
	int position;

	cout << "Enter some text,pls: ";
	cin.getline(symbolLine, 100);

	printArr(symbolLine);

	cout << "Enter position that you want add another symbol: ";
	cin >> position;

	if (position < 0)
	{
		cout << "Incoreect direction\n\n";
	}
	else
	{
		cout << "Enter symbol that you want add: ";
		cin >> symbol;

		addSymbol(symbolLine1, symbolLine, position, symbol);
		printArr(symbolLine1);
	}

	delete[]symbolLine;

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

void addSymbol(char symbolLine1[], char symbolLine[], int position, char symbol)
{
	for (int i = 0, j = 0; i < strlen(symbolLine); i++)
	{
		if (i == position)
		{
			symbolLine1[j++] = symbol;
			symbolLine1[j++] = symbolLine[i];
		}
		else
		{
			symbolLine1[j++] = symbolLine[i];
		}


		if (i == (strlen(symbolLine) - 1))
		{
			symbolLine1[j] = '\0';
		}
	}
}