#include <iostream>
using namespace std;

int main()
{
	//9.���������� ������� �����. ���� ���� ������ � ��������� 1�9 ��� 100�999 � ������� �� ����� 
	//����������� ����� ����� �� 1 ��� 3 �����.

	int usersNumber;

	cout << "enter number,pls: ";
	cin >> usersNumber;

	if ((1 <= usersNumber && usersNumber <= 9) || (100 <= usersNumber && usersNumber <= 999)) 
	{
		cout << "Your number have 1 or 3 digits\n";
	}

	system("pause");
	return 0;
}