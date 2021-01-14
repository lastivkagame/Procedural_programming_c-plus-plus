#include <iostream>
using namespace std;

int main()
{
	//Створити масив із 5 елементів. Заповнити їх з клавіатури. Вивести елементи масиву з кінця.

	const int SIZE = 5;
	int arr5[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter element # " << i + 1 << ", please: ";
		cin >> arr5[i];
	}

	cout << "Array : \n";

	for (int i = SIZE; i > 0; i--)
	{
		cout << "element # " << i << " is " << arr5[i - 1] << endl;
	}

	system("pause");
	return 0;
}