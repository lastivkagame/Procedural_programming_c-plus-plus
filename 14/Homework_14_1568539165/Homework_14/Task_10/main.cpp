/*10:  строка символов. Необходимо проверить является ли эта строка палиндромом.*/

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

	system("pause");
	return 0;
}

bool isPalindrom(char symbolLine1[])
{
	int j = strlen(symbolLine1) - 1;
	char probil = ' ';

	//v - 1

	for (int i = 0; i < strlen(symbolLine1) / 2; i++)
	{
		if (symbolLine1[i] != probil)
		{
			if (symbolLine1[j] != probil)
			{
				if (symbolLine1[i] != symbolLine1[j])
				{
					return false;
				}
				j--;
			}

			if (symbolLine1[j] == probil)
			{
				while (symbolLine1[j] != probil)
				{
					j--;
				}
			}
		}
	}
	return true;

	//v - 2
	/*int temp = 0;
	int lengthArr = strlen(symbolLine1) - 1;

	for (int i = 0; i < lengthArr; i++)
	{
		if (*(symbolLine1 + 1) != *(symbolLine1 + lengthArr--))
		{
			temp++;
		}
	}

	if (temp > 0)
	{
		return false;
	}
	else
	{
		return true;
	}*/
}