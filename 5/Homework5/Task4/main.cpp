#include <iostream>
using namespace std;

int main()
{
	// 4.Виведіть на екран числа від 100 до 0 завдяки циклу do while

	int number = 100;

	do
	{
		cout << number << ", ";
		number--;

	} while (number >= 0);

	cout << "start.";
}