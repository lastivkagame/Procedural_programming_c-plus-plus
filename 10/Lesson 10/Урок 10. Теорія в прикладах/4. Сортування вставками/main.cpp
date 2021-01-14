#include <iostream>
#include <ctime>
using namespace std;
//Прототипи 
template <typename T> 
void Initialize(T arr[], int size); //заповнення масиву рандомними значеннями

template <typename T> 
void Show(T arr[], int size);       //показ одновимірного масиву

template <typename T> 
void InsertSort(T arr[], int size); //сортування одновимірного масиву

int main()
{
	setlocale(LC_ALL, "rus"); //підключення російської мови
	srand(time(NULL));        //постійно новий рандом

	const int SIZE = 20;
	int arr1[SIZE]; //одновимірний масив

	Initialize(arr1, SIZE); //заповнюємо

	cout << "Одномерный массив до сортировки:\n";
	Show(arr1, SIZE);

	InsertSort(arr1, SIZE); //сортуємо

	cout << "Одномерный массив после сортировки:\n";
	Show(arr1, SIZE);

	system("pause");
	return 0;
}
template <typename T> 
void Initialize(T arr[], int size) //заповнення масиву рандомними значеннями
{
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 11 - 6; //-5...5
}

template <typename T>
void Show(T arr[], int size) //показ одновимірного масиву
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";

	cout << endl;
}

template <typename T>
void InsertSort(T arr[], int size) //сортування одновимірного масиву
{
	//Завдяки змінній і проходимо по кожному елементу масиву
	int i;

	//Завдяки змінній j порівнюємо наступний елемент із і-елеметов
	int j;

	//Завдяки змінній temp міняємо значення двох елементів місцями (метод 3 стаканів)
	T temp;

	//Вважаємо що 0-елемент находиться у відсортованій частині. Тому починаємо з першого
	for (i = 1; i < size; i++)
	{
		//Запам'ятовуємо значення і-того елементу (для порівняння)
		temp = arr[i];

		//Завдяки внутрішньому циклу проходимо по всім елементам невідсортованої частини і шукаємо
		//місце, куди б то вставити елемент у відсортовану частину (цикл зупиниться, поки не найдемо
		//підходяще значення, або поки не пройдемось по всій невідсортованій частині
		for (j = i - 1; j >= 0 && arr[j] > temp; j--) 
			arr[j + 1] = arr[j];

		//Після циклу значення буде найдено, тому записуємо у нього те значення, яке мав і-тий елемент
		arr[j + 1] = temp;
	}
}