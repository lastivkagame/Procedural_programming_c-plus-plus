/*Задание 7: Написать функцию, которая получает указатель на статический массив и его размер. Функция
распределяет положительные, отрицательные и нулевые элементы в отдельные динамические массивы.*/

#include <iostream>
using namespace std;

void fillArr(int myArr[], int size);
void printArr(int myArr[], int size);
void funcArr(int myArr[], int size);

int main() {

	const int SIZE = 10;
	int myArr[SIZE];
	int* myArrVkaz = myArr;

	fillArr(myArr, SIZE);
	printArr(myArr, SIZE);

	funcArr(myArrVkaz, SIZE);

	return 0;
}

void fillArr(int myArr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter number(element # " << i << " : ";
		cin >> myArr[i];
	}
}

void printArr(int myArr[], int size)
{
	cout << "Array { ";
	for (int i = 0; i < size; i++)
	{
		cout << myArr[i] << " ";
	}
	cout << "}\n\n";
}

void funcArr(int myArr[], int size)
{
	int plusDigits = 0, minusDigits = 0, nullDigits = 0;
	int* plusNumber = new int, * minusNumber = new int, * nullNumber = new int;

	for (int i = 0; i < size; i++)
	{
		if (myArr[i] > 0)
		{
			plusNumber[plusDigits++] = myArr[i];
		}
		else if (myArr[i] < 0)
		{
			minusNumber[minusDigits++] = myArr[i];
		}
		else
		{
			nullNumber[nullDigits++] = myArr[i];
		}
	}

	cout << "\tPlus numbers\n";
	printArr(plusNumber, plusDigits);

	cout << "\tMinus numbers\n";
	printArr(minusNumber, minusDigits);

	cout << "\t Null: \n";
	printArr(nullNumber, nullDigits);
}