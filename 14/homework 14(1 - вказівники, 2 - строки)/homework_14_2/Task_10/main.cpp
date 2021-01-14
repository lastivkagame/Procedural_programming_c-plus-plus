/*Задание 10: Дана строка символов. Необходимо проверить является ли эта строка палиндромом*/

#include <iostream>
using namespace std;

bool isPalindrom(char symbolLine1[]);

int main() {

	char symbolLine1[100];   // array main

	cout << "Enter some text,pls: ";
	cin.getline(symbolLine1, 100);

	if (isPalindrom(symbolLine1))
	{
		cout << "It's palidrom\n";
	}
	else
	{
		cout << "It no palidrom\n";
	}

	return 0;
}

bool isPalindrom(char symbolLine1[])
{
	int j = strlen(symbolLine1);
	char probil = ' ';

	for (int i = 0; i < strlen(symbolLine1)/2; i++)
	{
		if (symbolLine1[i] != probil)
		{
			if (symbolLine1[j--] != probil)
			{
				if (symbolLine1[i] != symbolLine1[j])
				{
					return false;
				}
			}
			
			if (symbolLine1[j] == probil)
			{
				while (symbolLine1[j] != probil)
				{
					j--;
				}

				if (symbolLine1[i] != symbolLine1[j])
				{
					return false;
				}
			}
		}
	}
	return true;
}