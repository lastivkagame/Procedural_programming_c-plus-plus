#include <iostream>

using namespace std;

//Прототипи 
void Show(int arr[], int size); //показ масиву

template<typename T> 
bool LinearSeacrh1(T arr[], int size, T key); //лінійний пошук (перший варіант)

template<typename T> 
int LinearSearch2(T arr[], int size, T key);  //лінійний пошук (другий варіант)

int main()
{
	setlocale(LC_ALL, "rus"); //підключення російської мови

	const int SIZE = 7;
	int arr[SIZE]{ 2,3,1,8,5,1,0 }; //є якийсь масив
	int key;                        //значення, яке шукатиме користувач в масиві

	Show(arr, SIZE); //показ масиву

	//ПЕРШИЙ ВАРІАНТ
	cout << "Первый вариант поиска:\n";

	cout << "Введите значение: ";
	cin >> key;

	if (LinearSeacrh1(arr, SIZE, key))
		cout << "Найдено!\n";
	else
		cout << "Не найдено :(\n";

	//ДРУГИЙ ВАРІАНТ
	cout << "Второй вариант поиска:\n";
	int index;
	cout << "Введите значение: ";
	cin >> key;

	index = LinearSearch2(arr, SIZE, key);

	if (index != 0)
		cout << "Найдено! Это " << index << " элемент!\n";
	else
		cout << "Не найдено :(\n";

	system("pause");
	return 0;
}
void Show(int arr[], int size) //показ масиву
{
	cout << "Array:\n";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";

	cout << endl;
}

//Суть функції: якщо значення найшлося в масиві - функція поверне TRUE
template<typename T> 
bool LinearSeacrh1(T arr[], int size, T key) //лінійний пошук
{
	for (int i = 0; i < size; i++)
		if (key == arr[i]) //якщо значення найшлось
			return true;

	//якщо значення не нашлось
	return false;
}

//Суть функції: якщо значення найшлося в масиві - функція поверне індекс елемента
template<typename T> 
int LinearSearch2(T arr[], int size, T key)//лінійний пошук
{
	for (int i = 0; i < size; i++)
	{
		if (key == arr[i]) //якщо значення найшлося
		{
			return i + 1; //повертається індекс ПЕРШОГО найденого елемента (+1 для ясності користувачу)
		}
	}
	return 0; //якщо значення не найшлось
}
