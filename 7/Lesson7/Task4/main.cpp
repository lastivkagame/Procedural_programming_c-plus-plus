#include <iostream>
using namespace std;

int main()
{
	//Створити масив із 5 елементів. Заповнити його з клавіатури (це цілі числа). Вивести всі елементи в СТОВПЧИК на екран. Ввід і вивід завдяки циклам for.

	int arr5[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter element # " << i + 1 << ", please: ";
		cin >> arr5[i];
	}

	cout << "Array : \n";

	for (int i = 0; i < 5; i++)
	{
		cout << "Element # " << i + 1 << " is " << arr5[i] << endl;
	}
	system("pause");
	return 0;
}