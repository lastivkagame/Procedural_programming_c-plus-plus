#include <iostream>
using namespace std;

int main()
{
	// 6.������� �� ����� �� ���Ͳ ����� �� 100 �� 0 ������� ����� do while.

	int  number = 100;

	cout << "Numbers(100-0)that not is paried: ";

	do
	{
		number--;

		if (number % 2 != 0)
		{
			cout << number << ", ";
		}

		number--;

	} while (number > 0);

	cout << "end";
}