#include <iostream>
using namespace std;

void fillArr(int arr[], int size);
void displayArr(int arr[], int size);
void otherNumber(int arr[], int size);
bool scholarship(int arr[], int size);

int main()
{
	//1. Написать программу «успеваемость». Пользователь вводит 10 оценок студента. 
	// Реализовать меню для пользователя
	//	- Вывод оценок(вывод содержимого массива)
	//	- Пересдача экзамена(пользователь вводит номер элемента массива и новую оценку)
	//	- Выходит ли стипендия(стипендия выходит, если средний бал не ниже 10.7)
	//	У задачі обов'язково використати функції!!!

	cout << "\tYour progress\n";

	const int SIZE = 10;
	int userArr[SIZE];
	int choose = 0;

	fillArr(userArr, SIZE);

	while (choose != 4)
	{
		cout << "1 - Display your grades\n";
		cout << "2 - Re-pass the exam\n";
		cout << "3 - Scholarship\n";
		cout << "4 - Exit\n";
		cout << "Answer: _\b";
		cin >> choose;

		switch (choose)
		{
		case 1:
			displayArr(userArr, SIZE);
			break;
		case 2:
			otherNumber(userArr, SIZE);
			break;
		case 3:
			if (scholarship(userArr, SIZE) == true)
			{
				cout << " Congratulations! You have scholarship\n";
			}
			else
			{
				cout << " You haven't scholarship\n";
			}
			break;
		case 4:
			cout << "Bye!\n";
			break;
		default:
			cout << "Incorrect direction!\n";
			break;
		}
	}

	return 0;
}

void fillArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int max = 12, min = 1;

		//перевірка некоректних значень
		do
		{
			cout << "Enter student grade: ";
			cin >> arr[i];

			if ((arr[i] < min) || (arr[i] > max))
			{
				cout << "Incorrect direction!\n";
			}
		} while ((arr[i] < min) && (arr[i] < max));
	}
}

void displayArr(int arr[], int size)
{
	cout << "Student grade: ";

	for (int i = 0; i < size; i++)
	{
		cout << arr[i];

		if (i != 9)
		{
			cout << ", ";
		}
	}

	cout << endl;
}

void otherNumber(int arr[], int size)
{
	int position, number;

	cout << "Enter number position of student grade: ";
	cin >> position;

	cout << "Enter new grade: ";
	cin >> number;

	arr[position - 1] = number;
}

bool scholarship(int arr[], int size)
{
	int sum = 0;
	double rezalt;

	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}

	rezalt = double(sum / 10.0);
	cout << "rezalt: " << rezalt << endl;

	if (rezalt > 10.7)
	{
		return true;
	}
	else
	{
		return false;
	}
}