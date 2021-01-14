/*	Написати функції для:
1 - заповнення, друку, сортування динамічного масиву;
  - заповнення, друку, сортування динамічної матриці (двовимірний масив)

2 - знаходження мінімуму, максимуму динамічного масиву;
 - знаходження мінімуму, максимуму динамічної матриці (двовимірний масив)

3 - Видалення елемента за вказаною позицією в масиві.
4 - Вставка нового елемента у довільну допустиму позицію у масиві

Продемонструвати роботу з програмою через меню. Використати вказівники на функції.*/

#include <iostream>
using namespace std;

// функції для динамічного масиву
void fillArrDynamic(int userArr[], int size);
void printArrDynamic(int userArr[], int size);
void sortArrDynamic(int userArr[], int size);

int minArrDynamic(int userArr[], int size);
int maxArrDynamic(int userArr[], int size);

int* delElemDynamic(int* user[], int& size);
int* addElemDynamic(int* user[], int& size);

// функції для динамічної матриці (двовимірний масив)
void fillArrDynamicMatrix(int* userArr[], int row, int col);
void printArrDynamicMatrix(int* userArr[], int row, int col);
void sortArrDynamicMatrix(int* userArr[], int row, int col);

int minArrDynamicMatrix(int* userArr[], int row, int col);
int maxArrDynamicMatrix(int* userArr[], int row, int col);

int main() {

	// menu

	int size, row, col;

	do {
		cout << "Enter size 1(size dynamic array): ";
		cin >> size;
	} while (size <= 0);

	int* userArr = new int[size];

	do {
		cout << "Enter row(size dynamic matrix): ";
		cin >> row;
	} while (row <= 0);

	do {
		cout << "Enter col(size dynamic matrix): ";
		cin >> col;
	} while (col <= 0);

	int** userMatrix = new int*[col];
	for (int i = 0; i < col; i++)
	{
		userMatrix[i] = new int[row];
	}

	int choose1, choose2;

	do {
		cout << "\tMenu\n";
		cout << "1 - simple array\n";
		cout << "2 - matrix\n";
		cout << "3 - exit\n";
		cout << "Answer: ";
		cin >> choose1;
		system("cls");

		switch (choose1)
		{
		case 1:
			do {
				cout << "\tMenu\n";
				cout << "1 - fill array\n";
				cout << "2 - print array\n";
				cout << "3 - sort array\n";
				cout << "4 - min of array\n";
				cout << "5 - max of array\n";
				cout << "6 - del element of array\n";
				cout << "7 - add element of array\n";
				cout << "8 - exit\n";
				cout << "Answer: ";
				cin >> choose2;
				system("cls");

				void(*pFunc)(int userArr[], int size);   // вказівник на функцію 
				pFunc = nullptr;
				switch (choose2)
				{
				case 1:
					pFunc = fillArrDynamic;
					break;
				case 2:
					pFunc = printArrDynamic;
					break;
				case 3:
					pFunc = sortArrDynamic;
					break;
				case 4:
					cout << "Min of array: " << minArrDynamic(userArr, size);
					break;
				case 5:
					cout << "Max of array: " << minArrDynamic(userArr, size);
					break;
				case 6:
					delElemDynamic(&userArr, size);
					break;
				case 7:
					addElemDynamic(&userArr, size);
					break;
				case 8:
					cout << "Goodbye!\n";
					break;
				default:
					cout << "Inccorect direction!";
					break;
				}

				if (choose2 <= 8 && choose2 > 0)
				{
					pFunc(userArr, size);
				}

			} while (choose2 != 8);
			break;
		case 2:

			void(*pFunc2)(int* userArr[], int row, int col);   // вказівник на функцію 

			do {
				cout << "\tMenu\n";
				cout << "1 - fill matrix\n";
				cout << "2 - print matrix\n";
				cout << "3 - sort matrix\n";
				cout << "4 - min of matrix\n";
				cout << "5 - max of matrix\n";
				cout << "6 - exit\n";
				cout << "Answer: ";
				cin >> choose2;
				system("cls");

				switch (choose2)
				{
				case 1:
					pFunc2 = fillArrDynamicMatrix;
					break;
				case 2:
					pFunc2 = printArrDynamicMatrix;
					break;
				case 3:
					pFunc2 = sortArrDynamicMatrix;
					break;
				case 4:
					cout << "Min of array: " << minArrDynamicMatrix(&userArr, row, col);
					break;
				case 5:
					cout << "Min of array: " << minArrDynamicMatrix(&userArr, row, col);
					break;
				case 6:
					break;
				default:
					cout << "Inccorect direction!\n";
					break;
				}

			} while (choose2 != 6);
			break;
		case 3:
			cout << "Goodbye!\n";
			break;
		default:
			cout << "Inccorect direction!\n\n";
			break;
		}
	} while (choose1 != 3);

	system("pause");
	return 0;
}

//функції для динамічного масиву
void fillArrDynamic(int userArr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		userArr[i] = rand() % 10;
	}
}

void printArrDynamic(int userArr[], int size)
{
	cout << "  Array { ";
	for (int i = 0; i < size; i++)
	{
		cout << userArr[i] << " ";
	}
	cout << "} \n\n";
}

void sortArrDynamic(int userArr[], int size)
{
	int temp;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (userArr[j + 1] > userArr[j])
			{
				temp = userArr[j + 1];
				userArr[j + 1] = userArr[j];
				userArr[j] = temp;
			}
		}
	}
}

int minArrDynamic(int userArr[], int size)
{
	int min = 0;

	for (int i = 0; i < size - 1; i++)
	{
		if (min > userArr[i])
		{
			min = userArr[i];
		}
	}
	return min;
}

int maxArrDynamic(int userArr[], int size)
{
	int max = 0;

	for (int i = 0; i < size - 1; i++)
	{
		if (max > userArr[i])
		{
			max = userArr[i];
		}
	}
	return max;
}

int* delElemDynamic(int* userArr[], int& size)
{
	int* arr = new int[size - 1];

	int elem;
	cout << "Enter position of elem that you want delete: ";
	cin >> elem;

	if (elem >= 0 && elem < size)
	{
		for (int i = 0; i < size - 1; i++)
		{
			if (i != elem)
			{
				arr[i] = *userArr[i];
			}
			else
			{
				arr[i] = *userArr[i + 1];
			}
		}
	}
	else
	{
		cout << "Inccorect direction!\n";
	}
	return arr;
}

int* addElemDynamic(int* userArr[], int& size)
{
	int position, number, k = 0;

	cout << "Enter position when you want add new element: ";
	cin >> position;

	cout << "Enter number: ";
	cin >> number;

	if (position >= 0 && position < size)
	{
		int* userArr2 = new int[size + 1];

		for (int i = 0; i < size + 1; i++)
		{
			if (i == position)
			{
				userArr2[i] = number;
			}
			else
			{
				if (i < position) {
					userArr2[i] = *userArr[i];
				}
				else {
					userArr2[i] = *userArr[i - 1];
				}
			}
		}
		size++;

		for (int i = 0; i < size; i++) 
		{
			userArr[i] = userArr[2];
		}

		return *userArr;
	}
	return *userArr;
}



void fillArrDynamicMatrix(int* userArr[], int row, int col)
{
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			userArr[i][j] = rand() % 50;
		}
	}
}

void printArrDynamicMatrix(int* userArr[], int row, int col)
{
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			cout << userArr[i][j] << " ";
		}
	}
}

void sortArrDynamicMatrix(int* userArr[], int row, int col)
{
	int k = 0;
	int size = row * col, temp;
	int* arr = new int[size];

	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			arr[k++] = userArr[i][j];
		}
	}

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j + 1] > arr[j])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	k = 0;

	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			userArr[i][j] = arr[k++];
		}
	}
}

int minArrDynamicMatrix(int* userArr[], int row, int col)
{
	int min = 0;

	for (int i = 0; i < col - 1; i++)
	{
		for (int j = 0; j < row - 1; j++)
		{
			if (min > userArr[i][j])
			{
				min = userArr[i][j];
			}
		}
	}
	return min;
}

int maxArrDynamicMatrix(int* userArr[], int row, int col)
{
	int max = 0;

	for (int i = 0; i < col - 1; i++)
	{
		for (int j = 0; j < row - 1; j++)
		{
			if (max > userArr[i][j])
			{
				max = userArr[i][j];
			}
		}
	}
	return max;
}