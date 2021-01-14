#include <iostream>
#define LINE 	cout << "__________________________" << endl;       // штука яка пишеться замість щоб всюди писати довгий повторюючийся кусок коду (№ 34)
using namespace std;

template <typename T, typename V>    // прототип шаблонної функції
void fillArr(T arr[], V max, int size);      // заповнення масиву

template <typename T>               // прототип шаблонної функції
void printArr(T[], int);                     // вивід масиву на екран

template <typename T>               // прототип шаблонної функції
bool findValue(T[], int, T);                 // знайти чи є введенне значення в масиві

template <typename T>               // прототип шаблонної функції
int findPlace(T[], int, T);                  // 

template <typename T>               // прототип шаблонної функції
int maxArr(T[], int);                       // знаходить максимальне значення в масиві і повертає його індекс в масиві

template <typename T>               // прототип шаблонної функції
int minArr(T[], int);                       // знаходить мінімальне значення в масиві і повертає його індекс в масиві

template <typename T>               // прототип шаблонної функції
void sortArr(T[], int, bool flag = false);  // сортує масив

void main()
{
	// # демонструє що змінні можна створювати в 
	// окремому блоці за межами якого вона вже не буде існувати

	int a = 100;
	cout << " a = " << a << endl;

	LINE   // те що в рядку № 2

	{
		int a = 200;
		cout << " a = " << a << endl;
	}

		LINE   // те що в рядку № 2

		//використовуємо функції заповнення і виводу
		const int SIZE = 5;
	int arr[SIZE];

	fillArr(arr, 100, SIZE);
	printArr(arr, SIZE);

	LINE  // те що в рядку № 2

	//використовуємо функції заповнення і виводу
		double arr2[SIZE];
	fillArr(arr2, 45, SIZE);
	printArr(arr2, SIZE);

	LINE  // те що в рядку № 2

	// функція для того щоб дізнатися чи є введенне 
	//користовачем число в масиві або вивести що такого числа нема

	int key = 0;

	cout << "Search: " << endl;
	cin >> key;

	cout << boolalpha << findValue(arr, SIZE, key) << endl;   //  boolalpha - замість 0 і 1 пише true і false

	LINE  // те що в рядку № 2

	if (findValue(arr, SIZE, key))
	{
		arr[findPlace(arr, SIZE, key)] *= 2;
		printArr(arr, SIZE);
	}
	else 
	{
		cout << "Not found " << endl;
	}

	LINE  // те що в рядку № 2

	// виклик функції яка знаходить найбільше / найменше
	int posMin = maxArr(arr, SIZE);
	int posMax = minArr(arr, SIZE);

	cout << "Max - " << arr[posMin] << endl;
	cout << "Min - " << arr[posMax] << endl;

	LINE  // те що в рядку № 2

	// міняємо місцями найбільше і найбільше значення масиву 
	int temp = arr[posMin];

	arr[posMin] = arr[posMax];
	arr[posMax] = temp;

	cout << "After change " << endl << endl;
	printArr(arr, SIZE);

	LINE  // те що в рядку № 2
	LINE  // те що в рядку № 2

	//функція що сортує масив
	cout << "Sort:" << endl;

	sortArr(arr, SIZE, true);
	printArr(arr, SIZE);

	system("pause");
}

template <typename T, typename V>
void fillArr(T arr[], V max, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % max;
	}
}

template <typename T>
void printArr(T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

template <typename T>
bool findValue(T arr[], int size, T key) {
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
			return true;
	}
	return false;
}

template <typename T>
int findPlace(T arr[], int size, T key)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
			return i;
	}
	return -1;
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
