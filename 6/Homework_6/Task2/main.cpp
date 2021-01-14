#include <iostream>
using namespace std;

int main()
{
	//2.Виведіть на екран числа від 0 до 100, перескакуючи через одне (тобто number += 2) завдяки циклу for.

	cout << "Start: ";

	for (int i = 0; i < 100; i += 2)
	{
		cout << i << ", ";
	}

	cout << "end ";
}