#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//Є масив символів 10 на 10. Заповнити всі елементи символами «Х» а діагональні символом «О». Виведіть на екран масив.

	srand(time(nullptr));

	const int ROWS = 10, COLUN = 10;
	char arr[ROWS][COLUN];

	for (int i = 0; i < COLUN; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			if ((j == i) || ((j + i) == (ROWS - 1)))
			{
				arr[i][j] = 'X';
			}
			else
			{
				arr[i][j] = 'O';
			}
		}
	}

	for (int i = 0; i < COLUN; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}