/*	Написати функції для:
1,2,3 - заповнення, друку, сортування динамічного масиву;
  - заповнення, друку, сортування динамічної матриці (двовимірний масив)

4,5 - знаходження мінімуму, максимуму динамічного масиву;
 - знаходження мінімуму, максимуму динамічної матриці (двовимірний масив)

6 - Видалення елемента за вказаною позицією в масиві.
7 - Вставка нового елемента у довільну допустиму позицію у масиві

Продемонструвати роботу з програмою через меню. Використати вказівники на функції.*/

#include "functions.h"

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

	int** userMatrix = new int* [col];
	for (int i = 0; i < col; i++)
	{
		userMatrix[i] = new int[row];
	}

	void(*pFunc)(int userArr[], int size);   // вказівник на функцію
	pFunc = nullptr;
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

				switch (choose2)
				{
				case 1:
					pFunc = fillArrDynamic;
					cout << "Succsess! Array is fill of random number.\n";
					break;
				case 2:
					pFunc = printArrDynamic;
					break;
				case 3:
					pFunc = sortArrDynamic;
					cout << "Succsess!\n";
					break;
				case 4:
					cout << "Min of array: " << minArrDynamic(userArr, size) << endl;
					break;
				case 5:
					cout << "Max of array: " << maxArrDynamic(userArr, size) << endl;
					break;
				case 6:
					userArr = delElemDynamic(userArr, size);
					break;
				case 7:
					userArr = addElemDynamic(userArr, size);
					break;
				case 8:
					cout << " <- press any key to continue\n";
					break;
				default:
					cout << "Inccorect direction!";
					break;
				}

				if (choose2 <= 3 && choose2 > 0)
				{
					pFunc(userArr, size);
				}

				system("pause");
				system("cls");

			} while (choose2 != 8);
			break;

		case 2:

			void(*pFunc2)(int* userArr[], int row, int col);   // вказівник на функцію
			pFunc2 = nullptr;

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
					cout << "Succsess! Array is fill of random number.\n";
					break;
				case 2:
					pFunc2 = printArrDynamicMatrix;
					break;
				case 3:
					pFunc2 = sortArrDynamicMatrix;
					cout << "Succsess!\n";
					break;
				case 4:
					cout << "Min of array: " << minArrDynamicMatrix(userMatrix, row, col) << endl;
					break;
				case 5:
					cout << "Min of array: " << maxArrDynamicMatrix(userMatrix, row, col) << endl;
					break;
				case 6:
					break;
				default:
					cout << "Inccorect direction!\n";
					break;
				}

				if (choose2 <= 3 && choose2 > 0)
				{
					pFunc2(userMatrix, row, col);
				}

				system("pause");
				system("cls");

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



	for (int i = 0; i < col; i++)
	{
		delete[]userMatrix[i];
	}
	delete[]userMatrix;

	delete[]userArr;

	system("pause");
	return 0;
}