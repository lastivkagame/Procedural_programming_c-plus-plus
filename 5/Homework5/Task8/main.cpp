#include <iostream>
using namespace std;

int main()
{
	// 8.���������� ������� ����� �� ��� �� ���� �� ����� 0. ������� ���� �������� ����� ���������� �� 1.
	// ������������� ������ do while � ������� � ���� ������ ����� �� ���.

	int numberCount = 0, number;

	do
	{
		cout << "enter number,pls : ";
		cin >> number;

		numberCount++;

	} while (number != 0);

	cout << "You enter : " << numberCount << " numbers";
}