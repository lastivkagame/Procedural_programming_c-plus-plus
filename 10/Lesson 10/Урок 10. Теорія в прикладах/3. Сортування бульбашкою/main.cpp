#include <iostream>
#include <ctime>
using namespace std;
//Прототипи 
template <typename T> 
void Initialize(T arr[], int size); //заповнення масиву рандомними значеннями

template <typename T>
void Show(T arr[], int size);       //показ одновимірного масиву

template <typename T>
void BubbleSort(T arr[], int size); //сортування одновимірного масиву

int main()
{
	setlocale(LC_ALL, "rus"); //підключення російської мови
	srand(time(nullptr));     //постійно новий рандом

	const int SIZE = 20;
	int arr1[SIZE]; //одновимірний масив

	Initialize(arr1, SIZE);

	cout << "Одномерный массив до сортировки:\n";
	Show(arr1, SIZE);

	BubbleSort(arr1, SIZE); //сортуємо

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
void BubbleSort(T arr[], int size)
{
	//Завдяки змінній і проходимо по кожному елементу масиву
	int i;

	//Завдяки змінній j порівнюємо з i-тим елементом наступний
	int j;

	//Завдяки змінній temp міняємо значення двох елементів місцями (метод 3 стаканів)
	T temp;

	//Проходимо по кожному елементу (зверніть увагу, зліва направо)
	for (i = 0; i < size; i++)
	{
		//Завдяки внутрішньому циклу починаємо сортування з кінця (зверніть увагу, справа наліво).
		//Якщо перевернути масив догори дригом, то право - це буде низ. А суть в тому що найважча
		//"бульбашка" (елемент) піднімаються знизу наверх (тому і йдемо справа наліво).
		//ЗАУВАЖЕННЯ: йдемо ми лише до "і"-того місця, тому що після кожного циклу проходів
		//на і-тому елементі стоятиме сама легка булька.
		for (j = size - 1; j > i; j--)
		{
			//ЗАУВАЖЕННЯ: > - сортування по зростанню, < - сортування по зменшенню
			if (arr[j - 1] > arr[j]) //якщо наступний елемент більший за данний...
			{
				//...Міняємо їх місцями
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
