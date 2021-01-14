#include <iostream>
#include <ctime>
using namespace std;

bool positiveNumbers(int arr[], int size, int b);

int main()
{
	const int SIZE = 10;
	int arr[SIZE];
	int sum = 0, b;

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 21 - 10;
		b = i;

		if (positiveNumbers(arr, SIZE,b) == true)
		{
			sum += arr[i];
		}
	}


	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "  ";
	}

	cout << endl;

	cout << "Sum: " << sum << endl;

	system("pause");
	return 0;
}

bool positiveNumbers(int arr[], int size, int b)
{
	if (arr[b] > 0) 
	{
		return true;
	}
	else
	{
		return false;
	}
}
