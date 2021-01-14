#include <iostream>
using namespace std;

int main() {

	char *stroka = new char[150];
	int wordDigits = 1;

	cout << "Enter radok: ";
	cin.getline(stroka, 150);

	for (int i = 0; i < strlen(stroka); i++)
	{
		if (stroka[i] == ' ')
		{
			wordDigits++;
		}
	}

	cout << "This is :" << wordDigits << " words\n\n";

	system("pause");
	return 0;
}