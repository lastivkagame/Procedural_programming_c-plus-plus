#include <iostream>
using namespace std;

int main()
{
	/*16.̳����� ���. ����� ����� ������ ��������. � ������ �� ����� 32 (���������� ����� �� ������).
	���������� �� ������� ����� �� 1 �� 100. �������� �� ��� � �������: ����, �� �����, ��, ����
	����� ����� � ��, �� ����� �����. �������� �������� �� ����. ���� ���������� ������ ����� �����
	��������� ���� �� ����. ϳ��� ���������� ������� ������� ����� �����������.*/

	int number = 32, userCount = 0, userNumber;

	cout << "  You must guess the number which made the computer.\n";

	do
	{
		cout << "Enter number,pls: ";
		cin >> userNumber;

		if (userNumber == number)
		{
			cout << "Yes that my number! You won!\n";
		}
		else if (userNumber > number)
		{
			cout << "My number <\n";
		}
		else
		{
			cout << "My number >\n";
		}

		userCount++;

	} while (userNumber != 32);

	cout << "You used " << userCount << " attempts\n";
}