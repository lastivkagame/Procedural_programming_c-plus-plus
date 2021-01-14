/*9: Подсчитать количество слов во введенном предложении.*/

#include <iostream>
using namespace std;

int digitsOfWord(char symbolLine1[]);

int main() {

	char symbolLine1[100];   // array main

	cout << "Enter some text,pls: ";
	cin.getline(symbolLine1, 100);

	cout << "This is " << digitsOfWord(symbolLine1) << " words\n";

	system("pause");
	return 0;
}

int digitsOfWord(char symbolLine1[])
{
	int digits = 1;

	for (int i = 0; i < strlen(symbolLine1); i++)
	{
		if (symbolLine1[i] == ' ')
		{
			digits++;
		}
	}
	return digits;
}