#include <iostream>
using namespace std;

//2.�������� ����������� �������, ������� ������� N ����� � ���, ����� N ������ ������������.
//���������������� ������ ������� ��������.
void printStar(int number);

int main()
{
	//����
	int number;

	cout << "Enter number, pls: ";
	cin >> number;

	printStar(number);

	return 0;
}

void printStar(int number)
{
	//��������
	if (number <= 0)
	{
		cout << "Incorrect direction!";
	}
	else
	{
		if (number != 1)
		{
			number--;
			printStar(number);
		}

		cout << " * ";
	}
}