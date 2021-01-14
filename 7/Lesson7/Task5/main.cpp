#include <iostream>
using namespace std;

int main()
{
	//Створити масив із 10 елементів.Заповнити його з клавіатури.Вивести на екран кожний елемент, значення якого ділиться націло на 7.

	const int SIZE = 10;
	int arr10[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter number # " << i + 1 << ", please: ";
		cin >> arr10[i];
	}

	cout << "Array : number that / 7\n";

	for (int i = 0; i < SIZE; i++)
	{
		if (arr10[i] % 7 == 0)
		{
			cout << "element # " << i + 1 << " is " << arr10[i] << endl;
		}
	}

	system("pause");
	return 0;
}