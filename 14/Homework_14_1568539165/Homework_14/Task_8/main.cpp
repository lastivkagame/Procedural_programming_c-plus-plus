/*8: Дана строка символов.Определить количество букв, цифр и остальных символов, присутствующих в строке.*/

#include <iostream>
using namespace std;

void showSymbolCount(char symbolLine1[]);

int main() {

	char symbolLine1[] = { "Hello! Today 9/14/19. #" };
	cout << symbolLine1 << endl;

	showSymbolCount(symbolLine1);

	system("pause");
	return 0;
}

void showSymbolCount(char symbolLine1[])
{
	int symb = 0, numb = 0, other = 0;

	for (int i = 0; i < strlen(symbolLine1); i++)
	{
		if (symbolLine1[i] > 47 && symbolLine1[i] < 58)
		{
			numb++;
		}
		else
		{
			if ((symbolLine1[i] > 64 && symbolLine1[i] < 91) || (symbolLine1[i] > 96 && symbolLine1[i] < 123))
			{
				symb++;
			}
			else
			{
				other++;
			}
		}
	}
	cout << "String have: \n  symbols - " << symb << " \n numbers - " << numb << " \n and other - " << other << endl;
}