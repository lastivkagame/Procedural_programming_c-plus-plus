#include <iostream>
using namespace std;

void classificNumbers(int userArray[], int size10);

int main()
{
	//Задание 7: Написать функцию, определяющую количество положительных, отрицательных и нулевых
	//элементов передаваемого ей массива.

	const int SIZE10 = 10;
	int userArray[SIZE10];

	for (int i = 0; i < SIZE10; i++)
	{
		cout << "Enter number, pls: ";
		cin >> userArray[i];
	}

	classificNumbers(userArray, SIZE10);

	return 0;
}

void classificNumbers(int userArray[], int size10)
{
	int positiveNum = 0, negativeNum = 0, zeroNum = 0;

	for (int i = 0; i < size10; i++)
	{
		if (userArray[i] > 0)
		{
			positiveNum++;
		}
		else if (userArray[i] < 0)
		{
			negativeNum++;
		}
		else
		{
			zeroNum++;
		}
	}

	cout << "Positive digits: " << positiveNum << endl;
	cout << "Negative digits: " << negativeNum << endl;
	cout << "Zero digits: " << zeroNum << endl;
}