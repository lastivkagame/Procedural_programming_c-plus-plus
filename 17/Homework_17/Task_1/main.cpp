/*Ще трішки динамічних масивів:
 - Задание 1: Написать функцию, добавляющую столбец двухмерному массиву в указанную позицию.
 - Задание 2: Написать функцию, удаляющую столбец двухмерного массива по указанному номеру.*/

#include <iostream>
#include <ctime>

void fillArr(int** arr, int rows, int cols);
void printArr(int** arr, int rows, int cols);
void addCols(int** arr, const int rows, int& cols);
void delCols(int** arr, const int rows, int& cols);

using namespace std;

int main()
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

	cout << endl;

	//створюємо двовимірний динамічний масив розміром row x col
	int** s = new int*[row];
	for (int i = 0; i < row; i++)
	{
		s[i] = new int[col];
	}

	fillArr(s, row, col);
	printArr(s, row, col);

	int choose;

	do
	{
		cout << "   Menu\n";
		cout << " 0 - delete col\n";
		cout << " 1 - add col\n";
		cout << " 2 - exit\n";
		cout << "Answer: ";
		cin >> choose;

		switch (choose)
		{
		case 0:
			delCols(s, row, col);
			break;
		case 1:
			addCols(s, row, col);
			break;
		case 2:
			cout << "Goodbye!\n\n";
			break;
		default:
			cout << "Inccorect direction!\n\n";
			break;
		}

		if (choose >= 0 && choose < 2)
		{
			printArr(s, row, col);
		}

	} while (choose < 0 || (choose >= 0 && choose < 2));

	for (int i = 0; i < row; i++)
	{
		delete[]s[i];
	}
	delete[]s;

	system("pause");
	return 0;
}

void fillArr(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
}

void printArr(int** arr, int rows, int cols)
{
	cout << "   Array \n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void addCols(int** arr, const int rows, int& cols)
{
	int** p;
	p = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		p[i] = new int[cols + 1];
	}

	int position;
	cout << "Enter position where must be add col: ";
	cin >> position;

	if (position > 0 && position <= cols + 1)
	{
		position--;   //щоб рахунок починався з одиниці
		int h = 0;

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols + 1; j++)
			{
				if (j != position)
				{
					p[i][j] = arr[i][h++];
				}
				else
				{
					p[i][j] = rand() % 10;
				}
			}

			h = 0;
		}

		cols++;

		//перевиділяємо память 
		for (size_t i = 0; i < rows; i++)
		{
			delete[]arr[i];
			arr[i] = new int[cols];
		}

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				arr[i][j] = p[i][j];
			}
		}
	}
	else
	{
		cout << "Inccorect direction!\n";
	}

	for (int i = 0; i < rows; i++)
	{
		delete[]p[i];
	}
	delete[]p;
}

void delCols(int** arr, const int rows, int& cols)
{
	int** p;
	p = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		p[i] = new int[cols - 1];
	}

	int position;
	cout << "Enter position where must be delete col: ";
	cin >> position;

	if (position > 0 && position <= cols)
	{
		position--;   //щоб рахунок починався з одиниці
		int h = 0;

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols - 1; j++)
			{
				if (h != position)
				{
					p[i][j] = arr[i][h++];
				}
				else
				{
					h++;

					p[i][j] = arr[i][h++];
				}
			}

			h = 0;
		}

		cols--;

		for (size_t i = 0; i < rows; i++)
		{
			delete[]arr[i];
			arr[i] = new int[cols];
		}

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				arr[i][j] = p[i][j];
			}
		}
	}
	else
	{
		cout << "Inccorect direction!\n";
	}

	for (int i = 0; i < rows; i++)
	{
		delete[]p[i];
	}
	delete[]p;
}