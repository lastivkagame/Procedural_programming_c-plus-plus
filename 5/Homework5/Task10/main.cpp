#include <iostream>
using namespace std;

int main()
{
	// 10.���������� ������� ���� ������� ����� (����� �� 0). ������� �� ����� �� ����� � ���������� ������ ����� 
	//�� ������. ��� ����� ������������� ������ while. ϳ������: ����� ����� % 10 ����� ��� ������� �����. 
	//����� ����� /= 10 ������ �� ����� ������� �����. ���� ��� �������� ���� � ��������� �����.
	// �� �������� �������� if, ���� �����������, �� ���������� ����� ��� ������� �����, ��� ����� �� 0.

	int number1, conversely;

	cout << "enter number 1,pls : ";
	cin >> number1;

	if (number1 > 0)
	{
		cout << "Your number conversely: ";

		while (number1 != 0)
		{
			conversely = number1 % 10;
			number1 /= 10;
			cout << conversely;
		}
	}
	else
	{
		cout << "Inccorect! Your number <= 0\n";
	}

	cout << endl;
}