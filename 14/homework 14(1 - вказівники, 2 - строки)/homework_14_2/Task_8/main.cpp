/*Задание 8: Дана строка символов. Определить количество букв, цифр и остальных символов,
присутствующих в строке.*/

#include <iostream>
using namespace std;

void printArr(char symbolLine1[]);
void replacesSymbol(char symbolLine1[]);

int main() {

	char symbolLine1[100];   // array main

	cout << "Enter some text,pls: ";
	cin.getline(symbolLine1, 100);

	replacesSymbol(symbolLine1);
	printArr(symbolLine1);

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

void replacesSymbol(char symbolLine1[])
{
	char point = ' ', znakOkluk = '\t';

	for (int i = 0; i < strlen(symbolLine1); i++)
	{
		if (symbolLine1[i] == point)
		{
			symbolLine1[i] = znakOkluk;
		}
	}
}