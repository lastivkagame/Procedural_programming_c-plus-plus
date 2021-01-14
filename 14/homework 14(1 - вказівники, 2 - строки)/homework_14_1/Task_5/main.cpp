/*Задание 5: Дан массив: А[M] (M вводится с клавиатуры). Необходимо удалить из массива четные или
нечетные значения. Пользователь вводит данные в массив, а также с помощью меню решает, что нужно удалить.*/

#include <iostream>
using namespace std;

void fillArr(int userArr[], int size);
void printArr(int userArr[], int size);

void delElemParn(int userArrA[], int sizeA);
void delElemNeparn(int userArrA[], int sizeA);

int main() {

	int M;

	cout << "Enter how many number in array A,pls: ";
	cin >> M;

	int* A = new int[M];
	int choose;

	fillArr(A, M);

	cout << "How numbers you want delete: \n 1 - Parni \n 2 - Ne Parni\n";
	cin >> choose;

	switch (choose)
	{
	case 1:
		delElemParn(A, M);
		break;
	case 2:
		delElemNeparn(A, M);
		break;
	case 3:
		cout << "Goodbye!\n\n";
		break;
	default:
		cout << "Inccorect direction!\n\n";
		break;
	}

	return 0;
}


void fillArr(int userArr[], int size)
{
	cout << "  Array \n ";

	for (int i = 0; i < size; i++)
	{
		cout << "Enter number (element " << i << " ), pls: ";
		cin >> userArr[i];
	}

	cout << endl;
}

void delElemParn(int userArrA[], int sizeA)
{
	int k = 0, digits = 0;
	int* userArrB = new int;

	for (int i = 0; i < sizeA; i++)
	{
		if (userArrA[i] % 2 == 0)
		{
			userArrB[k++] = userArrA[i];
			digits++;
		}
	}

	for (int i = 0; i < digits; i++)
	{
		userArrA[i] = userArrB[i];
	}

	printArr(userArrA, digits);
}

void delElemNeparn(int userArrA[], int sizeA)
{
	int k = 0, digits = 0;
	int* userArrB = new int;

	for (int i = 0; i < sizeA; i++)
	{
		if (userArrA[i] % 2 != 0)
		{
			userArrB[k++] = userArrA[i];
			digits++;
		}
	}

	for (int i = 0; i < digits; i++)
	{
		userArrA[i] = userArrB[i];
	}

	printArr(userArrA, digits);
}

void printArr(int userArr[], int size)
{
	cout << "  Array \n{ ";

	for (int i = 0; i < size; i++)
	{
		cout << userArr[i] << " ";
	}

	cout << "} \n\n";
}