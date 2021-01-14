#include <iostream>
using namespace std;

int main()
{
	//Створити масив із 10 елементів. Першому елементу дати значення 0. Кожний наступний елемент на 5 більший за попередній. Заповнити їх  ось так завдяки циклу. Вивести масив на екран

	const int SIZE = 10;
	int arr[SIZE];
	int number = 0;

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = number;
		number += 5;
	}

	cout << "Array : ";

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	system("pause");
	return 0;
}