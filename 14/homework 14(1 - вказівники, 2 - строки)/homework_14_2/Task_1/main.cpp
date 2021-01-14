/* Задание 1: Написать функцию, которая удаляет изстроки символ с заданным номером.*/

#include <iostream>
using namespace std;

void printArr(char symbolLine[]);
void delSymbol(char symbolLine[]);

int main() {

	char symbolLine[100];

	cout << "Enter some text,pls: ";
	cin.getline(symbolLine, 100);
	printArr(symbolLine);

	delSymbol(symbolLine);

	return 0;
}

void printArr(char symbolLine[])
{
	for (int i = 0; i < strlen(symbolLine); i++)
	{
		cout << symbolLine[i];
	}

	cout << endl;
}

void delSymbol(char symbolLine[])
{
	int symbolIndex, readyText;

	do {
		cout << "Enter index of symbol that you want delete: ";
		cin >> symbolIndex;

		for (int i = symbolIndex; i < strlen(symbolLine); i++)
		{
			symbolLine[i] = symbolLine[(i + 1)];
		}

		printArr(symbolLine);

		cout << "Do you want delete another symbol? \n 1 - Yes \n 2 - No\n";
		cin >> readyText;

	} while (readyText == 1);
}