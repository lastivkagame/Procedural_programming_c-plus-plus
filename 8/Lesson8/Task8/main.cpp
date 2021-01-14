#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//Аналогічна задача попередній, але вивести на екран суму всіх елементів.

	srand(time(nullptr));

	int sum = 0;

	const int ROWS = 4, LINE = 5;
	int arr[ROWS][LINE];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < LINE; j++)
		{
			arr[i][j] = rand() % (10 - -10) - 10;
		}
	}

	cout << "Aray : \n";

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < LINE; j++)
		{
			cout << arr[i][j] << " ";
			sum += arr[i][j];
		}
		cout << endl;
	}

	cout << "Sum :  " << sum << endl;

	system("pause");
	return 0;
}