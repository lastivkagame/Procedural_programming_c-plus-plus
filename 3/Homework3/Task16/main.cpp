#include <iostream>
using namespace std;

int main()
{
	//16.���������� ������� � ��������� ��� �� �� �� �� ������.
	// ���� ����� ������� � ������� �� ����� ����������� �������� �� ��������?�. ��������������� if

	int userAge, usersSisterAge;

	cout << "Enter your age,pls: ";
	cin >> userAge;

	cout << "Enter age your sister age,pls: ";
	cin >> usersSisterAge;

	if (userAge == usersSisterAge)
	{
		cout << "Perhaps you and your sister are twins?\n";
	}

}