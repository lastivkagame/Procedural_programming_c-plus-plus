#include <iostream>
using namespace std;

int main()
{
	//Створити масив із 10 елементів. Заповнити її з клавіатури. Найти в масиві індекс першого нуля і останнього.
	// Вивести на екран весь масив і вивести на екран всі елементи між цими двома нулями.
	// Наприклад якщо є масив: 1 8 3 0 5 4 9 1 0 4, то треба вивести спочатку весь масив, а потім вивести 5 4 9 1.
	// Врахувати ситуацію, якщо нулів не буде або буде один нуль.

	const int SIZE = 10;
	int arr[SIZE];
	int zeroDigits = 0;

	//ввід значень в масивy
	for (int i = 0; i < SIZE; i++)
	{
		cout << "enter number(element #" << i + 1 << "), pls:";
		cin >> arr[i];
	}

	cout << "Array : ";

	// вивід значень масиву
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";

		//визначення кількості нулів
		if (arr[i] == 0)
		{
			zeroDigits++;
		}
	}
	cout << endl;

	//перевірка чи є 2+ нулів
	if (zeroDigits > 1)
	{
		cout << "Numer between zeros : \n";

		for (int i = 0; i < SIZE; i++)
		{
			//цифри між нулями
			if ((arr[i] == 0) && (arr[i + 1] != 0))
			{
				do
				{
					//вивід
					cout << arr[i + 1] << " ";
					i++;

					// щоб не виводилися нулі
					if (arr[i + 1] == 0)
					{
						break;
					}
				} while (arr[i] != 0);

				cout << endl;

				zeroDigits /= 2;

				if (zeroDigits < 2)
				{
					break;
				}

				if (arr[SIZE - 1] == 0)
				{
					break;
				}
			}
		}
	}
	else
	{
		cout << "You did not enter 0. Or you enered one 0\n";
	}
	cout << endl;

	system("pause");
	return 0;
}