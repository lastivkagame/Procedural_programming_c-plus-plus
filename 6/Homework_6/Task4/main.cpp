#include <iostream>
using namespace std;

int main()
{
	//4.Створіть вічний цикл while, в якому виводяться числа від 1 до безкінечності. Зупиніть його на числі 666.

	int number = 1;

	while (true)
	{
		cout << number << " ";
		number++;

		if (number == 667)
		{
			break;
		}
	}
}