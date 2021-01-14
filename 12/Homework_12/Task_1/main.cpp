/* Задание 1:
Используя два указателя на массив целых чисел, скопировать один массив в другой.
Использовать в программе арифметику указателей для продвижения по массиву, а также
оператор разыменования.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(nullptr));

	const int SIZE = 10;
	int arr1[SIZE];
	int arr2[SIZE];

	int* pArr1 = arr1;
	int* pArr2 = arr2;

	cout << "   Array #1 \n { ";
	for (int i = 0; i < SIZE; i++)
	{
		arr1[i] = rand() % 100;

		cout << *pArr1 << " ";
		pArr1++;
	}

	cout << "}\n\n";

	cout << "   Array #2 \n { ";

	pArr1 = arr1;

	for (int i = 0; i < SIZE; i++)
	{
		pArr2 = pArr1;
		cout << *pArr2 << " ";
		pArr1++;
		pArr2++;
	}
	cout << "}\n\n";

	return 0;
}