#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//11.Створіть масив 5 на 5, заповніть його елементи рандомними дробовими числами. Виведіть масив на екран.

	srand(time(nullptr));

	const int ROWS = 5, COLUMNS = 5;
	double arr[COLUMNS][ROWS];

	for (int i = 0; i < COLUMNS; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			arr[i][j] = (rand() % 100) / 10.0;  // в умові не був вказаний діапазон(і точність) тому хай буде так
		}
	}

	cout << "\tArray\n";

	for (int i = 0; i < COLUMNS; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}

	cout << endl;

	system("pause");
	return 0;
}