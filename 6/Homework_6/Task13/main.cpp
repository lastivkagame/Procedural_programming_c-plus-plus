#include <iostream>
using namespace std;

int main()
{
	//13.� ������ ���� ������ ������� 15 ��. ������ ��������� ���� �� ��������� �� 2 �� ���.
	// ��������� �������� �������, ��� �������� ������ ����� N ��� (�� ������� ����������).
	// ��������� ���������� ��� 4 ���. ���� ������ ������� 15 + 17 + 19 + 21 = 72 ��.

	int days, distanceOnDay = 15, distanceAll = 0;

	cout << "   What distance does the snail slam?\n";

	cout << "Enter the number of days that the snail creeps: ";
	cin >> days;

	for (int i = 0; i < days; i++)
	{
		distanceAll += distanceOnDay;
		distanceOnDay = distanceOnDay + 2;
	}
	cout << "The snail crossed the distance of " << distanceAll << " cm\n";
}