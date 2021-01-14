#include <iostream>
using namespace std;

int arithmeticMean(int arr[], int size);

int main()
{
	//Задание 6: Написать функцию, определяющую среднее арифметическое элементов передаваемого ей массива.

	const int SIZE = 10;
	int userArray[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter number, pls: ";
		cin >> userArray[i];
	}

	cout << "Arithmetic Mean of this array : " << arithmeticMean(userArray, SIZE) << endl;

	return 0;
}

int arithmeticMean(int arr[], int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}

	return (sum / 10);
}
