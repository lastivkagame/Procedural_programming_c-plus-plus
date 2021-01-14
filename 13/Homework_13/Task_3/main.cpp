/*3. Створити два масиви користувацького розміру. Бажано використайте для цього функцію fillArr(),
яка дозволятиме користувачу вводити дані, Напишіть функції які заповнюють і виводять на екран ці масиви.
Напишіть функцію FindSmaller(), яка прийматиме два масиви і шукатиме найменший елемент в двох масивах разом.
 Вона повертає значення цього елементу.*/

#include <iostream>
using namespace std;

void fillArr(int userArr[], int size);
void printArr(int userArr[], int size);
int FindSmaller(int userArr1[], int userArr2[], int size1, int size2);

int main() {

	int size1, size2;

	cout << "Enter how many numbers you want enter in first array, pls: ";
	cin >> size1;

	cout << "Enter how many numbers you want enter in second array, pls: ";
	cin >> size2;

	if (size1 <= 0 || size2 <= 0)
	{
		cout << "Incorrect direction!Please try again.\n\n";
	}
	else
	{
		int* userArr1 = new int[size1];
		int* userArr2 = new int[size2];

		cout << " Array #1 \n";
		fillArr(userArr1, size1);

		cout << " Array #2 \n";
		fillArr(userArr2, size2);

		printArr(userArr1, size1);
		printArr(userArr2, size2);

		cout << "Minimum number of 2 arrays: " << FindSmaller(userArr1, userArr2, size1, size2);
	}
	return 0;
}

void fillArr(int userArr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Element # " << i << ". Enter number, pls: ";
		cin >> userArr[i];
	}
}

void printArr(int userArr[], int size)
{
	cout << " Array \n { ";
	for (int i = 0; i < size; i++)
	{
		cout << userArr[i] << " ";
	}
	cout << "}\n\n";
}

int FindSmaller(int userArr1[], int userArr2[], int size1, int size2)
{
	int min1 = userArr1[0], min2 = userArr2[0];

	for (int i = 0; i < size1; i++)
	{
		if (userArr1[i] < min1)
		{
			min1 = userArr1[i];
		}
	}

	for (int i = 0; i < size2; i++)
	{
		if (userArr2[i] < min2)
		{
			min2 = userArr2[i];
		}
	}

	if (min1 < min2)
	{
		return min1;
	}
	else
	{
		return min2;
	}
}