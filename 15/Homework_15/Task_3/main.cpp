/*���������:
�������� 2 ����� �������: bigger(int, int)
� ������� true, ���� ����� ����� ����� �������, ������ ������� false;
- ������� smaller(int, int ) � �������, ������� true, ���� ����� ����� �������.

�������� ������� sort_arr(int *array, int size, bool(*f)(int, int)) ��� ������������� ������.
������� ������ ����� �� �������� �� ������ �������, ��� ���� �������� ������� ����������.
���, ���������, ��� �������� � ������� sort_arr() ����� ���������� ������ ������� bigger,
����� ������������ �� ���������, � ��� �������� ������ ������� smaller, ����� ������������ �� ��������.*/

#include<iostream>
#include <ctime>
using namespace std;

void fillArr(int arr[], int size);
void printArr(int arr[], int size);
bool bigger(int a, int b);
bool smaler(int a, int b);
void sort_arr(int* arr, int size, bool(*f)(int, int));

int main() {

	srand(time(NULL));

	int size;

	do {
		cout << "Enter count of array: ";
		cin >> size;
	} while (size <= 0);

	int* userArr = new int[size];

	fillArr(userArr, size);
	printArr(userArr, size);

	cout << "\tBigger\n";
	sort_arr(userArr, size, bigger);

	cout << "\tSmaler\n";
	sort_arr(userArr, size, smaler);

	return 0;
}

void fillArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void printArr(int arr[], int size)
{
	cout << "  Array { ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "} \n\n";
}

bool bigger(int a, int b)
{
	if (a > b)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool smaler(int a, int b)
{
	if (a < b)
	{
		return false;
	}
	else
	{
		return true;
	}
}

void sort_arr(int* arr, int size, bool(*f)(int, int))
{
	int temp;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (f(arr[j + 1], arr[j]))
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	printArr(arr, size);
}