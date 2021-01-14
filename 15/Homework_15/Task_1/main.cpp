/* Написать программу, которая осуществляет добавление строки или столбца в любое место двумерной
 матрицы по выбору пользователя.*/

#include <iostream>
#include <ctime>

void addLine(int row, int col, int** p);
void addColun(int row, int col, int** p);

using namespace std;

void main()
{
	srand(time(NULL));

	int row, col;

	do
	{
		cout << " - Enter the amount of lines: ";  //кількість рядків
		cin >> row;
	} while (row <= 0);

	do
	{
		cout << " - Enter the amount of columns: ";  //кількість стовпців
		cin >> col;
	} while (col <= 0);

	cout << "\n";
	//створюємо двовимірний динамічний масив розміром row x col

	int** p;
	p = new int* [row];
	for (int i = 0; i < row; i++)
	{
		p[i] = new int[col + 1];
	}

	//заповнюємо 

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			p[i][j] = rand() % 10;
			cout << p[i][j] << " ";
		}
		cout << endl;
	}

	int vibor;
	do
	{
		cout << " - What will we add? press 0 if line or 1 if column: ";

		cin >> vibor;
	} while (vibor < 0 || vibor>1);

	switch (vibor)
	{
	case 0:
		addLine(row, col, p);
		break;
	case 1:
		addColun(row, col, p);
		break;
	case 2:
		cout << "Goodbye!\n\n";
		break;
	default:
		cout << "Inccorect direction!\n\n";
		break;
	}

	for (int i = 0; i < row; i++)
	{
		delete[]p[i];
	}
	delete[]p;
}

void addLine(int row, int col, int** p)
{
	int nomer_stroki;
	do
	{
		cout << " - Enter a line number below than that a line will be\n added filled by random numbers (numeration of lines from 1): ";
		cin >> nomer_stroki;
	} while (nomer_stroki <= 0 || nomer_stroki >= row);


	int** q;
	q = new int* [row + 1];
	for (int i = 0; i < row + 1; i++)
	{
		q[i] = new int[col];
	}

	//заровнюємо масив до нового рядку
	for (int i = 0; i < nomer_stroki; i++)
	{
		for (int j = 0; j < col; j++)
		{
			q[i][j] = p[i][j];
			cout << q[i][j] << " ";
		}
		cout << endl;
	}

	//заповнення і вставка нового рядка
	for (int j = 0; j < col; j++)
	{
		q[nomer_stroki][j] = rand() % 10;
		cout << q[nomer_stroki][j] << " ";
	}
	cout << endl;


	for (int i = nomer_stroki; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			q[i][j] = p[i][j];
			cout << q[i][j] << " ";
		}
		cout << endl;
	}


	for (int i = 0; i < row + 1; i++)
	{
		delete[]q[i];
	}
	delete[]q;
}

void addColun(int row, int col, int** p)
{
	int nomer_stolba;
	do
	{
		cout << " - Enter the number of column on the right of that \n a column will be added filled by random numbers (numeration of columns from 1): ";
		cin >> nomer_stolba;
		cout << "\n";
	} while (nomer_stolba <= 0 || nomer_stolba >= col);

	int** q;
	q = new int* [row];
	for (int i = 0; i < row; i++)
	{
		q[i] = new int[col + 1];
	}


	int i = 0;
	int j;
	do
	{
		for (j = 0; j < nomer_stolba; j++)
		{
			q[i][j] = p[i][j];
			cout << q[i][j] << " ";
		}

		j = nomer_stolba;

		q[i][j] = rand() % 10;
		cout << q[i][j] << " ";

		for (j = nomer_stolba + 1; j < col + 1; j++)
		{
			q[i][j] = p[i][j - 1];
			cout << q[i][j] << " ";
		}
		i++;
		cout << endl;

	} while (i < row);

	for (int i = 0; i < row; i++)
	{
		delete[]q[i];
	}
	delete[]q;
}