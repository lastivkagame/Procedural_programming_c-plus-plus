/*4. Створіть два масиви користувацього розміру. Напишіть функцію create(), яка приймає ці
 два масиви (вони попередньо вже мають бути заповнені) і створює масив, розмір якого – це
 сума розмірів цих масивів, а елементи - збільшені вдвічі значення вхідних масивів.
 Протестуйте все, вивівши на екран всі масиви.*/

#include <iostream>
using namespace std;

void fillArr(int userArr[], int size);
void printArr(int userArr[], int size);
void create(int userArr1[], int size1, int userArr2[], int size2);

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

		create(userArr1, size1, userArr2, size2);
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

void create(int userArr1[], int size1, int userArr2[], int size2)
{
	int size3 = size1 + size2, j = 0;
	int* userArrMix = new int[size3];

	for (int i = 0; i < size3; i++)
	{
		if (i < size1)
		{
			userArrMix[i] = (userArr1[i] * 2);
		}
		else
		{
			userArrMix[i] = (userArr2[j++] * 2);
		}
	}
	printArr(userArrMix, size3);
}