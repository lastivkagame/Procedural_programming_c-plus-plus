#include <iostream>
using namespace std;

int main()
{
	//19.� ��������� ��������� �����. ��������� �� ���� ����� �� 100 � ����� �� 0. ���� �� ���, 
	//�� ������� �� ����� ������� ���� ����� ����� (���� ����� �� 1 �� 9 � �� ���� �����. ���� 10-99 � �� �� �����)

	double userNumber;

	cout << "enter number,pls: ";
	cin >> userNumber;

	if (userNumber > 0 && userNumber < 100)
	{
		if (userNumber > 1 && userNumber < 9) 
		{
			cout << "That number have 1 digits\n";
		}
		else
		{
			cout << "That number have 2 digits\n";
		}
	}

}