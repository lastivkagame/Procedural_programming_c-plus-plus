/*  Задание 2:
Используя указатель на массив целых чисел, изменить порядок следования элементов массива
на противоположный. Использовать в программе арифметику указателей для продвижения по массиву, а также
оператор разыменования.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

	srand(time(nullptr));

	const int SIZE = 5;
	int arr[SIZE];

	int temp;

	int* start = arr;  //вказівник на перший елемент 
	int* end = &arr[SIZE - 1];  // вказівник на останній елемент в масиві

	cout << "  Before \n { ";
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	cout << "} \n\n";

	while (start != end)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}

	cout << "  After \n { ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "} \n\n";

	return 0;
}