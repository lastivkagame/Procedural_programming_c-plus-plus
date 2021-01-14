#include <iostream>
using namespace std;

int main()
{
	//13.Створити масив із 10 елементів. Їх заповнює користувач. Написати програму,
	// яка не дасть користувачу вводити число, яке вже є в масиві.

	const int SIZE = 10;
	int arr[SIZE];

	cout << "You have to enter 10 different digits\n";

	for (int i = 0; i < SIZE; i++)
	{
		cout << "enter element # " << i + 1 << " : ";
		cin >> arr[i];

		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				do
				{
					cout << "Thit number has already been introduced!Please enter other number!\n";
					cout << " - enter element #" << i + 1 << " : ";
					cin >> arr[i];
					cout << " ";
				} while (arr[i] == arr[j]);
			}
		}
	}

	cout << "Array : ";

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	system("pause");
	return 0;
}