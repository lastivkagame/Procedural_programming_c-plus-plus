#include <iostream>
using namespace std;

int main()
{
	//4.������� ����� ���� while, � ����� ���������� ����� �� 1 �� �����������. ������� ���� �� ���� 666.

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