#include"functions.h"

/*Defination functions  - визначення функцій*/

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
			if (userArr[j + 1] < userArr[j])
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
	int min = userArr[0];

	for (int i = 0; i < size; i++)
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
	int max = userArr[0];

	for (int i = 0; i < size; i++)
	{
		if (max < userArr[i])
		{
			max = userArr[i];
		}
	}
	return max;
}

int* delElemDynamic(int* userArr, int& size)
{
	int* arr = new int[size - 1];

	int elem;
	cout << "Enter position of elem that you want delete: ";
	cin >> elem;

	if (elem >= 0 && elem < size)
	{
		for (int i = 0; i < size - 1; i++)
		{
			if (i < elem)
			{
				arr[i] = userArr[i];
			}
			else {
				arr[i] = userArr[i + 1];
			}
		}
	}
	else
	{
		cout << "Inccorect direction!\n";
	}


	delete[] userArr;


	size--;

	return arr;
}

int* addElemDynamic(int* userArr, int& size)
{
	int position, number, k = 0;

	cout << "Enter position when you want add new element: ";
	cin >> position;

	cout << "Enter number: ";
	cin >> number;

	int* userArr2 = new int[size + 1];

	if (position >= 0 && position < size)
	{
		for (int i = 0; i < size + 1; i++)
		{
			if (i == position)
			{
				userArr2[i] = number;
			}
			else
			{
				userArr2[i] = userArr[k++];
			}
		}
		size++;
	}

	delete[] userArr;



	return userArr2;
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
	cout << "    Array \n";
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			cout << setw(5);
			cout << userArr[i][j];
		}
		cout << endl;
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
			if (arr[j + 1] < arr[j])
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
	int min = userArr[0][0];

	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			if (min > userArr[i][j])
			{
				min = userArr[i][j];
			}
		}
	}
	return min;
}

int maxArrDynamicMatrix(int** userArr, int row, int col)
{
	int max = userArr[0][0];

	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			if (max < userArr[i][j])
			{
				max = userArr[i][j];
			}
		}
	}
	return max;
}