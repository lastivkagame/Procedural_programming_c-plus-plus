#include <iostream>
using namespace std;

int main()
{
	//8.���������� ������� �����. ���� ���� ������ � ������� 10�99 � ������� �� ����� ����� ����� �� 2 �����.

	int usersNumber;

	cout << "enter number,pls: ";
	cin >> usersNumber;

	if (10 <= usersNumber && usersNumber <= 99) 
	{
		cout << "Your number have 2 digits\n";
	}
	
	system("pause");
	return 0;
}