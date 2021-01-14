#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//Створити масив із 10 елементів і заповнити їх рандомними числами від -10 до 10. Вивести елементи на екран.
	// Формули:
	// 0...Х (не включно): rand() % X
	// Y...X (не включно): rand() % (X - Y) + Y

	srand(time(nullptr));

	const int SIZE = 10;
	int arr[SIZE];

	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % (10 - -10) - 10;
	}

	cout << "Aray : ";

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	system("pause");
	return 0;
}