#include <iostream>
using namespace std;

int main()
{
	//10.������� ����� userAge. �������� � ����������� ������ ���� ��. ����� ������. ������� �� ����� ���� ��,
	// � ���� ������� �������� ����� ������� ����������, ������� ����������� �³���� � ���� ����������� �
	// ������� ����� ��.

	int userAge;

	cout << "enter your age,pls: ";
	cin >> userAge;
	cout << "Your age : " << userAge << endl;

	userAge++;
	cout << "Happy Birthday\!\n";
	cout << "Your age : " << userAge << endl;

}