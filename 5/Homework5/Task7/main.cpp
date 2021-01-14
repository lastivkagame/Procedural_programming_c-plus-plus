#include <iostream>
using namespace std;

int main()
{
	// 7.Користувач вводить кількість чисел, які він буде вводити. Після цього він починає їх вводити цю кількість разів.
	//Кожне число добавляється до суми. Скористайтесь циклом while і виведіть в кінці суму.

	int numberCount, numbers, sum = 0;

	cout << "enter number count,pls : ";
	cin >> numberCount;

	while (numberCount > 0)
	{
		cout << "enter number: ";
		cin >> numbers;

		sum += numbers;
		numberCount--;
	}

	cout << "Sum of all your numbers is " << sum << endl;
}