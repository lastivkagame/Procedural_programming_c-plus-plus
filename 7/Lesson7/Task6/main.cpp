#include <iostream>
using namespace std;

int main()
{
	//Створити масив із 10 елементів. Заповнити його з клавіатури. Вивести на екран кожний елемент, індекс якого парний.

	const int SIZE = 10;
	int arr10[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter element # " << i << ", please: ";
		cin >> arr10[i];
	}

	cout << "Array : index % 2 == 0\n";

	for (int i = 0; i < SIZE; i++)
	{
		if (i % 2 == 0)
		{
			cout << "element #(index) " << i << " is " << arr10[i] << endl;
		}
	}

	system("pause");
	return 0;
}