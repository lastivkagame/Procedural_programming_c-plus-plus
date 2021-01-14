#include <iostream>
using namespace std;

int main()
{
	//12.Створити масив із 10 елементів. Першим двом задати значення 1. Кожний наступний елемент – це сума двох попередніх.
	//Цей масив зберігає перших 10 чисел Фібоначчі. Прочитайте про них в інтернеті, якщо не розумієте задачу.

	const int SIZE = 10;
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		if (i == 0 || i == 1)
		{
			arr[i] = 1;
		}
		else
		{
			arr[i] = (arr[i - 2] + arr[i - 1]);
		}
	}

	cout << "The first 10 Fibonacci numbers : ";

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	system("pause");
	return 0;
}