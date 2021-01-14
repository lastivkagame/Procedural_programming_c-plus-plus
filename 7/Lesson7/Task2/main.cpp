#include <iostream>
using namespace std;

int main()
{
	//Створити масив із 5 дробових елементів. Завдяки списковій ініціалізації заповнити їх дробовими числами 1.1, 2.2, 3.3, 4.4, 5.5. Вивести на екран всі елементи (завдяки циклу for).

	double arr5[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

	cout << "Array : ";

	for (int i = 0; i < 5; i++)
	{
		cout << arr5[i] << " ";
	}

	cout << endl;

	system("pause");
	return 0;
}