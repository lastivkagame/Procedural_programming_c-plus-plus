#include <iostream>
using namespace std;

int main()
{
	//Створити масив із 10 елементів. Завдяки списковій ініціалізації заповнити їх числами 2,4,8,10,12,14,16,18,20,22. Вивести на екран всі елементи (без циклу).

	int arr[10] = { 2,4,8,10,12,14,16,18,20,22 };

	cout << "Array : ";
	cout << arr[0] << " ";
	cout << arr[1] << " ";
	cout << arr[2] << " ";
	cout << arr[3] << " ";
	cout << arr[4] << " ";
	cout << arr[5] << " ";
	cout << arr[6] << " ";
	cout << arr[7] << " ";
	cout << arr[8] << " ";
	cout << arr[9] << " ";

	cout << endl;

	system("pause");
	return 0;
}