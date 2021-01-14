#include <iostream>
#include <ctime>
using namespace std;

int i = 0;
void printNumber(int number)
{
	cout << "Level " <<  ++i << " You result is " << number << "  " << &number << endl;
	if(number > 0)
		printNumber(number - 1);
	if (number < 4 && number >= 0)
	{
		
		cout << "You result is " << number << "  " << &number << endl;
	}
	
}
template <typename T>
void quickSortR(T[], int);

void fillArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 50;
}

void fillArrPtr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 50 + 50;
	}
}

void my_swap(int *a, int *b) //обмін змінних по адресі в пам'яті
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void fillMatrix(int *matrix[], int N)
{
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			*(*matrix + i) = rand();
}

void main()
{
	int arr[11];
	srand(time(0));
//	int n = 4;
//	printNumber(n);
//	fillArr(arr, 11);
	fillArrPtr(arr, 11);
	for (int i = 0; i < 11; i++)
	{
		
		cout << arr[i] << " ";
	}
	cout << endl;
	//cout << "after quick sort" << endl;
	//quickSortR(arr, 10);
	//for (int i = 0; i < 11; i++)
	//{
	//	cout << arr[i] << " ";
	//}
	//cout << endl;

	int a = 10;
	int *pA = &a;  // вказівник на змінну а
	cout << &a << endl; // дивимось адресу змінної в пам'яті комп'ютера
	cout << pA << endl; // побачимо адресу в шістнадцятковому форматі, вона буде така ж як і адреса змінної а з попереднього рядка коду, тому що pA вказує на ту саму ділянку в пам'яті де знаходиться змінна а
	cout << *pA << endl; // розіменовуємо вказівник рА - і дивимось, яке значення знаходиться за адресою вказівника . Результат   10
	*pA = 100; // змінюємо значення в комірці пам'яті за адресою вказівника
	cout << *pA << endl; // дивимось, нове значення = 100
	cout << a << endl; // переконуємось, що змінивши значення в рядку №76 - змінилось значення і змінної а, так як наш вказівник рА вказує на ту саму комірку в пам'яті!!

	int a_ = 10, b = 45;
	cout << "swap" << endl;
	my_swap(&a_,&b); // передаємо у функцію змінні по адресі  & - операція взяття адреси в пам'яті комп'ютера
	cout << "after swap" << endl;
	cout << "a = " << a_ << " b = " << b << endl;
}

template<typename T>
void quickSortR(T arr[], int size)
{
	int i = 0; 
	int j = size;

	T temp;
	T centr;

	centr = arr[size / 2]; // центральний елемент 

	do { // поділ на 2 частини
		while (arr[i] < centr) i++;
		while (arr[j] > centr) j--;

		if (i <= j) {
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}

	} while (i <= j);
	if(size > i) quickSortR(arr, j);
	if(size > 0) quickSortR(arr+i, size - i);
}
