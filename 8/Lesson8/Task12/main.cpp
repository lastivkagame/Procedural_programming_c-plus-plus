#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//12.�������� ��� �������, �� �������. ������� ����� ������� �������� ����� � �� ����� ���������� �������,
	// �� ������, ������, �� �������� � ��� ���, ���� �� ���� �� �������� ��������. �� �������� � ��������, 
	//�� � ��� ������� ��� ����� ������.

	srand(time(nullptr));

	int number, love; // lov - ��� ���������� � ���� �������� love or not love

	cout << "\tLove or not love \?\n";

	cout << "Enter the number of petals on the flower: ";
	cin >> number;

	love = rand() % 2;

	for (int i = 0; i < number; i++)
	{
		if (love == 0)
		{
			cout << "  love  ";
			love++;
		}
		else
		{
			cout << " not love ";
			love--;
		}
	}

	cout << endl;

	system("pause");
	return 0;
}