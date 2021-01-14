#include <iostream>
using namespace std;

int main()
{
	//Створити масив із 3 символів. Завдяки списковій ініціалізації заповнити їх символами ‘!’, '@’, '#’. Вивести на екран всі елементи (завдяки циклу do while).

	char arr3[3] = { '!', '@', '#' };
	int i = 0;

	cout << "Array : ";

	do
	{
		cout << arr3[i] << " ";
		i++;
	} while (i < 3);

	cout << endl;

	system("pause");
	return 0;
}