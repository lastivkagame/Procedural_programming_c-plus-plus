#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//5. Написати функцію для сортування, пошуку мінімуму та максимуму одновимірного масиву.
// Використовуючи дані функцію протестувати роботу для наступного завдання :
//  Знайти мінімальне та максимальні значення.
//  Відсортувати всі елементи ДО мінімального по зростанню, а ПІСЛЯ максимального - по спаданню.
//  Елементи, які знаходяться між мінімальним та максимальним елементами збільшити в 10 раз.

void fillArr(int arr[], int size);
void displaylArr(int arr[], int size);

template <typename T>
void sortArr(T arr[], int size, bool flag);

template <typename T>
int maxArr(T arr[], int size);

template <typename T>
int minArr(T arr[], int size);

void multiplyingArray(int arr[], int min, int max);

int main()
{
	const int SIZE = 10;
	int userArr[SIZE];
	int max, min;

	cout << " Simple Array\n";
	fillArr(userArr, SIZE);
	displaylArr(userArr, SIZE);

	max = maxArr(userArr, SIZE);
	min = minArr(userArr, SIZE);

	//  1
	cout << "Max value in array: " << userArr[max] << endl;
	cout << "Min value in array: " << userArr[min] << endl;

	//  2
	cout << " Sort Array #1\n";
	sortArr(userArr, SIZE, false);
	displaylArr(userArr, SIZE);

	cout << " Sort Array #2\n";
	sortArr(userArr, SIZE, true);
	displaylArr(userArr, SIZE);

	//  3  (Просто перед тим ми відсортували масив то це виходить
	// збільшити весь масив крім максимального і мінімального значень,
	// чи початковий масив? (я використаю відсортований)

	// бо перед тим відсортували масив
	max = maxArr(userArr, SIZE);
	min = minArr(userArr, SIZE);

	cout << " Multiplying \n";
	multiplyingArray(userArr, min, max);
	displaylArr(userArr, SIZE);

	return 0;
}

void fillArr(int arr[], int size)
{
	srand(time(nullptr));

	for (int i = 0; i < size; i++)
	{
		//ВІД Y до X(не включно) : rand() % (X - Y) + Y
		arr[i] = rand() % 110 - 10;
	}
}

void displaylArr(int arr[], int size)
{
	cout << " Array : ";

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

template <typename T>
void sortArr(T arr[], int size, bool flag)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (flag == true)
			{
				if (arr[j] > arr[i])
				{
					T temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
			else
			{
				if (arr[j] < arr[i])
				{
					T temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
}

template <typename T>
int maxArr(T arr[], int size)
{
	int max = arr[0];
	int pos = 0;
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			pos = i;
		}
	}
	return pos;
}

template <typename T>
int minArr(T arr[], int size)
{
	int min = arr[0];
	int pos = 0;
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			pos = i;
		}
	}
	return pos;
}

void multiplyingArray(int arr[], int min, int max)
{
	//просто пересортували масив щоб йшло від більшого до меншого (а може бути й навпаки)
	if (min > max)
	{
		max++;

		for (int i = max; i < min; i++)
		{
			arr[i] *= 10;
		}
	}
	else
	{
		min++;

		for (int i = min; i < max; i++)
		{
			arr[i] *= 10;
		}
	}
}