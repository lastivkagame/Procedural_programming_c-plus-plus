#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	/*15.Створити гру «Найди Семена». Її суть в тому що є город – двовимірний масив 10 на 10, заповнений символами «О».
	Розмістіть Семена на городі. Тобто розмістіть РАНДОМНО символ «С» десь на полі. Виведіть город на екран.
	Користувач має ввести координати Семена. Якщо він попав по Семену, вивести відповідне повідомлення і закінчити гру.
	Якщо він промазав, вивести відповідне повідомлення і поміняти координати Семена (знову на рандомні).
	Якщо користувач ввів некоректні координати (за городом) – вивести відповідне повідомлення і закінчити гру.*/

	srand(time(nullptr));

	cout << "You must find Semen in your garden (10x10)\n";
	cout << "until he had destroyed the vegetables\n";

	//створюємо масив (garden) 10х10
	const int ROWS = 10, COLUMNS = 10;
	char garden[ROWS][COLUMNS];

	//заповнюємо масив символом О
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			garden[i][j] = 'O';
		}
	}

	//створюємо вічний цикл
	while (true)
	{
		//задаємо точку, де находиться Семен
		int rowSemen = rand() % ROWS;
		int columnSemen = rand() % COLUMNS;
		garden[rowSemen][columnSemen] = { 'C' };

		//виводимо на екран масив і місце Семена С
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLUMNS; j++)
			{
				cout << garden[i][j] << " ";
			}
			cout << endl;
		}

		//створюємо кординати які має ввести користувач
		int row, column;
		cout << "Input the coordinates of Semen (ROW and COLUMN).\n";
		cout << "Enter ROW: ";
		cin >> row;
		row--;
		cout << "Enter the COLUMN: ";
		cin >> column;
		column--;

		//Якщо введені значення менші за 1, або більші за 10, Семен тікає
		if (row < 0 || row > ROWS - 1 || column < 0 || column > COLUMNS - 1)
		{
			cout << "\n Semen escaped\n";
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLUMNS; j++)
				{
					garden[i][j] = 'X';
					cout << garden[i][j] << " ";
				}
				cout << endl;
			}
			break;
		}

		//Якщо знаходимо Семена
		if (garden[row][column] == 'C')
		{
			cout << "\nYou WIN. Strike him well.\n";
			break;
		}
		// місця де гравець не знайшов Семена - позначаємо символом Х
		garden[rowSemen][columnSemen] = { 'X' };
		cout << "\nTry again!\n";
	}

	system("pause");
	return 0;
}