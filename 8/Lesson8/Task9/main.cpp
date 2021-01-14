#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//Аналогічна задача попередній, але вивести суму кожного рядка, кожного стовпчика і кожної діагоналі.

	srand(time(nullptr));

	int sum = 0, sum2 = 0;

	const int ROWS = 5, COLUN = 5;
	int arr[ROWS][COLUN];

	//заповнення масиву
	for (int i = 0; i < COLUN; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			arr[i][j] = rand() % (10 - -10) - 10;
		}
	}

	cout << "Aray : \n";

	//вивід масиву
	for (int i = 0; i < COLUN; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;

	//сума рядків
	for (int i = 0; i < COLUN; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			sum += arr[i][j];
		}
		cout << "Sum on " << i + 1 << " rows is " << sum << endl;
		sum = 0;
	}

	cout << endl;

	//сума кожного стовпчика
	for (int k = 0; k < COLUN; k++)
	{
		for (int i = 0; i < COLUN; i++)
		{
			sum += arr[i][k];
		}
		cout << "Sum on " << k + 1 << " colun is " << sum << endl;
		sum = 0;
	}

	cout << endl;

	//сума кожної діагоналі
	for (int i = 0; i < COLUN; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			if (j == i)
			{
				sum += arr[i][j];
			}
			if ((j + i) == (ROWS - 1))
			{
				sum2 += arr[i][j];
			}
		}
	}
	cout << "Diagonal sum 1(left to right): " << sum << endl;
	cout << "Diagonal sum 2(right to left) : " << sum2 << endl;

	cout << endl;

	system("pause");
	return 0;
}