#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//Створити двовимірний масив 5 на 5, заповнити його рандомними значеннями від 0 до 9, вивести його на екран.

	srand(time(nullptr));

	const int SIZE = 5;
	int arr[SIZE][SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			arr[i][j] = rand() % 9;
		}
	}

	cout << "Aray : \n";

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}